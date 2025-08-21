package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxSubState;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.effects.FlxFlicker;
import lime.app.Application;
import flixel.addons.transition.FlxTransitionableState;
import flixel.tweens.FlxTween;
import flixel.util.FlxTimer;

class FlashingState extends MusicBeatState
{
	public static var leftState:Bool = false;

	var warnText:FlxText;
	override function create()
	{
		super.create();

		var bg:FlxSprite = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.BLACK);
		add(bg);

		warnText = new FlxText(0, 0, FlxG.width,
			"Warning:\n
			before you play this mod \n
			if you are having seizure issue \n
			wait until faisal.exe mod unseizure edition get released \n
			because I don\'t want to hurt you \n
			and I warned about this because this mod contains flash lights \n
			and something that probably will make you dizzy. \n
			have fun.",
			32);
		warnText.setFormat("VCR OSD Mono", 32, FlxColor.WHITE, CENTER);
		warnText.screenCenter(Y);
		add(warnText);
	}

	override function update(elapsed:Float)
	{
		if(!leftState) {
			var back:Bool = controls.BACK;
			if (controls.ACCEPT || back) {
				leftState = true;
				FlxTransitionableState.skipNextTransIn = true;
				FlxTransitionableState.skipNextTransOut = true;
				if(!back) {
					ClientPrefs.flashing = false;
					ClientPrefs.saveSettings();
					FlxG.sound.play(Paths.sound('faisal warning sound'));
					warnText.setFormat("VCR OSD Mono", 32, FlxColor.RED, CENTER);
					FlxG.camera.flash(FlxColor.RED, 2);
					FlxFlicker.flicker(warnText, 6, 6, false, true, function(flk:FlxFlicker) {
						new FlxTimer().start(0.5, function (tmr:FlxTimer) {
							MusicBeatState.switchState(new MuslimWarning());
						});
					});
				} else {
					ClientPrefs.flashing = false;
					ClientPrefs.saveSettings();
					FlxG.sound.play(Paths.sound('faisal warning sound'));
					warnText.setFormat("VCR OSD Mono", 32, FlxColor.RED, CENTER);
					FlxG.camera.flash(FlxColor.RED, 2);
					FlxFlicker.flicker(warnText, 6, 6, false, true, function(flk:FlxFlicker) {
						new FlxTimer().start(0.5, function (tmr:FlxTimer) {
							MusicBeatState.switchState(new MuslimWarning());
						});
					});
				}
			}
		}
		super.update(elapsed);
	}
}
