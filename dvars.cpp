int __usercall sub_6F8570<eax>(int a1<ebx>, int a2<ebp>, int a3<edi>, int a4<esi>)
{
  int v4; // ST4C_4@1
  int v5; // ST4C_4@1
  int v6; // ST4C_4@1
  int v7; // ST4C_4@1
  int v8; // ST4C_4@1
  int v9; // ST4C_4@1
  int v10; // ST4C_4@1
  int v11; // ST4C_4@1
  int v12; // ST4C_4@1
  int v13; // ST4C_4@1
  int v14; // ST4C_4@1
  int v15; // ST4C_4@1
  int v16; // ST4C_4@1
  int v17; // ST4C_4@1
  int v18; // ST4C_4@1
  int v19; // ST4C_4@1
  int v20; // ST4C_4@1
  int v21; // ST4C_4@1
  int v22; // ST4C_4@1
  int v23; // ST4C_4@1
  int v24; // ST4C_4@1
  int v25; // ST4C_4@1
  int v26; // eax@1
  int v27; // ST44_4@1
  int v28; // ST48_4@1
  int v29; // ST4C_4@1
  const char *v30; // ST50_4@1
  unsigned int v31; // esi@1
  char *v32; // ebx@3
  signed __int16 v33; // di@3
  int v34; // ebp@3
  int v35; // ST4C_4@6
  int v36; // ST4C_4@6
  int v37; // ST4C_4@6
  int v38; // ST4C_4@6
  int v39; // ST4C_4@6
  int v40; // ST4C_4@6
  int v41; // ST4C_4@6
  int v42; // ST4C_4@6
  int v43; // ST4C_4@6
  int v44; // eax@6
  unsigned __int64 v45; // ST48_8@6
  unsigned __int64 v46; // ST4C_8@8
  int result; // eax@8
  int v48; // [sp+14h] [bp-14h]@2
  int v49; // [sp+18h] [bp-10h]@2
  int v50; // [sp+1Ch] [bp-Ch]@2
  int v51; // [sp+20h] [bp-8h]@1
  char v52; // [sp+24h] [bp-4h]@3
 
  v51 = a4;
  sub_73EFF0();
  dword_33248C8 = ((int (__cdecl *)(_DWORD, signed int, signed int, signed int, signed int, _DWORD))sub_5BEC30)(
                    "r_fontResolution",
                    720,
                    720,
                    1080,
                    64,
                    "Console font resolution setting. The value is 720 or 1080.");
  dword_3324B6C = ((int (__cdecl *)(_DWORD, signed int, signed int, signed int, signed int, _DWORD))sub_5BEC30)(
                    "r_resolution",
                    720,
                    480,
                    1080,
                    1,
                    "Console Resolution setting.");
  dword_3324BA4 = sub_504FD0("r_ssao", 0, 0, "Enable SSAO.");
  dword_3324CA8 = ((int (__cdecl *)(_DWORD, int, _DWORD, int, int, _DWORD))sub_6992D0)(
                    "r_ssaoScale",
                    dword_C10E14,
                    0,
                    dword_BE0D64,
                    v4,
                    "SSAO scale.");
  dword_3324C0C = ((int (__cdecl *)(_DWORD, int, _DWORD, int, int, _DWORD))sub_6992D0)(
                    "r_ssaoRadius",
                    dword_C15C10,
                    0,
                    dword_C0AA0C,
                    v5,
                    "SSAO radius.");
  dword_3324824 = ((int (__cdecl *)(_DWORD, int, _DWORD, int, int, _DWORD))sub_6992D0)(
                    "r_ssaoBias",
                    dword_B8B91C,
                    0,
                    dword_BE7CC4,
                    v6,
                    "SSAO bias.");
  dword_3324BC0 = ((int (__cdecl *)(_DWORD, int, _DWORD, _DWORD, int, _DWORD))sub_6992D0)(
                    "r_ssaoIntensity",
                    dword_CDCC1C,
                    0,
                    xmmword_CD120C,
                    v7,
                    "SSAO intensity.");
  dword_3324A2C = sub_504FD0("r_ssaoDebug", 0, 0, "SSAO debug.");
  dword_3324AA8 = sub_504FD0("r_txaa", 0, 0, "Enable TXAA.");
  dword_332492C = sub_504FD0("r_txaaSupported", 0, 0, "True if TXAA is supported.");
  dword_3324B38 = ((int (__cdecl *)(_DWORD, signed int, signed int, signed int, int, _DWORD))sub_5BEC30)(
                    "r_txaaMode",
                    -1,
                    -1,
                    7,
                    v8,
                    "TXAA mode.");
  dword_3324CAC = ((int (__cdecl *)(_DWORD, int, _DWORD, _DWORD, int, _DWORD))sub_6992D0)(
                    "r_txaaDepth1",
                    dword_CD140C,
                    0,
                    xmmword_CD120C,
                    v9,
                    "TXAA depth1");
  dword_3324C44 = ((int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD))sub_6992D0)(
                    "r_txaaDepth2",
                    xmmword_CD120C,
                    0,
                    xmmword_CD120C,
                    v10,
                    "TXAA depth2");
  dword_3324814 = ((int (__cdecl *)(_DWORD, int, _DWORD, int, int, _DWORD))sub_6992D0)(
                    "r_txaaMotion1",
                    dword_C02E78,
                    0,
                    dword_B9A1A4,
                    v11,
                    "TXAA motion1");
  dword_33249C8 = ((int (__cdecl *)(_DWORD, int, _DWORD, int, int, _DWORD))sub_6992D0)(
                    "r_txaaMotion2",
                    dword_B95BC4,
                    0,
                    dword_B9A1A4,
                    v12,
                    "TXAA motion2");
  dword_3324CBC = sub_5BFFE0("r_clipCodec", off_FE0704, 1, 0, "Codec used when rendering clips.");
  dword_3324A24 = sub_5BFFE0("r_clipSize", off_FE0740, 1, 0, "Render clip size.");
  dword_3324AA0 = ((int (__cdecl *)(_DWORD, signed int, signed int, signed int, int, _DWORD))sub_5BEC30)(
                    "r_clipFPS",
                    30,
                    10,
                    60,
                    v13,
                    "Render clip FPS.");
  dword_3324988 = ((int (__cdecl *)(_DWORD, signed int, signed int, signed int, signed int, _DWORD))sub_5BEC30)(
                    "vid_xpos",
                    3,
                    -4096,
                    4096,
                    1,
                    "Game window horizontal position");
  dword_33248A4 = ((int (__cdecl *)(_DWORD, signed int, signed int, signed int, signed int, _DWORD))sub_5BEC30)(
                    "vid_ypos",
                    22,
                    -4096,
                    4096,
                    1,
                    "game window vertical position");
  dword_3324898 = sub_504FD0(
                    "r_autopriority",
                    0,
                    v14,
                    "Automatically set the priority of the windows process when the game is minimized");
  dword_33247A4 = ((int (__cdecl *)(_DWORD, signed int, _DWORD, signed int, signed int, _DWORD))sub_5BEC30)(
                    "r_fullscreen",
                    1,
                    0,
                    2,
                    33,
                    "Game window mode (window, fullscreen, fullscreen window)");
  dword_3324B9C = ((int (__cdecl *)(_DWORD, signed int, _DWORD, signed int, signed int, _DWORD))sub_5BEC30)(
                    "r_previousFullscreen",
                    1,
                    0,
                    2,
                    1,
                    "Prevous fullscreen mode (fullscreen, fullscreen window)");
  dword_3324994 = ((int (__cdecl *)(_DWORD, int, int, int, int, _DWORD))sub_6992D0)(
                    "r_convergence",
                    dword_BA81A0,
                    dword_CD146C,
                    dword_BD6D4C,
                    v15,
                    "Change 3D convergence");
  dword_33249EC = sub_504FD0("r_ignorehwgamma", 0, 33, "Ignore hardware gamma");
  dword_332495C = ((int (__cdecl *)(_DWORD, signed int, signed int, signed int, _DWORD, _DWORD))sub_5BEC30)(
                    "r_texFilterAnisoMax",
                    16,
                    1,
                    16,
                    1,
                    "Maximum anisotropy to use for texture filtering");
  dword_3324C18 = sub_504FD0("r_texFilterDisable", 0, v16, "Disables all texture filtering (uses nearest only.)");
  dword_33249D0 = ((int (__cdecl *)(_DWORD, _DWORD, signed int, signed int, _DWORD, _DWORD))sub_5BEC30)(
                    "r_texFilterAnisoMin",
                    1,
                    1,
                    16,
                    1,
                    "Minimum anisotropy to use for texture filtering (overridden by max)");
  dword_3324A78 = sub_5BFFE0(
                    "r_texFilterMipMode",
                    off_FE0890,
                    0,
                    1,
                    "Forces all mipmaps to use a particular blend between levels (or disables mipping.)");
  dword_3324A88 = ((int (__cdecl *)(_DWORD, _DWORD, int, int, signed int, _DWORD))sub_6992D0)(
                    "r_texFilterMipBias",
                    0,
                    dword_BD82A0,
                    dword_CDCC18,
                    128,
                    "Change the mipmap bias");
  dword_332499C = sub_504FD0("r_fullbright", 0, 128, "Toggles rendering without lighting");
  dword_3324930 = sub_5BFFE0("r_debugShader", off_FE08A4, 0, 128, "Enable normal map debug shader");
  dword_3324C40 = sub_5BFFE0("r_debugPerformance", off_FE08C0, 0, 128, "Enable performance debug shader");
  dword_33249E8 = sub_504FD0("r_lightConflicts", 0, v17, "Shows conflicts between primary lights");
  dword_3324B10 = sub_5BEC30(
                    "r_zebrastripe",
                    0,
                    0,
                    3,
                    128,
                    "Material intensity threshold, 1 = Diffuse Black, 2 = Macbeth Black, 3 = 18% Average Grey");
  dword_33249E4 = sub_504FD0("r_loadingScreen", 0, 16384, "True if the game is playing a loading movie");
  dword_3324938 = sub_504FD0("r_multiGpu", 1, 1, "Optimize for multiple GPUs (if present)");
  dword_3324A40 = sub_5BEC30("r_texFilterQuality", 1, 0, 2, 33, "Texture filtering quality.");
  dword_3324B4C = ((int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, signed int, _DWORD))sub_6992D0)(
                    "r_lodScaleRigid",
                    xmmword_CD120C,
                    xmmword_CD120C,
                    LODWORD(flt_CD1468),
                    128,
                    "Scale the level of detail distance for rigid models (larger reduces detail)");
  dword_3324AB8 = ((int (__cdecl *)(_DWORD, _DWORD, int, _DWORD, signed int, _DWORD))sub_6992D0)(
                    "r_lodBiasRigid",
                    0,
                    dword_BF21C4,
                    0,
                    128,
                    "Bias the level of detail distance for rigid models (negative increases detail)");
  dword_3324AB0 = ((int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))sub_6992D0)(
                    "r_lodScaleSkinned",
                    xmmword_CD120C,
                    xmmword_CD120C,
                    LODWORD(flt_CD1468),
                    128,
                    "Scale the level of detail distance for skinned models (larger reduces detail)");
  dword_3324910 = ((int (__cdecl *)(_DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD))sub_6992D0)(
                    "r_lodBiasSkinned",
                    0,
                    dword_BF21C4,
                    0,
                    128,
                    "Bias the level of detail distance for skinned models (negative increases detail)");
  dword_3324844 = ((int (__cdecl *)(_DWORD, _DWORD, _DWORD, int, int, _DWORD))sub_6992D0)(
                    "r_skinnedCacheOverflowLodMaxScale",
                    LODWORD(flt_CD1468),
                    xmmword_CD120C,
                    dword_C18010,
                    v18,
                    "Maximum LOD scale when skinned vertex cache is overflowed");
  dword_3324788 = ((int (__cdecl *)(_DWORD, int, int, int, int, _DWORD))sub_6992D0)(
                    "r_skinnedCacheOverflowLodScaleDecay",
                    dword_B9E9FC,
                    dword_B95BC4,
                    dword_C18010,
                    v19,
                    "Amount of time it takes the LOD scale to settle back to 1.0f after it overflowed");
  dword_33247D0 = sub_504FD0("r_autoLodScale", 0, 128, "Enable FPS-based auto LOD scale");
  dword_3324C5C = ((int (__cdecl *)(_DWORD, _DWORD, _DWORD, int, int, _DWORD))sub_6992D0)(
                    "r_znear",
                    LODWORD(flt_CD1468),
                    xmmword_CD120C,
                    dword_CD11F8,
                    v20,
                    "Things closer than this aren't drawn.  Reducing this increases z-fighting in the distance.");
  dword_33247D4 = sub_6992D0(
                    "r_zfar",
                    0,
                    0,
                    dword_BF6F8C,
                    128,
                    "Change the distance at which culling fog reaches 100% opacity; 0 is off");
  dword_3324CA0 = sub_504FD0("r_fog", 1, 128, "Set to 0 to disable fog");
  dword_3324A00 = sub_504FD0(
                    "r_picmip_manual",
                    0,
                    1,
                    "If 0, picmip is set automatically.  If 1, picmip is set based on the other r_picmip dvars.");
  dword_3324768 = sub_5BEC30(
                    "r_picmip",
                    0,
                    0,
                    3,
                    1,
                    "Picmip level of color maps.  If r_picmip_manual is 0, this is read-only.");
  dword_3324978 = sub_5BEC30(
                    "r_picmip_bump",
                    0,
                    0,
                    3,
                    1,
                    "Picmip level of normal maps.  If r_picmip_manual is 0, this is read-only.");
  dword_3324BE0 = sub_5BEC30(
                    "r_picmip_spec",
                    0,
                    0,
                    3,
                    1,
                    "Picmip level of specular maps.  If r_picmip_manual is 0, this is read-only.");
  dword_3324A64 = sub_5BFFE0(
                    "r_lightMapSecondary",
                    off_FE07A0,
                    1,
                    128,
                    "Replace secondary lightmaps with varying intensities");
  dword_3324B48 = sub_504FD0("r_lightMapFilterDisable", 0, v21, "Disable filtering on lightmaps");
  dword_3324B50 = sub_5BFFE0("r_colorMap", off_FE0788, 1, 128, "Override all color maps");
  dword_3324C08 = sub_6992D0("r_normalMap", 0, 0, xmmword_CD120C, 128, "Lerp all normal maps to a flat normal map");
  dword_3324934 = sub_504FD0("r_drawLitDrawlists", 1, 128, "disable drawing of the LIT drawlists");
  dword_3324A48 = sub_504FD0("r_drawLightmapDrawlists", 1, 128, "disable drawing of the LIGHTMAP drawlists");
  dword_3324B14 = sub_5BFFE0("r_alphaMap", off_FE0828, 0, 128, "Override all alpha maps");
  dword_33249FC = sub_5BFFE0("r_specularMap", off_FE083C, 1, v22, "Replace all specular maps");
  dword_3324AA4 = sub_5BFFE0("r_glossMap", off_FE084C, 1, 128, "Replace all gloss maps");
  dword_3324C88 = sub_5BFFE0("r_occlusionMap", off_FE086C, 1, 128, "Replace all occlusion maps");
  dword_3324864 = sub_504FD0("r_warmShaders", 0, 0, "Set to true to warm pixel shaders next frame");
  dword_33249D8 = sub_504FD0(
                    "r_loadForRenderer",
                    1,
                    v23,
                    "Set to false to disable dx allocations (for dedicated server mode)");
  dword_3324B74 = sub_504FD0(
                    "r_resampleScene",
                    1,
                    128,
                    "Upscale the frame buffer with sharpen filter and color correction.");
  dword_3324964 = sub_5BFFE0("r_showPenetration", &off_FE0778, 0, 128, "Shows materials tagged with 'nopenetrate'");
  dword_3324C68 = sub_504FD0("r_showLightGrid", 0, 128, "Show light grid debugging information");
  dword_3324C90 = sub_504FD0("r_showLightingOrigins", 0, v24, "Show lighting origins for models");
  dword_3324AC4 = sub_504FD0(
                    "r_showMissingLightGrid",
                    0,
                    128,
                    "Use rainbow colors for entities that are outside the light grid");
  dword_3324C9C = sub_5BFFE0("r_showReflectionProbeSelection", &off_FE0900, 0, 128, "Show reflection probe selection");
  dword_3324A98 = sub_6992D0("r_lightTweakAmbient", dword_CD146C, 0, LODWORD(flt_CD1468), 576, "Ambient light strength");
  dword_3324784 = sub_6992D0("r_lightTweakSunLight", xmmword_CD120C, 0, dword_C02E78, 4608, "Sunlight strength");
  dword_33249AC = sub_68FA40(
                    "r_lightTweakAmbientColor",
                    xmmword_CD120C,
                    0,
                    0,
                    xmmword_CD120C,
                    576,
                    "Light ambient color");
  dword_3324B08 = sub_63B4D0(
                    "r_lightTweakSunColor",
                    xmmword_CD120C,
                    xmmword_CD120C,
                    0,
                    0,
                    xmmword_CD120C,
                    4608,
                    "Sun color");
  dword_3324ADC = sub_68FA40(
                    "r_lightTweakSunDiffuseColor",
                    0,
                    0,
                    xmmword_CD120C,
                    xmmword_CD120C,
                    576,
                    "Sun diffuse color");
  dword_3324A50 = sub_4FA310(
                    "r_lightTweakSunDirection",
                    0,
                    0,
                    0,
                    dword_B7FD88,
                    dword_C042B0,
                    4608,
                    "Sun direction in degrees");
  dword_3324BF4 = sub_504FD0("r_showSunDirectionDebug", 0, 128, "Toggles the display of sun direction debug");
  dword_33247C0 = sub_504FD0("r_showOutdoorVolumeDebug", 0, 128, "Toggles the display of particle outdoor volume debug");
  dword_3324BF0 = sub_5C82F0(
                    "r_materialXYZ",
                    dword_CDCC0C,
                    dword_CDCC10,
                    dword_CDCC14,
                    0,
                    dword_BD6D4C,
                    v25,
                    "material color checker XYZ d65 coords");
  dword_3324780 = sub_504FD0("r_norefresh", 0, 128, "Skips all rendering.  Useful for benchmarking.");
  dword_3324B20 = sub_6992D0(
                    "r_scaleViewport",
                    xmmword_CD120C,
                    0,
                    xmmword_CD120C,
                    128,
                    "Scale 3D viewports by this fraction.  Use this to see if framerate is pixel shader bound.");
  dword_3324920 = sub_504FD0("r_smp_worker", 1, 0, "Process renderer front end in a separate thread");
  v26 = sub_5EC240(2, 8, 0, "Number of worker threads");
  dword_3324A68 = sub_5BEC30("r_smp_worker_threads", v26, v27, v28, v29, v30);
  v31 = 0;
  if ( sub_624690(dword_3324A68) > 0 )
  {
    v50 = a1;
    v49 = a2;
    v48 = a3;
    do
    {
      v32 = off_FE14CC[v31];
      v33 = 16384;
      v52 = 1;
      v34 = (int)"Enable worker thread";
      if ( v31 >= sub_5EC240(v48, v49, v50, v51) )
      {
        v33 = 64;
        v52 = 0;
        v34 = (int)"Worker thread always disabled; not enough hardware threads";
      }
      dword_3324868[v31++] = sub_504FD0(v32, v52, (unsigned __int16)v33, v34);
    }
    while ( (signed int)v31 < sub_624690(dword_3324A68) );
  }
  dword_33249B0 = sub_5BEC30("r_aaSamples", 1, 1, 16, 33, "Anti-aliasing sample count; 1 disables anti-aliasing");
  dword_332497C = sub_5BEC30("r_aaSamplesMax", 8, 1, 16, 0, "Maximum number of samples supported for anti-aliasing.");
  dword_3324848 = sub_504FD0(
                    "r_vsync",
                    1,
                    1,
                    "Enable v-sync before drawing the next frame to avoid 'tearing' artifacts.");
  dword_3324AC0 = sub_5BEC30(
                    "r_vsyncThreshold",
                    10,
                    0,
                    100,
                    0,
                    "Specify threshold percentage for allowed vsync 'tearing'.");
  dword_3324B44 = sub_68FA40(
                    "r_clearColor",
                    0,
                    0,
                    0,
                    0,
                    v35,
                    "Color to clear the screen to when clearing the frame buffer");
  dword_3324B1C = sub_68FA40(
                    "r_clearColor2",
                    0,
                    0,
                    0,
                    0,
                    v36,
                    "Color to clear every second frame to (for use during development)");
  dword_3324C74 = sub_68FA40(
                    "r_viewportBackingColor",
                    dword_BE79F8,
                    dword_BE79F8,
                    dword_BE79F8,
                    xmmword_CD120C,
                    v37,
                    "Color to clear the frame buffer with before compositing viewports");
  dword_33249F8 = sub_5BEC30("r_dlightLimit", 4, 0, 4, 0, "Maximum number of dynamic lights drawn simultaneously");
  dword_3324BCC = sub_5BEC30("r_dobjLimit", 512, 0, 1024, 128, "Maximum number of DObjs drawn simultaneously");
  dword_33248F4 = sub_5BEC30("r_modelLimit", 1024, 0, 1024, 128, "Maximum number of models drawn simultaneously");
  dword_3324950 = sub_5BEC30("r_brushLimit", 512, 0, 1024, 128, "Maximum number of brushes drawn simultaneously");
  dword_3324990 = sub_504FD0("r_spotLightShadows", 1, 128, "Enable shadows for spot lights.");
  dword_33248FC = sub_504FD0("r_spotLightSModelShadows", 1, v38, "Enable static model shadows for spot lights.");
  dword_3324AF8 = sub_504FD0("r_spotLightEntityShadows", 1, 128, "Enable entity shadows for spot lights.");
  dword_3324AFC = sub_6992D0(
                    "r_flashLightFovInnerFraction",
                    dword_CD1408,
                    0,
                    dword_B77F64,
                    4096,
                    "Relative Inner FOV angle for the dynamic flash light. 0 is full fade 0.99 is almost no fade.");
  dword_3324924 = sub_6992D0(
                    "r_flashLightStartRadius",
                    0,
                    0,
                    dword_BC05C8,
                    4096,
                    "Radius of the circle at the start of the flash light in inches.");
  dword_3324984 = sub_6992D0(
                    "r_flashLightEndRadius",
                    LODWORD(flt_BA901C),
                    xmmword_CD120C,
                    dword_BC05C8,
                    4096,
                    "Radius of the circle at the end of the flash light in inches.");
  dword_3324928 = sub_504FD0("r_flashLightShadows", 1, 4096, "Enable shadows for flash light.");
  dword_33248A8 = sub_6992D0(
                    "r_flashLightBrightness",
                    dword_C18010,
                    0,
                    dword_BF447C,
                    4096,
                    "Brightness scale for flash light.");
  dword_3324A10 = sub_4FA310(
                    "r_flashLightOffset",
                    0,
                    dword_CD9740,
                    xmmword_CD120C,
                    dword_BF58E8,
                    dword_BD6D4C,
                    4096,
                    "Relative position of the Flashlight.");
  dword_33249C4 = sub_6992D0(
                    "r_flashLightRange",
                    dword_B8DB30,
                    xmmword_CD120C,
                    dword_BC05C8,
                    4096,
                    "Distance of the flash light in inches.");
  dword_3324968 = sub_4FA310(
                    "r_flashLightColor",
                    xmmword_CD120C,
                    xmmword_CD120C,
                    xmmword_CD120C,
                    0,
                    xmmword_CD120C,
                    4096,
                    "Flashlight Color.");
  dword_3324CD4 = sub_4FA310("r_flashLightBobAmount", 0, 0, 0, 0, dword_C10E14, 4096, "Flashlight Movement Amount.");
  dword_3324820 = sub_4FA310(
                    "r_flashLightBobRate",
                    0,
                    dword_CCD890,
                    dword_C15E00,
                    0,
                    dword_CD9740,
                    4096,
                    "Flashlight Movement Rate.");
  dword_33249E0 = sub_6992D0(
                    "r_flashLightSpecularScale",
                    xmmword_CD120C,
                    0,
                    dword_C18010,
                    4096,
                    "Flashlight Specular Scale.");
  dword_3324C14 = sub_6992D0("r_flashLightFlickerAmount", 0, 0, xmmword_CD120C, 4096, "Flashlight Flicker Amount.");
  dword_332480C = sub_6992D0(
                    "r_flashLightFlickerRate",
                    dword_B94A00,
                    dword_CD146C,
                    dword_B94A00,
                    4096,
                    "Flashlight Flicker Rate (Times per second).");
  dword_3324B40 = sub_504FD0("r_drawWater", 1, 128, "Enable water rendering");
  dword_3324A1C = sub_504FD0(
                    "r_lockPvs",
                    0,
                    128,
                    "Request to lock the viewpoint used for determining what is visible to the current position and direction");
  dword_3324A3C = sub_504FD0(
                    "r_lockPvsInCode",
                    0,
                    128,
                    "Indicates if pvslock is currently on, in code. Only code should modified this dvar");
  dword_3324B34 = sub_504FD0(
                    "r_skipPvs",
                    0,
                    v39,
                    "Skipt the determination of what is in the potentially visible set (disables most drawing)");
  dword_332485C = sub_504FD0(
                    "r_singleCell",
                    0,
                    128,
                    "Only draw things in the same cell as the camera.  Most useful for seeing how big the current cell is.");
  dword_3324BB4 = sub_504FD0("r_showForcedInvisibleCells", 0, 128, "Only draw cells that are forced to be off.");
  dword_33248D0 = sub_5BEC30(
                    "r_portalWalkLimit",
                    0,
                    0,
                    100,
                    128,
                    "Stop portal recursion after this many iterations.  Useful for debugging portal errors.");
  dword_331389C = sub_5BEC30(
                    "r_portalMinRecurseDepth",
                    2,
                    0,
                    100,
                    128,
                    "Ignore r_portalMinClipArea for portals with fewer than this many parent portals.");
  dword_3324BB8 = sub_504FD0("r_enableOccluders", 1, 128, "Enable occluders");
  dword_3324BFC = sub_6992D0(
                    "r_highLodDist",
                    dword_CCD4B0,
                    dword_CCD4B0,
                    dword_BF6F8C,
                    128,
                    "Distance for high level of detail");
  dword_3324A44 = sub_6992D0(
                    "r_mediumLodDist",
                    dword_CCD4B0,
                    dword_CCD4B0,
                    dword_BF6F8C,
                    128,
                    "Distance for medium level of detail");
  dword_3324900 = sub_6992D0(
                    "r_lowLodDist",
                    dword_CCD4B0,
                    dword_CCD4B0,
                    dword_BF6F8C,
                    128,
                    "Distance for low level of detail");
  dword_33247E8 = sub_6992D0(
                    "r_lowestLodDist",
                    dword_CCD4B0,
                    dword_CCD4B0,
                    dword_BF6F8C,
                    128,
                    "Distance for lowest level of detail");
  dword_3324C04 = sub_5BFFE0("r_forceLod", off_FE08D0, 4, 128, "Force all level of detail to this level");
  dword_3324764 = sub_504FD0(
                    "r_modelVertColor",
                    1,
                    160,
                    "Set to 0 to replace all model vertex colors with white when loaded");
  dword_332476C = sub_504FD0("sm_sunEnable", 1, 4096, "Enable sun shadow mapping from script");
  dword_3324918 = sub_5BEC30("sm_sunQuality", 0, 0, 2, 1, "Sun shadow quality");
  dword_3324BC8 = sub_5BEC30("sm_spotQuality", 0, 0, 2, 1, "Spot shadow quality");
  dword_332477C = sub_504FD0("sm_spotEnable", 1, 4096, "Enable spot shadow mapping from script");
  dword_33247FC = sub_5BEC30("sm_maxLights", 4, 0, 4, 1, "Limits how many primary lights can have shadow maps");
  dword_33247AC = sub_6992D0(
                    "sm_spotShadowFadeTime",
                    xmmword_CD120C,
                    dword_B95BC4,
                    dword_BE7CC4,
                    0,
                    "How many seconds it takes for a primary light shadow map to fade in or out");
  dword_3324908 = sub_504FD0("sm_sunAlwaysCastsShadow", 0, 4224, "forces sun to always do shadow mapping, from script");
  dword_3324CB8 = sub_5BEC30("sm_polygonOffsetBias", 8192, 0, 65536, 4256, "Shadow map offset bias");
  dword_3324AD8 = sub_6992D0(
                    "sm_sunSampleSizeNear",
                    LODWORD(flt_BB4D68),
                    dword_CD9718,
                    LODWORD(flt_CD1468),
                    20480,
                    "Shadow sample size");
  dword_3324B24 = sub_4FA310(
                    "sm_sunShadowCenter",
                    0,
                    0,
                    0,
                    dword_BCC8F0,
                    dword_BF6F8C,
                    4224,
                    "Sun shadow center, 0 0 0 means don't override");
  dword_3324C80 = sub_6992D0(
                    "sm_sunShadowScale",
                    xmmword_CD120C,
                    dword_BADD84,
                    xmmword_CD120C,
                    4224,
                    "Sun shadow scale optimization");
  dword_3324A60 = sub_504FD0("sm_sunShadowSmall", 0, 4096, "force quarter resolution sun shadow map");
  dword_3324754 = sub_504FD0("sm_sunShadowSmallEnable", 0, 20480, "use quarter resolution sun shadow map");
  dword_3324A18 = sub_6992D0("r_flameScaler", xmmword_CD120C, 0, xmmword_CD120C, 4096, "Flame Scaler");
  dword_3324A9C = sub_504FD0("r_zombieDisableSlideEffect", 0, 20480, "Disable Slide Effect");
  dword_3324BA8 = sub_504FD0("r_zombieDisableEarthEffect", 0, 20480, "Disable Earth Effect");
  dword_3324958 = sub_504FD0("r_zombieNameAllowFriendsList", 1, 20480, "Allow zombie name to be from friends list");
  dword_33247D8 = sub_504FD0("r_zombieNameAllowDevList", 1, v40, "Allow zombie name to be from dev list");
  dword_3324C54 = sub_6992D0(
                    "sm_spotShadowLargeRadiusScale",
                    xmmword_CD120C,
                    0,
                    dword_BE7CC4,
                    4224,
                    "Radius scaler for large spot shadow switch over");
  dword_33248E8 = sub_504FD0("sm_strictCull", 0, 128, "Strict shadow map cull");
  dword_3324A20 = sub_504FD0("sm_fastSunShadow", 1, 128, "Fast sun shadow");
  dword_3324AE8 = sub_504FD0("r_noipak", 0, 16, "do not load/stream images from ipak(pc only)");
  dword_3324828 = sub_504FD0("r_stereo3DAvailable", 0, v41, "3D Mode available");
  dword_3324A58 = sub_504FD0("r_stereo3DOn", 0, 513, "3D on off toggle");
  dword_3313898 = sub_5BEC30("r_stereo3DMode", 0, 0, 1, 1, "3D Rendering mode");
  dword_3324BAC = sub_6992D0("r_stereo3DEyeSeparation", dword_C15E00, 0, xmmword_CD120C, 4096, "3D eye separation");
  dword_3324C20 = sub_6992D0(
                    "r_stereo3DEyeSeparationScaler",
                    xmmword_CD120C,
                    0,
                    xmmword_CD120C,
                    4096,
                    "3D eye separation scaler (adjustment to separation used from scripts)");
  dword_3324C38 = sub_6992D0("r_stereoFocusDepth", dword_B8B0CC, dword_B8B0CC, dword_BFCC48, 1, "3D eye focus depth");
  dword_3324A8C = sub_6992D0("r_stereoGunShift", LODWORD(flt_BB81EC), 0, dword_CDCC08, 1, "3D gun shift");
  dword_3324C8C = sub_6992D0("r_stereoTurretShift", 0, 0, dword_CD11F8, 4096, "3D turret shift");
  dword_3324CCC = sub_504FD0("r_dualPlayEnable", 0, 1, "DualPlay on/off toggle");
  dword_3324C4C = sub_504FD0("r_dualPlayActive", 0, 4096, "Set ingame when Split Screen is active");
  dword_33249A8 = sub_504FD0("r_dualPlayTestCount", 1, 131072, "Enable testing of backend framebuffer double counting");
  dword_3324B54 = sub_6992D0("r_blur", 0, 0, dword_C02E78, 128, "Dev tweak to blur the screen");
  dword_3324778 = sub_504FD0("r_flame_allowed", 1, 1, "Allow flame effect.");
  dword_3324A84 = sub_6992D0("r_filmLut", dword_CCD4B0, dword_CCD4B0, dword_BE9274, 0, "Film LUT Index.");
  dword_3324C7C = sub_5BEC30("r_filmTweakLut", -1, -1, 9, 4096, "Tweak Film LUT Index.");
  dword_3324850 = sub_5BEC30("r_forceCameraNode", -1, -1, 3000, 128, "Force camera to pathnode position.");
  dword_3324838 = sub_5BEC30("r_forceCameraHdg", 0, 0, 3, 128, "Force camera to heading.");
  dword_3324C28 = sub_504FD0("r_forceCamerarecord", 0, 128, "Turn on/off force camera record Mode.");
  dword_33249C0 = sub_504FD0(
                    "r_enablePlayerShadow",
                    0,
                    (byte_34B9F41 != 0 ? 0x80 : 0) | 0x5000,
                    "Enable First Person Player Shadow.");
  dword_3324A28 = sub_5BEC30("r_enableFlashlight", 0, 0, 2, 4096, "Enable Player Flashlight.");
  dword_33248A0 = sub_504FD0("r_waterFogTest", 0, v42, "Enable Water Fog Test.");
  dword_33248E0 = sub_6992D0("r_contrast", xmmword_CD120C, 0, LODWORD(flt_CD1468), 128, "Contrast adjustment");
  dword_3324914 = sub_6992D0("r_brightness", 0, LODWORD(flt_BB4D68), dword_BA8D1C, 128, "Brightness adjustment");
  dword_3324758 = sub_6992D0("r_desaturation", xmmword_CD120C, 0, LODWORD(flt_CD1468), 128, "Desaturation adjustment");
  dword_3324BDC = sub_6992D0(
                    "r_filmTweakBrightness",
                    0,
                    dword_CCD4B0,
                    xmmword_CD120C,
                    4096,
                    "Tweak dev var; film color brightness");
  dword_33249CC = sub_6992D0(
                    "r_filmTweakDesaturation",
                    dword_CCD890,
                    0,
                    xmmword_CD120C,
                    4096,
                    "Tweak dev var; Desaturation applied after all 3D drawing");
  dword_3324A04 = sub_504FD0("r_filmTweakInvert", 0, 4096, "Tweak dev var; enable inverted video");
  dword_3324830 = sub_504FD0("r_filmUseTweaks", 0, 128, "Overide film effects with tweak dvar values");
  dword_3324A6C = sub_504FD0("r_filmTweakEnable", 0, 4096, "Tweak dev var; enable film color effects");
  dword_3324BBC = sub_6992D0("exp_softclip", dword_BADD84, 0, xmmword_CD120C, 20480, "soft clip value");
  dword_332489C = sub_602470("vc_LIB", 0, 0, 0, 0, 0, dword_C02E78, 20480, "Leonardo");
  dword_33248D4 = sub_602470(
                    "vc_LIG",
                    xmmword_CD120C,
                    xmmword_CD120C,
                    xmmword_CD120C,
                    xmmword_CD120C,
                    dword_B95BC4,
                    dword_C18010,
                    20480,
                    "Leonardo");
  dword_3324C70 = sub_602470(
                    "vc_LIW",
                    dword_C02E78,
                    dword_C02E78,
                    dword_C02E78,
                    dword_C02E78,
                    0,
                    dword_C02E78,
                    20480,
                    "Leonardo");
  dword_3324B64 = sub_602470("vc_LOB", 0, 0, 0, 0, 0, dword_C02E78, 20480, "Leonardo");
  dword_33248AC = sub_602470(
                    "vc_LOW",
                    dword_C02E78,
                    dword_C02E78,
                    dword_C02E78,
                    dword_C02E78,
                    0,
                    dword_C02E78,
                    20480,
                    "Leonardo");
  dword_332478C = sub_602470("vc_RGBH", 0, 0, 0, 0, 0, dword_C02E78, 20480, "Leonardo");
  dword_33249D4 = sub_602470("vc_RGBL", 0, 0, 0, 0, 0, dword_C02E78, 20480, "Leonardo");
  dword_3324AAC = sub_602470("vc_YH", 0, 0, 0, 0, 0, dword_C02E78, 20480, "Leonardo");
  dword_33247B0 = sub_602470("vc_YL", 0, 0, 0, 0, 0, dword_C02E78, 20480, "Leonardo");
  dword_3324810 = sub_504FD0("r_bloomTweaks", 0, 20480, "enbale bloom tweaks");
  dword_3324C60 = sub_504FD0("r_bloomHiQuality", 0, 16385, "bloom quality");
  dword_332474C = sub_5BEC30("r_dofHDR", 0, 0, 2, 16385, "dof mode, 0 = legacy 1 = hdr low 2 = hdr hi");
  dword_3324BC4 = sub_602470("vc_RS", 0, LODWORD(flt_BB4D68), 0, dword_BA7D28, 0, xmmword_CD120C, 20480, "Leonardo");
  dword_33247F4 = sub_602470(
                    "vc_RE",
                    LODWORD(flt_BB4D68),
                    xmmword_CD120C,
                    dword_BADD84,
                    xmmword_CD120C,
                    0,
                    xmmword_CD120C,
                    20480,
                    "Leonardo");
  dword_3324B28 = sub_602470("vc_SMR", xmmword_CD120C, 0, 0, 0, dword_BF58E8, dword_BD6D4C, 20480, "Leonardo");
  dword_3324BF8 = sub_602470("vc_SMG", 0, xmmword_CD120C, 0, 0, dword_BF58E8, dword_BD6D4C, 20480, "Leonardo");
  dword_3324960 = sub_602470("vc_SMB", 0, 0, xmmword_CD120C, 0, dword_BF58E8, dword_BD6D4C, 20480, "Leonardo");
  dword_33247CC = sub_602470("vc_MMR", xmmword_CD120C, 0, 0, 0, dword_BF58E8, dword_BD6D4C, 20480, "Leonardo");
  dword_3324BE8 = sub_602470("vc_MMG", 0, xmmword_CD120C, 0, 0, dword_BF58E8, dword_BD6D4C, 20480, "Leonardo");
  dword_3324B30 = sub_602470("vc_MMB", 0, 0, xmmword_CD120C, 0, dword_BF58E8, dword_BD6D4C, 20480, "Leonardo");
  dword_3324B5C = sub_602470("vc_HMR", xmmword_CD120C, 0, 0, 0, dword_BF58E8, dword_BD6D4C, 20480, "Leonardo");
  dword_33247A8 = sub_602470("vc_HMG", 0, xmmword_CD120C, 0, 0, dword_BF58E8, dword_BD6D4C, 20480, "Leonardo");
  dword_3324C94 = sub_602470("vc_HMB", 0, 0, xmmword_CD120C, 0, dword_BF58E8, dword_BD6D4C, 20480, "Leonardo");
  dword_33248DC = sub_602470(
                    "vc_FGM",
                    xmmword_CD120C,
                    xmmword_CD120C,
                    xmmword_CD120C,
                    xmmword_CD120C,
                    dword_BF58E8,
                    dword_BD6D4C,
                    20480,
                    "Leonardo");
  dword_3324840 = sub_602470("vc_FSM", 0, 0, 0, xmmword_CD120C, dword_BF58E8, dword_BD6D4C, 20480, "Leonardo");
  dword_3324974 = sub_602470("vc_FBM", 0, 0, 0, 0, dword_BF58E8, dword_BD6D4C, 20480, "Leonardo");
  dword_3324C1C = sub_5BEC30("vc_LUT", 0, -32, 32, 20480, "Lut index");
  dword_332498C = sub_5BEC30("vc_SNAP", 0, 0, 32, 20480, "hdr snapshot");
  dword_3324858 = sub_602470(
                    "r_sunFlareTint",
                    0,
                    0,
                    xmmword_CD120C,
                    xmmword_CD120C,
                    0,
                    xmmword_CD120C,
                    4096,
                    "Sun Flare Sprite Color Tint");
  dword_3324B58 = sub_602470("r_waterWaveAngle", 0, 0, 0, 0, 0, dword_C042B0, 20480, "water wave angle");
  dword_33247F0 = sub_602470(
                    "r_waterWaveWavelength",
                    xmmword_CD120C,
                    xmmword_CD120C,
                    xmmword_CD120C,
                    xmmword_CD120C,
                    xmmword_CD120C,
                    dword_C096FC,
                    20480,
                    "water wave wavelength");
  dword_33247DC = sub_602470("r_waterWaveAmplitude", 0, 0, 0, 0, 0, dword_C0EA8C, 20480, "water wave amplitude");
  dword_3324998 = sub_602470("r_waterWavePhase", 0, 0, 0, 0, 0, dword_CDCC04, 20480, "water wave phase");
  dword_332482C = sub_602470("r_waterWaveSteepness", 0, 0, 0, 0, 0, xmmword_CD120C, 20480, "water wave steepness");
  dword_3324B98 = sub_602470(
                    "r_waterWaveSpeed",
                    xmmword_CD120C,
                    xmmword_CD120C,
                    xmmword_CD120C,
                    xmmword_CD120C,
                    0,
                    dword_CD9740,
                    20480,
                    "water wave speed");
  dword_33249B4 = sub_6992D0("r_waterWaveBase", 0, dword_BC7258, LODWORD(flt_C1D304), 20480, "water base height");
  dword_3324AB4 = sub_504FD0("r_dof_enable", 1, 0, "Enable the depth of field effect");
  dword_3324B70 = sub_504FD0(
                    "r_dof_tweak",
                    0,
                    16512,
                    "Use dvars to set the depth of field effect; overrides r_dof_enable");
  dword_3324B2C = sub_6992D0(
                    "r_dof_nearBlur",
                    dword_BA81A0,
                    LODWORD(flt_CD1468),
                    dword_C18010,
                    16512,
                    "Sets the radius of the gaussian blur used by depth of field, in pixels at 640x480");
  dword_3324C6C = sub_6992D0(
                    "r_dof_farBlur",
                    dword_B879C4,
                    0,
                    dword_C18010,
                    16512,
                    "Sets the radius of the gaussian blur used by depth of field, in pixels at 640x480");
  dword_332493C = sub_6992D0(
                    "r_dof_viewModelStart",
                    dword_CD9740,
                    0,
                    dword_B9A1A4,
                    16512,
                    "Depth of field viewmodel start distance, in inches");
  dword_3324940 = sub_6992D0(
                    "r_dof_viewModelEnd",
                    dword_BA0EE4,
                    0,
                    dword_B9A1A4,
                    16512,
                    "Depth of field viewmodel end distance, in inches");
  dword_3324B94 = sub_6992D0(
                    "r_dof_nearStart",
                    dword_C18010,
                    0,
                    dword_BE0D64,
                    16512,
                    "Depth of field near start distance, in inches");
  dword_3324750 = sub_6992D0(
                    "r_dof_nearEnd",
                    dword_C15C14,
                    0,
                    dword_BE0D64,
                    16512,
                    "Depth of field near end distance, in inches");
  dword_33247B8 = sub_6992D0(
                    "r_dof_farStart",
                    dword_BE0D64,
                    0,
                    dword_C013E4,
                    16512,
                    "Depth of field far start distance, in inches");
  dword_3324C64 = sub_6992D0(
                    "r_dof_farEnd",
                    dword_CDCC00,
                    0,
                    dword_C013E4,
                    16512,
                    "Depth of field far end distance, in inches");
  dword_3324B3C = sub_6992D0(
                    "r_dof_bias",
                    LODWORD(flt_BB4D68),
                    dword_CD146C,
                    dword_B9E9FC,
                    16512,
                    "Depth of field bias as a power function (like gamma); less than 1 is sharper");
  dword_3324818 = sub_504FD0("r_dof_showdebug", 0, 128, "displays DOF parameter debug");
  dword_3324808 = sub_602470(
                    "r_flameFX_distortionScaleFactor",
                    0,
                    xmmword_CD120C,
                    xmmword_CD120C,
                    dword_CDCBFC,
                    0,
                    xmmword_CD120C,
                    4225,
                    "Distortion uv scales (Default to 1)");
  dword_3324894 = sub_6992D0("r_flameFX_magnitude", dword_CDCBF8, 0, xmmword_CD120C, 4225, "Distortion magnitude");
  dword_3324BD0 = sub_5BEC30("r_flameFX_FPS", 15, 1, 60, 4225, "fire frames per sec");
  dword_3324800 = sub_6992D0(
                    "r_flameFX_fadeDuration",
                    LODWORD(flt_BB4D68),
                    0,
                    dword_BB7D70,
                    4097,
                    "Sets fade duration in seconds");
  dword_332484C = sub_504FD0("r_waterSheetingFX_allowed", 1, 1, "Enable the water sheeting effect");
  dword_33247F8 = sub_504FD0("r_waterSheetingFX_enable", 0, 0, "Enable the water sheeting effect");
  dword_3324A94 = sub_602470(
                    "r_waterSheetingFX_distortionScaleFactor",
                    dword_CDCBF4,
                    xmmword_CD120C,
                    0,
                    0,
                    0,
                    xmmword_CD120C,
                    v43,
                    "Distortion uv scales (Default to 1)");
  dword_3324980 = sub_6992D0("r_waterSheetingFX_magnitude", dword_CDCBF0, 0, xmmword_CD120C, 0, "Distortion magnitude");
  dword_332481C = sub_6992D0(
                    "r_waterSheetingFX_radius",
                    dword_CDCBEC,
                    0,
                    dword_C02E78,
                    0,
                    "Tweak dev var; Glow radius in pixels at 640x480");
  dword_33249BC = sub_504FD0("r_anaglyphFX_enable", 0, 1, "Enable red/green Anaglyph 3DS");
  dword_3324A08 = sub_504FD0("r_rimIntensity_debug", 0, 20480, "Enable the rim intensity debug");
  dword_3324C30 = sub_6992D0("r_rimIntensity", 0, 0, dword_C10E14, 20480, "Rim intensity for character skin/cloth");
  dword_3324794 = sub_504FD0("r_genericSceneVector_debug", 0, 20480, "Enable the generic scene vector debug");
  dword_3324834 = sub_602470("r_genericSceneVector0", 0, 0, 0, 0, 0, dword_BD6D4C, 20480, "Generic Scene Vector 0");
  dword_332494C = sub_602470("r_genericSceneVector1", 0, 0, 0, 0, 0, dword_BD6D4C, 20480, "Generic Scene Vector 1");
  dword_33248F0 = sub_602470("r_genericSceneVector2", 0, 0, 0, 0, 0, dword_BD6D4C, 20480, "Generic Scene Vector 2");
  dword_33247E0 = sub_602470("r_genericSceneVector3", 0, 0, 0, 0, 0, dword_BD6D4C, 20480, "Generic Scene Vector 3");
  dword_3324770 = sub_504FD0("r_reviveFX_debug", 0, 128, "Enable the revive effect debug");
  dword_3324C3C = sub_6992D0(
                    "r_reviveFX_edgeColorTemp",
                    dword_CD1204,
                    dword_BD0DFC,
                    dword_C0CA98,
                    20480,
                    "edge color temp");
  dword_3324AE0 = sub_6992D0("r_reviveFX_edgeSaturation", xmmword_CD120C, 0, dword_CD9740, 20480, "edge saturation");
  dword_3324AD0 = sub_4FA310(
                    "r_reviveFX_edgeScale",
                    xmmword_CD120C,
                    xmmword_CD120C,
                    xmmword_CD120C,
                    0,
                    dword_CD9740,
                    20480,
                    "edge scale (tint) adjust RGB");
  dword_3324B78 = sub_4FA310(
                    "r_reviveFX_edgeContrast",
                    xmmword_CD120C,
                    xmmword_CD120C,
                    xmmword_CD120C,
                    0,
                    dword_CD9740,
                    20480,
                    "edge contrast adjust RGB");
  dword_3324B04 = sub_4FA310(
                    "r_reviveFX_edgeOffset",
                    0,
                    0,
                    0,
                    dword_BB79CC,
                    dword_CD9740,
                    20480,
                    "edge tv style brightness adjust RGB");
  dword_3324CC4 = sub_6992D0("r_reviveFX_edgeAmount", 0, 0, xmmword_CD120C, 20480, "edge effect amount");
  dword_3324860 = sub_6992D0(
                    "r_reviveFX_edgeMaskAdjust",
                    0,
                    dword_CCD4B0,
                    xmmword_CD120C,
                    20480,
                    "edge mask expansion contraction");
  dword_3324B60 = sub_504FD0("r_poisonFX_debug_enable", 0, 20480, "Enable the poison effect");
  dword_3324748 = sub_6992D0(
                    "r_poisonFX_pulse",
                    dword_B7F8BC,
                    xmmword_CD120C,
                    dword_CD9740,
                    16384,
                    "pulse rate for distortion");
  dword_3324790 = sub_6992D0("r_poisonFX_dvisionX", 0, dword_BCBCD4, dword_B8B0CC, 16384, "amount of double vision x");
  v44 = sub_6992D0("r_poisonFX_blurMin", 0, 0, dword_B8B0CC, 20480, "blur min");
  v45 = __PAIR__(byte_34B9F41 != 0 ? 0x80 : 0, dword_B8B0CC) | 0x500000000000i64;
  dword_3324C48 = v44;
  dword_33247A0 = sub_6992D0("r_poisonFX_blurMax", LODWORD(flt_CD1468), 0, v45, HIDWORD(v45), "blur max");
  if ( byte_34B9F41 )
  {
    sub_5F9BF0(dword_3324748, dword_CD9740);
    sub_5F9BF0(dword_3324790, dword_B8B0CC);
    sub_5F9BF0(dword_3324C48, dword_BA8D1C);
  }
  dword_3324AF0 = sub_504FD0("r_zbufferDebug", 0, 128, "debug zbuffer display");
  dword_3324774 = sub_6992D0(
                    "r_zbufferDebugRange",
                    dword_CD11F8,
                    xmmword_CD120C,
                    dword_BEE2E0,
                    128,
                    "debug zbufffer max display range");
  dword_33248BC = sub_504FD0("r_fogTweak", 0, 128, "enable dvar tweaks");
  dword_3313894 = sub_6992D0("r_fogBaseDist", 0, 0, dword_C013E4, 128, "start distance");
  dword_3324C58 = sub_6992D0(
                    "r_fogHalfDist",
                    xmmword_CD120C,
                    xmmword_CD120C,
                    dword_BF6458,
                    128,
                    "distance at which fog is 50%");
  dword_3324C50 = sub_6992D0("r_fogBaseHeight", 0, dword_CDCBE8, dword_BEBFF8, 128, "start height");
  dword_3324CC0 = sub_6992D0(
                    "r_fogHalfHeight",
                    xmmword_CD120C,
                    xmmword_CD120C,
                    dword_BEBFF8,
                    128,
                    "height at which fog is 50%");
  dword_3324C24 = sub_4FA310(
                    "r_fogColor",
                    LODWORD(flt_BB4D68),
                    LODWORD(flt_BB4D68),
                    LODWORD(flt_BB4D68),
                    0,
                    dword_C02E78,
                    128,
                    "color");
  dword_3324A30 = sub_6992D0("r_fogOpacity", dword_BADD84, 0, xmmword_CD120C, 128, "opacity");
  dword_33248D8 = sub_4FA310(
                    "r_fogSunColor",
                    xmmword_CD120C,
                    xmmword_CD120C,
                    xmmword_CD120C,
                    0,
                    dword_C02E78,
                    128,
                    "sun color");
  dword_332475C = sub_6992D0("r_fogSunOpacity", LODWORD(flt_BB4D68), 0, xmmword_CD120C, 128, "sun opacity");
  dword_3324A7C = sub_6992D0("r_fogSunPitch", dword_B85650, dword_B7FD88, dword_C042B0, 128, "sun pitch");
  dword_332479C = sub_6992D0("r_fogSunYaw", 0, dword_B7FD88, dword_C042B0, 128, "sun yaw");
  dword_33247E4 = sub_6992D0("r_fogSunInner", 0, 0, dword_BC4790, 128, "sun angle start");
  dword_3324A80 = sub_6992D0("r_fogSunOuter", 0, 0, dword_BC4790, 128, "sun angle end");
  dword_3324944 = sub_504FD0("r_exposureTweak", 0, 20480, "enable the exposure dvar tweak");
  dword_3324948 = sub_6992D0("r_exposureValue", dword_B9E9FC, dword_C09DFC, dword_B85FC8, 20480, "exposure ev stops");
  dword_3324B8C = sub_4FA310("r_finalShiftX", 0, 0, 0, dword_B8099C, dword_BE7CC4, 20480, "r,g,b channel shift x");
  dword_3324888 = sub_4FA310("r_finalShiftY", 0, 0, 0, dword_B8099C, dword_BE7CC4, 20480, "r,g,b channel shift y");
  dword_3324B68 = sub_504FD0("r_primaryLightUseTweaks", 0, 128, "Use primary light intensity tweaks");
  dword_3324970 = sub_6992D0(
                    "r_primaryLightTweakDiffuseStrength",
                    xmmword_CD120C,
                    0,
                    dword_C18010,
                    128,
                    "Tweak the diffuse intensity for primary lights");
  dword_33249A0 = sub_6992D0(
                    "r_primaryLightTweakSpecularStrength",
                    xmmword_CD120C,
                    0,
                    dword_C18010,
                    128,
                    "Tweak the specular intensity for primary lights");
  dword_3324B7C = sub_504FD0("r_lightGridEnableTweaks", 0, 4096, "Enable tweaks of the light color from the light grid");
  dword_332491C = sub_6992D0(
                    "r_lightGridIntensity",
                    xmmword_CD120C,
                    0,
                    dword_CD9740,
                    4096,
                    "Adjust the intensity of light color from the light grid");
  dword_3324A0C = sub_6992D0(
                    "r_lightGridContrast",
                    0,
                    dword_CCD4B0,
                    xmmword_CD120C,
                    4096,
                    "Adjust the contrast of light color from the light grid");
  dword_3324A38 = sub_504FD0("r_heroLighting", 1, 0, "Enable hero-only lighting");
  v46 = __PAIR__(byte_34B9F41 != 0 ? 0x80 : 0, dword_CD9740) | 0x500000000000i64;
  dword_3324C98 = sub_4FA310(
                    "r_heroLightScale",
                    xmmword_CD120C,
                    xmmword_CD120C,
                    xmmword_CD120C,
                    0,
                    v46,
                    HIDWORD(v46),
                    "hero diffuse light scale");
  dword_3324CD0 = sub_5BEC30("r_num_viewports", 0, 0, 4, 0, "number of viewports to expect to render");
  dword_33247C4 = sub_6992D0(
                    "r_outdoorAwayBias",
                    dword_C02E78,
                    dword_BCC8F0,
                    dword_BF6F8C,
                    4096,
                    "Affects the height map lookup for making sure snow doesn't go indoors");
  dword_3324C10 = sub_6992D0(
                    "r_outdoorDownBias",
                    0,
                    dword_BCC8F0,
                    dword_BF6F8C,
                    4096,
                    "Affects the height map lookup for making sure snow doesn't go indoors");
  dword_3324954 = sub_6992D0(
                    "r_outdoorFeather",
                    dword_BA0EE4,
                    dword_BCC8F0,
                    dword_BF6F8C,
                    4096,
                    "Outdoor z-feathering value");
  sub_5D95F0(dword_3324954);
  dword_3324BB0 = sub_504FD0("r_sun_from_dvars", 0, 128, "Set sun flare values from dvars rather than the level");
  dword_3324BEC = sub_5BEC30("developer", 0, 0, 2, 0, "Enable development environment");
  dword_28163CC = sub_504FD0("sv_cheats", 0, 72, "Allow server side cheats");
  dword_3324B90 = sub_68CB80("r_defaultMode", &String, 0, "Default resolution mode");
  dword_33247B4 = sub_5BEC30(
                    "r_monitor",
                    0,
                    0,
                    8,
                    33,
                    "Index of the monitor to use in a multi monitor system; 0 picks automatically.");
  dword_33249B8 = sub_5BEC30("r_currentMonitor", 0, 0, 8, 0, "Index of the current full screen monitor.");
  dword_3324744 = sub_5BEC30("r_monitorCount", 0, 0, 8, 0, "Number of monitors connected.");
  dword_3324C2C = sub_5BFFE0(
                    "r_aspectRatio",
                    off_FE0754,
                    0,
                    33,
                    "Screen aspect ratio.  Most widescreen monitors are 16:10 instead of 16:9.");
  dword_33248E4 = sub_6992D0("r_aspectRatioWindow", dword_CDCBE4, 0, dword_C18010, 0, "Screen aspect ratio.");
  dword_3324B18 = sub_68CB80("r_customMode", &String, 33, "Special resolution mode for the remote debugger");
  dword_3324854 = sub_504FD0("r_open_automate", 0, 0, "Enable Nvidia Open Automate testing");
  dword_3324AF4 = sub_5BFFE0("r_superflare_drawlist", off_FE092C, 2, 0, "supreflare drawlist selection.");
  dword_3324B0C = sub_504FD0("r_grassEnable", 1, 0, "Diables grass movement");
  dword_3324C84 = sub_6992D0("r_skyTransition", 0, 0, xmmword_CD120C, 4096, "Sky transition blend factor.");
  dword_33249F4 = sub_6992D0("r_skyRotation", 0, dword_B7FD88, dword_C042B0, 4096, "Sky rotation angle.");
  dword_3324C34 = sub_5BEC30("r_shaderDebugA", 0, 0, 1, 4096, "Shader Debug A");
  dword_33248EC = sub_5BEC30("r_shaderDebugB", 0, 0, 1, 4096, "Shader Debug B");
  dword_3324CB0 = sub_6992D0("r_shaderDebugC", 0, 0, xmmword_CD120C, 4096, "Shader Debug C");
  dword_3324760 = sub_504FD0("r_enableCubicUpsample", 1, 4096, "Enable Cubic Upsample");
  dword_33248B8 = sub_6992D0(
                    "r_cubicUpsampleParam",
                    dword_B74DC4,
                    dword_CCD4B0,
                    xmmword_CD120C,
                    4096,
                    "Cubic Upsample Parameter");
  dword_3324BD4 = sub_6992D0("r_skyColorTemp", dword_CD1204, dword_BD0DFC, dword_C0CA98, 4096, "Sky box color temp.");
  dword_3324740 = sub_5BEC30(
                    "r_blinkLitQuasiOpaque",
                    0,
                    0,
                    2,
                    128,
                    "Blink Lit Transparencies with Depth write (Foliage Blend etc).");
  dword_3324A5C = sub_5BEC30("r_blinkTrans", 0, 0, 2, 128, "Blink All Transparencies.");
  dword_3324BA0 = sub_5BEC30("r_blinkLayers", 0, 0, 4, 128, "Blink materials with specific number of layers.");
  dword_33248F8 = sub_5BEC30("r_blinkCullNone", 0, 0, 2, 128, "Blink materials with cull none.");
  dword_33248C4 = sub_504FD0("r_fullPrepass", 0, 128, "Enable full prepass.");
  dword_3324904 = sub_504FD0("r_lightmapOnlyBspSurfs", 1, 128, "Enable lightmap_only_surfs tech for BSP draw surfaces");
  dword_3324B80 = sub_504FD0(
                    "r_lightmapOnlySModelSurfs",
                    1,
                    128,
                    "Enable lightmap_only_surfs tech for static model draw surfaces");
  dword_3324BE4 = sub_504FD0(
                    "r_lightmapOnlyEntSurfs",
                    1,
                    128,
                    "Enable lightmap_only_surfs tech for scene ent draw surfaces");
  dword_33249A4 = sub_504FD0("r_sortDrawSurfsBsp", 0, 128, "Sort BSP draw surfaces.");
  dword_3324A4C = sub_504FD0("r_sortDrawSurfsStaticModel", 1, 128, "Sort static model draw surfaces.");
  dword_332488C = sub_504FD0("r_sortBackToFront", 1, 128, "Sort transparent models back to front.");
  dword_3324AD4 = sub_6992D0(
                    "r_swrk_override_characterCharredAmount",
                    0,
                    0,
                    xmmword_CD120C,
                    128,
                    "overrides the __characterCharredAmount Shaderworks tweak");
  dword_3324890 = sub_602470(
                    "r_swrk_override_characterDissolveColor",
                    0,
                    0,
                    0,
                    0,
                    0,
                    dword_C18010,
                    128,
                    "overrides the __characterDissolveColor Shaderworks tweak");
  dword_332490C = sub_6992D0("r_swrk_override_wetness", 0, 0, xmmword_CD120C, 128, "Overrides the character wetness.");
  dword_33247BC = sub_504FD0("r_debugShowPrimaryLights", 0, 128, "shows location of primary lights");
  dword_3324AE4 = sub_504FD0("r_debugShowDynamicLights", 0, 128, "shows location of dynamic lights");
  dword_3324BD8 = sub_504FD0("r_debugShowCoronas", 0, 128, "shows location of coronas");
  dword_3324A70 = sub_504FD0("r_debugMetalStorm", 0, 128, "shows extra MetalStorm info");
  dword_33247EC = sub_504FD0("r_disableGenericFilter", 0, 128, "Stops the Generic Filters running");
  dword_3324B88 = sub_504FD0("r_drawDebugFogParams", 0, 128, "enables the fog debug display");
  dword_3324A14 = sub_504FD0("r_seethru_decal_enable", byte_34B9F41 == 0, 4224, "Toggles see-through impact holes");
  sub_5CA7A0(dword_3324A14, byte_34B9F41 == 0);
  dword_3324B84 = sub_504FD0("r_tension_enable", 1, 4224, "Toggles tension");
  dword_3324ACC = sub_504FD0("r_ui3d_debug_display", 0, 128, "Show UI3D debug overlay");
  dword_3324A90 = sub_5BEC30("r_ui3d_use_debug_values", -1, -1, 8, 128, "Use UI debug values");
  dword_3324CB4 = sub_6992D0("r_ui3d_x", 0, 0, xmmword_CD120C, 128, "ui3d texture window x");
  dword_33249F0 = sub_6992D0("r_ui3d_y", 0, 0, xmmword_CD120C, 128, "ui3d texture window y");
  dword_3324AC8 = sub_6992D0("r_ui3d_w", xmmword_CD120C, 0, xmmword_CD120C, 128, "ui3d texture window width");
  dword_3324A54 = sub_6992D0("r_ui3d_h", xmmword_CD120C, 0, xmmword_CD120C, 128, "ui3d texture window height");
  dword_3324798 = sub_5BEC30(
                    "r_multi_extracam_debug",
                    -1,
                    -1,
                    10,
                    128,
                    "-1 is disable, >0 is index of current active multi-extracam, when r_missile_cam_debug_display==3 mode");
  dword_33248B0 = sub_5BEC30("r_missile_cam_debug_display", 0, 0, 10, 128, "Show missile camera debug overlay");
  dword_332483C = sub_6992D0(
                    "r_extracam_custom_aspectratio",
                    dword_CCD4B0,
                    dword_CCD4B0,
                    dword_BE7CC4,
                    4096,
                    "custom extracam aspect ratio (width/height). Set to -1 to use default aspect ratio");
  dword_332496C = sub_6992D0(
                    "r_extracam_lod_scale",
                    dword_CD9740,
                    dword_CD146C,
                    dword_BD6D4C,
                    4096,
                    "Scales an objects distance from the extracam for LOD calculation");
  dword_33248B4 = sub_5BEC30("r_qrcode_debug_display", -1, -1, 12, 128, &String);
  dword_3324B00 = sub_6992D0("r_qrcode_debug_display_size", dword_C0E198, 0, dword_BB5A28, 128, &String);
  dword_3324C78 = sub_6992D0(
                    "r_shader_constant_set_debug_range",
                    dword_CCD4B0,
                    dword_BB79CC,
                    dword_BB5A28,
                    128,
                    "How far to draw scs debug view");
  dword_3324C00 = sub_504FD0("r_shader_constant_set_enable", 1, 128, "enables shader constant sets");
  dword_33247C8 = sub_504FD0("r_sky_intensity_showDebugDisplay", 0, 128, "Enables sky intensity debugging display");
  dword_3324CC8 = sub_6992D0(
                    "r_sky_intensity_angle0",
                    dword_B87400,
                    dword_B74678,
                    dword_B87400,
                    4096,
                    "angle0 of sky intensity");
  dword_33249DC = sub_6992D0(
                    "r_sky_intensity_angle1",
                    dword_B87400,
                    dword_B74678,
                    dword_B87400,
                    4096,
                    "angle1 of sky intensity");
  dword_3324ABC = sub_6992D0(
                    "r_sky_intensity_factor0",
                    xmmword_CD120C,
                    0,
                    dword_C18010,
                    4096,
                    "angle0 of sky intensity");
  dword_3324A74 = sub_6992D0(
                    "r_sky_intensity_factor1",
                    xmmword_CD120C,
                    0,
                    dword_C18010,
                    4096,
                    "angle1 of sky intensity");
  dword_33248C0 = sub_504FD0("r_fog_disable", 0, 128, "Disables fog");
  dword_3324CA4 = sub_504FD0("r_grassWindForceEnable", 1, 128, "Enables wind gusts that affect dynFoliage grass");
  dword_3324A34 = sub_504FD0("r_dpvs_useCellForceInvisibleBits", 1, 128, "turns on/off the script-driven cell vis bits");
  dword_3324804 = sub_504FD0(
                    "r_remotescreen_renderlastframe",
                    1,
                    128,
                    "toggles if remote screen update draws the last frame");
  result = sub_5BEC30("r_vc_compile", 0, 0, 2147483647, 0, &String);
  dword_3324AEC = result;
  return result;
}