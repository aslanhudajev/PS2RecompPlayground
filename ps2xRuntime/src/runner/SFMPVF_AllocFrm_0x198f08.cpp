#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPVF_AllocFrm
// Address: 0x198f08 - 0x198f98
void SFMPVF_AllocFrm_0x198f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPVF_AllocFrm");


    ctx->pc = 0x198f08u;

    // 0x198f08: 0x27bdffc0
    ctx->pc = 0x198f08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x198f0c: 0xffb10020
    ctx->pc = 0x198f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x198f10: 0x80882d
    ctx->pc = 0x198f10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198f14: 0xffb00010
    ctx->pc = 0x198f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x198f18: 0xffbf0030
    ctx->pc = 0x198f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x198f1c: 0xc064f3a
    ctx->pc = 0x198F1Cu;
    SET_GPR_U32(ctx, 31, 0x198F24u);
    ctx->pc = 0x198F20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_LockCs_0x193ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F24u; }
        else if (ctx->pc != 0x198F24u) { ctx->pc = 0x198F24u; }
    }
    if (ctx->pc != 0x198F24u) { return; }
    ctx->pc = 0x198F24u;
    // 0x198f24: 0x26303810
    ctx->pc = 0x198f24u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 14352));
    // 0x198f28: 0x8e24380c
    ctx->pc = 0x198f28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 14348)));
    // 0x198f2c: 0x18800010
    ctx->pc = 0x198F2Cu;
    {
        const bool branch_taken_0x198f2c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x198F30u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x198f2c) {
            ctx->pc = 0x198F70u;
            goto label_198f70;
        }
    }
    ctx->pc = 0x198F34u;
    // 0x198f34: 0x8e223810
    ctx->pc = 0x198f34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 14352)));
    // 0x198f38: 0x54400005
    ctx->pc = 0x198F38u;
    {
        const bool branch_taken_0x198f38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x198f38) {
            ctx->pc = 0x198F3Cu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x198F50u;
            goto label_198f50;
        }
    }
    ctx->pc = 0x198F40u;
    // 0x198f40: 0x24020001
    ctx->pc = 0x198f40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x198f44: 0x1000000a
    ctx->pc = 0x198F44u;
    {
        const bool branch_taken_0x198f44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x198F48u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 14352), GPR_U32(ctx, 2));
        if (branch_taken_0x198f44) {
            ctx->pc = 0x198F70u;
            goto label_198f70;
        }
    }
    ctx->pc = 0x198F4Cu;
    // 0x198f4c: 0x0
    ctx->pc = 0x198f4cu;
    // NOP
label_198f50:
    // 0x198f50: 0x64102a
    ctx->pc = 0x198f50u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x198f54: 0x10400006
    ctx->pc = 0x198F54u;
    {
        const bool branch_taken_0x198f54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x198F58u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 80));
        if (branch_taken_0x198f54) {
            ctx->pc = 0x198F70u;
            goto label_198f70;
        }
    }
    ctx->pc = 0x198F5Cu;
    // 0x198f5c: 0x8e020000
    ctx->pc = 0x198f5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x198f60: 0x5440fffb
    ctx->pc = 0x198F60u;
    {
        const bool branch_taken_0x198f60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x198f60) {
            ctx->pc = 0x198F64u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x198F50u;
            goto label_198f50;
        }
    }
    ctx->pc = 0x198F68u;
    // 0x198f68: 0x24020001
    ctx->pc = 0x198f68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x198f6c: 0xae020000
    ctx->pc = 0x198f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_198f70:
    // 0x198f70: 0x641026
    ctx->pc = 0x198f70u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x198f74: 0x2800a
    ctx->pc = 0x198f74u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
    // 0x198f78: 0xc064f44
    ctx->pc = 0x198F78u;
    SET_GPR_U32(ctx, 31, 0x198F80u);
    ctx->pc = 0x198F7Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_UnlockCs_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F80u; }
        else if (ctx->pc != 0x198F80u) { ctx->pc = 0x198F80u; }
    }
    if (ctx->pc != 0x198F80u) { return; }
    ctx->pc = 0x198F80u;
    // 0x198f80: 0x200102d
    ctx->pc = 0x198f80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198f84: 0xdfbf0030
    ctx->pc = 0x198f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198f88: 0xdfb10020
    ctx->pc = 0x198f88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198f8c: 0xdfb00010
    ctx->pc = 0x198f8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198f90: 0x3e00008
    ctx->pc = 0x198F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198F94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198F50u: goto label_198f50;
            case 0x198F70u: goto label_198f70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198F98u;
}
