	ImColor RainbowFade()
	{
		auto frames = ImGui::GetFrameCount();
		static int r = 255;
		static int g = 0;
		static int b = 0;

		// Use modulus to check if it's divisible by 1, and if the remainder equals 0, then we continue. This effect gets called every frame.
		if (frames % 1 == 0)
		{
			if (r == 255 && g < 255 && b == 0) { g++; }
			else if (r > 0 && g == 255 && b == 0) { r--; }
			else if (r == 0 && g == 255 && b < 255) { b++; }
			else if (r == 0 && g > 0 && b == 255) { g--; }
			else if (r < 255 && g == 0 && b == 255) { r++; }
			else if (r == 255 && g == 0 && b > 0) { b--; }
		}
		ImColor RGB = ImColor(r, g, b, 255);
		return RGB;
	}
