#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbGetVu0IRegs
// Address: 0x2b3a68 - 0x2b3b1c
void pbGetVu0IRegs_0x2b3a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b3a68u;

    // 0x2b3a68: 0x0
    ctx->pc = 0x2b3a68u;
    // NOP
    // 0x2b3a6c: 0x0
    ctx->pc = 0x2b3a6cu;
    // NOP
    // 0x2b3a70: 0x0
    ctx->pc = 0x2b3a70u;
    // NOP
    // 0x2b3a74: 0x0
    ctx->pc = 0x2b3a74u;
    // NOP
    // 0x2b3a78: 0x0
    ctx->pc = 0x2b3a78u;
    // NOP
    // 0x2b3a7c: 0x0
    ctx->pc = 0x2b3a7cu;
    // NOP
    // 0x2b3a80: 0x48420000
    ctx->pc = 0x2b3a80u;
    SET_GPR_U32(ctx, 2, ctx->vu0_status);
    // 0x2b3a84: 0xa4820000
    ctx->pc = 0x2b3a84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b3a88: 0x48420800
    ctx->pc = 0x2b3a88u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x2b3a8c: 0xa4820002
    ctx->pc = 0x2b3a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b3a90: 0x48421000
    ctx->pc = 0x2b3a90u;
    SET_GPR_U32(ctx, 2, ctx->vu0_vpu_stat);
    // 0x2b3a94: 0xa4820004
    ctx->pc = 0x2b3a94u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b3a98: 0x48421800
    ctx->pc = 0x2b3a98u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_r));
    // 0x2b3a9c: 0xa4820006
    ctx->pc = 0x2b3a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b3aa0: 0x48422000
    ctx->pc = 0x2b3aa0u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->vu0_i);
    // 0x2b3aa4: 0xa4820008
    ctx->pc = 0x2b3aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b3aa8: 0x48422800
    ctx->pc = 0x2b3aa8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags);
    // 0x2b3aac: 0xa482000a
    ctx->pc = 0x2b3aacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b3ab0: 0x48423000
    ctx->pc = 0x2b3ab0u;
    SET_GPR_U32(ctx, 2, ctx->vu0_tpc);
    // 0x2b3ab4: 0xa482000c
    ctx->pc = 0x2b3ab4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b3ab8: 0x48423800
    ctx->pc = 0x2b3ab8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_cmsar0);
    // 0x2b3abc: 0xa482000e
    ctx->pc = 0x2b3abcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b3ac0: 0x48424000
    ctx->pc = 0x2b3ac0u;
    SET_GPR_U32(ctx, 2, ctx->vu0_fbrst);
    // 0x2b3ac4: 0xa4820010
    ctx->pc = 0x2b3ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b3ac8: 0x48424800
    ctx->pc = 0x2b3ac8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_vpu_stat2);
    // 0x2b3acc: 0xa4820012
    ctx->pc = 0x2b3accu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b3ad0: 0x48425000
    ctx->pc = 0x2b3ad0u;
    SET_GPR_U32(ctx, 2, ctx->vu0_tpc2);
    // 0x2b3ad4: 0xa4820014
    ctx->pc = 0x2b3ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b3ad8: 0x48425800
    ctx->pc = 0x2b3ad8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_cmsar1);
    // 0x2b3adc: 0xa4820016
    ctx->pc = 0x2b3adcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b3ae0: 0x48426000
    ctx->pc = 0x2b3ae0u;
    SET_GPR_U32(ctx, 2, ctx->vu0_fbrst2);
    // 0x2b3ae4: 0xa4820018
    ctx->pc = 0x2b3ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b3ae8: 0x48426800
    ctx->pc = 0x2b3ae8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_vpu_stat3);
    // 0x2b3aec: 0xa482001a
    ctx->pc = 0x2b3aecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b3af0: 0x48427000
    ctx->pc = 0x2b3af0u;
    SET_GPR_U32(ctx, 2, ctx->vu0_cmsar2);
    // 0x2b3af4: 0xa482001c
    ctx->pc = 0x2b3af4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b3af8: 0x48427800
    ctx->pc = 0x2b3af8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_fbrst3);
    // 0x2b3afc: 0xa482001e
    ctx->pc = 0x2b3afcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b3b00: 0x0
    ctx->pc = 0x2b3b00u;
    // NOP
    // 0x2b3b04: 0x0
    ctx->pc = 0x2b3b04u;
    // NOP
    // 0x2b3b08: 0x0
    ctx->pc = 0x2b3b08u;
    // NOP
    // 0x2b3b0c: 0x0
    ctx->pc = 0x2b3b0cu;
    // NOP
    // 0x2b3b10: 0x0
    ctx->pc = 0x2b3b10u;
    // NOP
    // 0x2b3b14: 0x3e00008
    ctx->pc = 0x2B3B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B3B1Cu;
}
