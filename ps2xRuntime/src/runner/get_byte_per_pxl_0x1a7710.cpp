#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: get_byte_per_pxl
// Address: 0x1a7710 - 0x1a778c
void get_byte_per_pxl_0x1a7710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("get_byte_per_pxl");


    ctx->pc = 0x1a7710u;

    // 0x1a7710: 0x2402003a
    ctx->pc = 0x1a7710u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 58));
    // 0x1a7714: 0x10820017
    ctx->pc = 0x1A7714u;
    {
        const bool branch_taken_0x1a7714 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A7718u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1a7714) {
            ctx->pc = 0x1A7774u;
            goto label_1a7774;
        }
    }
    ctx->pc = 0x1A771Cu;
    // 0x1a771c: 0x24020032
    ctx->pc = 0x1a771cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 50));
    // 0x1a7720: 0x10820013
    ctx->pc = 0x1A7720u;
    {
        const bool branch_taken_0x1a7720 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A7724u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x1a7720) {
            ctx->pc = 0x1A7770u;
            goto label_1a7770;
        }
    }
    ctx->pc = 0x1A7728u;
    // 0x1a7728: 0x10820011
    ctx->pc = 0x1A7728u;
    {
        const bool branch_taken_0x1a7728 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A772Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1a7728) {
            ctx->pc = 0x1A7770u;
            goto label_1a7770;
        }
    }
    ctx->pc = 0x1A7730u;
    // 0x1a7730: 0x1082000f
    ctx->pc = 0x1A7730u;
    {
        const bool branch_taken_0x1a7730 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A7734u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 49));
        if (branch_taken_0x1a7730) {
            ctx->pc = 0x1A7770u;
            goto label_1a7770;
        }
    }
    ctx->pc = 0x1A7738u;
    // 0x1a7738: 0x1082000b
    ctx->pc = 0x1A7738u;
    {
        const bool branch_taken_0x1a7738 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A773Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1a7738) {
            ctx->pc = 0x1A7768u;
            goto label_1a7768;
        }
    }
    ctx->pc = 0x1A7740u;
    // 0x1a7740: 0x24020030
    ctx->pc = 0x1a7740u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x1a7744: 0x10820007
    ctx->pc = 0x1A7744u;
    {
        const bool branch_taken_0x1a7744 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A7748u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1a7744) {
            ctx->pc = 0x1A7764u;
            goto label_1a7764;
        }
    }
    ctx->pc = 0x1A774Cu;
    // 0x1a774c: 0x10820005
    ctx->pc = 0x1A774Cu;
    {
        const bool branch_taken_0x1a774c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x1a774c) {
            ctx->pc = 0x1A7764u;
            goto label_1a7764;
        }
    }
    ctx->pc = 0x1A7754u;
    // 0x1a7754: 0x10800003
    ctx->pc = 0x1A7754u;
    {
        const bool branch_taken_0x1a7754 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a7754) {
            ctx->pc = 0x1A7764u;
            goto label_1a7764;
        }
    }
    ctx->pc = 0x1A775Cu;
    // 0x1a775c: 0x10000007
    ctx->pc = 0x1A775Cu;
    {
        const bool branch_taken_0x1a775c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a775c) {
            ctx->pc = 0x1A777Cu;
            goto label_1a777c;
        }
    }
    ctx->pc = 0x1A7764u;
label_1a7764:
    // 0x1a7764: 0x24020004
    ctx->pc = 0x1a7764u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_1a7768:
    // 0x1a7768: 0x10000006
    ctx->pc = 0x1A7768u;
    {
        const bool branch_taken_0x1a7768 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a7768) {
            ctx->pc = 0x1A7784u;
            goto label_1a7784;
        }
    }
    ctx->pc = 0x1A7770u;
label_1a7770:
    // 0x1a7770: 0x24020002
    ctx->pc = 0x1a7770u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1a7774:
    // 0x1a7774: 0x10000003
    ctx->pc = 0x1A7774u;
    {
        const bool branch_taken_0x1a7774 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a7774) {
            ctx->pc = 0x1A7784u;
            goto label_1a7784;
        }
    }
    ctx->pc = 0x1A777Cu;
label_1a777c:
    // 0x1a777c: 0x1000ffff
    ctx->pc = 0x1A777Cu;
    {
        const bool branch_taken_0x1a777c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a777c) {
            ctx->pc = 0x1A777Cu;
            goto label_1a777c;
        }
    }
    ctx->pc = 0x1A7784u;
label_1a7784:
    // 0x1a7784: 0x3e00008
    ctx->pc = 0x1A7784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7764u: goto label_1a7764;
            case 0x1A7768u: goto label_1a7768;
            case 0x1A7770u: goto label_1a7770;
            case 0x1A7774u: goto label_1a7774;
            case 0x1A777Cu: goto label_1a777c;
            case 0x1A7784u: goto label_1a7784;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A778Cu;
}
