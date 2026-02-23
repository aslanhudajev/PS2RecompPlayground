#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPVF_GetNumFrm
// Address: 0x198e68 - 0x198f08
void SFMPVF_GetNumFrm_0x198e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPVF_GetNumFrm");


    ctx->pc = 0x198e68u;

    // 0x198e68: 0x27bdffc0
    ctx->pc = 0x198e68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x198e6c: 0xffb00010
    ctx->pc = 0x198e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x198e70: 0x80802d
    ctx->pc = 0x198e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e74: 0xffb10020
    ctx->pc = 0x198e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x198e78: 0xffbf0030
    ctx->pc = 0x198e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x198e7c: 0xc064f3a
    ctx->pc = 0x198E7Cu;
    SET_GPR_U32(ctx, 31, 0x198E84u);
    ctx->pc = 0x198E80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_LockCs_0x193ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E84u; }
        else if (ctx->pc != 0x198E84u) { ctx->pc = 0x198E84u; }
    }
    if (ctx->pc != 0x198E84u) { return; }
    ctx->pc = 0x198E84u;
    // 0x198e84: 0x882d
    ctx->pc = 0x198e84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e88: 0x26023740
    ctx->pc = 0x198e88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 14144));
    // 0x198e8c: 0x282d
    ctx->pc = 0x198e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e90: 0x8c4400cc
    ctx->pc = 0x198e90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x198e94: 0x1880000f
    ctx->pc = 0x198E94u;
    {
        const bool branch_taken_0x198e94 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x198E98u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 14352));
        if (branch_taken_0x198e94) {
            ctx->pc = 0x198ED4u;
            goto label_198ed4;
        }
    }
    ctx->pc = 0x198E9Cu;
    // 0x198e9c: 0x8c460034
    ctx->pc = 0x198e9cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_198ea0:
    // 0x198ea0: 0x8e030000
    ctx->pc = 0x198ea0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x198ea4: 0x24020002
    ctx->pc = 0x198ea4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x198ea8: 0x10620003
    ctx->pc = 0x198EA8u;
    {
        const bool branch_taken_0x198ea8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x198EACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x198ea8) {
            ctx->pc = 0x198EB8u;
            goto label_198eb8;
        }
    }
    ctx->pc = 0x198EB0u;
    // 0x198eb0: 0x54620003
    ctx->pc = 0x198EB0u;
    {
        const bool branch_taken_0x198eb0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x198eb0) {
            ctx->pc = 0x198EB4u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x198EC0u;
            goto label_198ec0;
        }
    }
    ctx->pc = 0x198EB8u;
label_198eb8:
    // 0x198eb8: 0x26310001
    ctx->pc = 0x198eb8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x198ebc: 0x24a50001
    ctx->pc = 0x198ebcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_198ec0:
    // 0x198ec0: 0xa4102a
    ctx->pc = 0x198ec0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 4)));
    // 0x198ec4: 0x1440fff6
    ctx->pc = 0x198EC4u;
    {
        const bool branch_taken_0x198ec4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x198EC8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 80));
        if (branch_taken_0x198ec4) {
            ctx->pc = 0x198EA0u;
            goto label_198ea0;
        }
    }
    ctx->pc = 0x198ECCu;
    // 0x198ecc: 0x10000003
    ctx->pc = 0x198ECCu;
    {
        const bool branch_taken_0x198ecc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x198ED0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x198ecc) {
            ctx->pc = 0x198EDCu;
            goto label_198edc;
        }
    }
    ctx->pc = 0x198ED4u;
label_198ed4:
    // 0x198ed4: 0x8c460034
    ctx->pc = 0x198ed4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x198ed8: 0x24020001
    ctx->pc = 0x198ed8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_198edc:
    // 0x198edc: 0x14c20002
    ctx->pc = 0x198EDCu;
    {
        const bool branch_taken_0x198edc = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x198EE0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x198edc) {
            ctx->pc = 0x198EE8u;
            goto label_198ee8;
        }
    }
    ctx->pc = 0x198EE4u;
    // 0x198ee4: 0x51880a
    ctx->pc = 0x198ee4u;
    if (GPR_U32(ctx, 17) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 2));
label_198ee8:
    // 0x198ee8: 0xc064f44
    ctx->pc = 0x198EE8u;
    SET_GPR_U32(ctx, 31, 0x198EF0u);
    ctx->pc = 0x198EECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_UnlockCs_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198EF0u; }
        else if (ctx->pc != 0x198EF0u) { ctx->pc = 0x198EF0u; }
    }
    if (ctx->pc != 0x198EF0u) { return; }
    ctx->pc = 0x198EF0u;
    // 0x198ef0: 0x220102d
    ctx->pc = 0x198ef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ef4: 0xdfbf0030
    ctx->pc = 0x198ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198ef8: 0xdfb10020
    ctx->pc = 0x198ef8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198efc: 0xdfb00010
    ctx->pc = 0x198efcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198f00: 0x3e00008
    ctx->pc = 0x198F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198F04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198EA0u: goto label_198ea0;
            case 0x198EB8u: goto label_198eb8;
            case 0x198EC0u: goto label_198ec0;
            case 0x198ED4u: goto label_198ed4;
            case 0x198EDCu: goto label_198edc;
            case 0x198EE8u: goto label_198ee8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198F08u;
}
