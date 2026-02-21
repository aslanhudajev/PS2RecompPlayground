#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbGetVu0FRegs
// Address: 0x2b39b0 - 0x2b3a64
void pbGetVu0FRegs_0x2b39b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b39b0u;

    // 0x2b39b0: 0x0
    ctx->pc = 0x2b39b0u;
    // NOP
    // 0x2b39b4: 0x0
    ctx->pc = 0x2b39b4u;
    // NOP
    // 0x2b39b8: 0x0
    ctx->pc = 0x2b39b8u;
    // NOP
    // 0x2b39bc: 0x0
    ctx->pc = 0x2b39bcu;
    // NOP
    // 0x2b39c0: 0x0
    ctx->pc = 0x2b39c0u;
    // NOP
    // 0x2b39c4: 0x0
    ctx->pc = 0x2b39c4u;
    // NOP
    // 0x2b39c8: 0xf8800000
    ctx->pc = 0x2b39c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b39cc: 0xf8810010
    ctx->pc = 0x2b39ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b39d0: 0xf8820020
    ctx->pc = 0x2b39d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2b39d4: 0xf8830030
    ctx->pc = 0x2b39d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2b39d8: 0xf8840040
    ctx->pc = 0x2b39d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b39dc: 0xf8850050
    ctx->pc = 0x2b39dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2b39e0: 0xf8860060
    ctx->pc = 0x2b39e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2b39e4: 0xf8870070
    ctx->pc = 0x2b39e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2b39e8: 0xf8880080
    ctx->pc = 0x2b39e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x2b39ec: 0xf8890090
    ctx->pc = 0x2b39ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x2b39f0: 0xf88a00a0
    ctx->pc = 0x2b39f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x2b39f4: 0xf88b00b0
    ctx->pc = 0x2b39f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x2b39f8: 0xf88c00c0
    ctx->pc = 0x2b39f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x2b39fc: 0xf88d00d0
    ctx->pc = 0x2b39fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x2b3a00: 0xf88e00e0
    ctx->pc = 0x2b3a00u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x2b3a04: 0xf88f00f0
    ctx->pc = 0x2b3a04u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 240), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x2b3a08: 0xf8900100
    ctx->pc = 0x2b3a08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 256), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2b3a0c: 0xf8910110
    ctx->pc = 0x2b3a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 272), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x2b3a10: 0xf8920120
    ctx->pc = 0x2b3a10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 288), _mm_castps_si128(ctx->vu0_vf[18]));
    // 0x2b3a14: 0xf8930130
    ctx->pc = 0x2b3a14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 304), _mm_castps_si128(ctx->vu0_vf[19]));
    // 0x2b3a18: 0xf8940140
    ctx->pc = 0x2b3a18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 320), _mm_castps_si128(ctx->vu0_vf[20]));
    // 0x2b3a1c: 0xf8950150
    ctx->pc = 0x2b3a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 336), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x2b3a20: 0xf8960160
    ctx->pc = 0x2b3a20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 352), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x2b3a24: 0xf8970170
    ctx->pc = 0x2b3a24u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 368), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x2b3a28: 0xf8980180
    ctx->pc = 0x2b3a28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 384), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x2b3a2c: 0xf8990190
    ctx->pc = 0x2b3a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 400), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x2b3a30: 0xf89a01a0
    ctx->pc = 0x2b3a30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 416), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x2b3a34: 0xf89b01b0
    ctx->pc = 0x2b3a34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 432), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x2b3a38: 0xf89c01c0
    ctx->pc = 0x2b3a38u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 448), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x2b3a3c: 0xf89d01d0
    ctx->pc = 0x2b3a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 464), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x2b3a40: 0xf89e01e0
    ctx->pc = 0x2b3a40u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 480), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x2b3a44: 0xf89f01f0
    ctx->pc = 0x2b3a44u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 496), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x2b3a48: 0x0
    ctx->pc = 0x2b3a48u;
    // NOP
    // 0x2b3a4c: 0x0
    ctx->pc = 0x2b3a4cu;
    // NOP
    // 0x2b3a50: 0x0
    ctx->pc = 0x2b3a50u;
    // NOP
    // 0x2b3a54: 0x0
    ctx->pc = 0x2b3a54u;
    // NOP
    // 0x2b3a58: 0x0
    ctx->pc = 0x2b3a58u;
    // NOP
    // 0x2b3a5c: 0x3e00008
    ctx->pc = 0x2B3A5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B3A64u;
}
