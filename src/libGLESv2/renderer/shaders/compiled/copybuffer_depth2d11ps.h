#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//
//   fxc /E PS_CopyBufferDepth2D /T ps_4_0 /Fh
//    compiled/copybuffer_depth2d11ps.h Passthrough2D11.hlsl
//
//
// Buffer Definitions: 
//
// cbuffer Constants
// {
//
//   int3 BufferExtents;                // Offset:    0 Size:    12
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim Slot Elements
// ------------------------------ ---------- ------- ----------- ---- --------
// BufferF                           texture  float4         buf    0        1
// Constants                         cbuffer      NA          NA    0        1
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// SV_POSITION              0   xyzw        0      POS  float       
// TEXCOORD                 0   xy          1     NONE  float   xy  
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// SV_DEPTH                 0    N/A   oDepth    DEPTH  float    YES
//
ps_4_0
dcl_constantbuffer cb0[1], immediateIndexed
dcl_resource_buffer (float,float,float,float) t0
dcl_input_ps linear v1.xy
dcl_output oDepth
dcl_temps 1
ftoi r0.xy, v1.yxyy
imad r0.x, cb0[0].x, r0.x, r0.y
ld r0.xyzw, r0.xxxx, t0.xyzw
mov oDepth, r0.x
ret 
// Approximately 5 instruction slots used
#endif

const BYTE g_PS_CopyBufferDepth2D[] =
{
     68,  88,  66,  67, 115, 103, 
    136,  24, 185, 186,  17,  34, 
    150, 180, 219,  51, 206,  89, 
    232, 101,   1,   0,   0,   0, 
    240,   2,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
     48,   1,   0,   0, 136,   1, 
      0,   0, 188,   1,   0,   0, 
    116,   2,   0,   0,  82,  68, 
     69,  70, 244,   0,   0,   0, 
      1,   0,   0,   0, 112,   0, 
      0,   0,   2,   0,   0,   0, 
     28,   0,   0,   0,   0,   4, 
    255, 255,   0,   1,   0,   0, 
    192,   0,   0,   0,  92,   0, 
      0,   0,   2,   0,   0,   0, 
      5,   0,   0,   0,   1,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0,   1,   0, 
      0,   0,  13,   0,   0,   0, 
    100,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0,  66, 117, 102, 102, 
    101, 114,  70,   0,  67, 111, 
    110, 115, 116,  97, 110, 116, 
    115,   0, 171, 171, 100,   0, 
      0,   0,   1,   0,   0,   0, 
    136,   0,   0,   0,  16,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 160,   0, 
      0,   0,   0,   0,   0,   0, 
     12,   0,   0,   0,   2,   0, 
      0,   0, 176,   0,   0,   0, 
      0,   0,   0,   0,  66, 117, 
    102, 102, 101, 114,  69, 120, 
    116, 101, 110, 116, 115,   0, 
    171, 171,   1,   0,   2,   0, 
      1,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     77, 105,  99, 114, 111, 115, 
    111, 102, 116,  32,  40,  82, 
     41,  32,  72,  76,  83,  76, 
     32,  83, 104,  97, 100, 101, 
    114,  32,  67, 111, 109, 112, 
    105, 108, 101, 114,  32,  57, 
     46,  50,  57,  46,  57,  53, 
     50,  46,  51,  49,  49,  49, 
      0, 171, 171, 171,  73,  83, 
     71,  78,  80,   0,   0,   0, 
      2,   0,   0,   0,   8,   0, 
      0,   0,  56,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,   0, 
      0,   0,  68,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,   3,   3, 
      0,   0,  83,  86,  95,  80, 
     79,  83,  73,  84,  73,  79, 
     78,   0,  84,  69,  88,  67, 
     79,  79,  82,  68,   0, 171, 
    171, 171,  79,  83,  71,  78, 
     44,   0,   0,   0,   1,   0, 
      0,   0,   8,   0,   0,   0, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0, 255, 255, 
    255, 255,   1,  14,   0,   0, 
     83,  86,  95,  68,  69,  80, 
     84,  72,   0, 171, 171, 171, 
     83,  72,  68,  82, 176,   0, 
      0,   0,  64,   0,   0,   0, 
     44,   0,   0,   0,  89,   0, 
      0,   4,  70, 142,  32,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,  88,   8,   0,   4, 
      0, 112,  16,   0,   0,   0, 
      0,   0,  85,  85,   0,   0, 
     98,  16,   0,   3,  50,  16, 
     16,   0,   1,   0,   0,   0, 
    101,   0,   0,   2,   1, 192, 
      0,   0, 104,   0,   0,   2, 
      1,   0,   0,   0,  27,   0, 
      0,   5,  50,   0,  16,   0, 
      0,   0,   0,   0,  22,  21, 
     16,   0,   1,   0,   0,   0, 
     35,   0,   0,  10,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     10, 128,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,  26,   0,  16,   0, 
      0,   0,   0,   0,  45,   0, 
      0,   7, 242,   0,  16,   0, 
      0,   0,   0,   0,   6,   0, 
     16,   0,   0,   0,   0,   0, 
     70, 126,  16,   0,   0,   0, 
      0,   0,  54,   0,   0,   4, 
      1, 192,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     62,   0,   0,   1,  83,  84, 
     65,  84, 116,   0,   0,   0, 
      5,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      2,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0
};
