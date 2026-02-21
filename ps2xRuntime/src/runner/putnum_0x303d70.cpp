#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: putnum
// Address: 0x303d70 - 0x303dc4
void putnum_0x303d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303d70u;

    // 0x303d70: 0x27bdffe0
    ctx->pc = 0x303d70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x303d74: 0x24060007
    ctx->pc = 0x303d74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x303d78: 0xffbf0010
    ctx->pc = 0x303d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x303d7c: 0x3a0282d
    ctx->pc = 0x303d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_303d80:
    // 0x303d80: 0x61080
    ctx->pc = 0x303d80u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x303d84: 0x441006
    ctx->pc = 0x303d84u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x303d88: 0x3042000f
    ctx->pc = 0x303d88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x303d8c: 0x2843000a
    ctx->pc = 0x303d8cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 10));
    // 0x303d90: 0x50600002
    ctx->pc = 0x303D90u;
    {
        const bool branch_taken_0x303d90 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x303d90) {
            ctx->pc = 0x303D94u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 87));
            ctx->pc = 0x303D9Cu;
            goto label_303d9c;
        }
    }
    ctx->pc = 0x303D98u;
    // 0x303d98: 0x24420030
    ctx->pc = 0x303d98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 48));
label_303d9c:
    // 0x303d9c: 0xa0a20000
    ctx->pc = 0x303d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x303da0: 0x24c6ffff
    ctx->pc = 0x303da0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x303da4: 0x4c1fff6
    ctx->pc = 0x303DA4u;
    {
        const bool branch_taken_0x303da4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x303DA8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x303da4) {
            ctx->pc = 0x303D80u;
            goto label_303d80;
        }
    }
    ctx->pc = 0x303DACu;
    // 0x303dac: 0xa0a00000
    ctx->pc = 0x303dacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x303db0: 0xc0c0e5c
    ctx->pc = 0x303DB0u;
    SET_GPR_U32(ctx, 31, 0x303DB8u);
    ctx->pc = 0x303DB4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303970u;
    {
        const uint32_t __entryPc = ctx->pc;
        print_0x303970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303DB8u; }
    }
    if (ctx->pc != 0x303DB8u) { return; }
    ctx->pc = 0x303DB8u;
    // 0x303db8: 0xdfbf0010
    ctx->pc = 0x303db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303dbc: 0x3e00008
    ctx->pc = 0x303DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303DC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x303D80u: goto label_303d80;
            case 0x303D9Cu: goto label_303d9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x303DC4u;
}
