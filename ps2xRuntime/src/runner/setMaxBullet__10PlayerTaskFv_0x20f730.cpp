#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setMaxBullet__10PlayerTaskFv
// Address: 0x20f730 - 0x20f7f4
void setMaxBullet__10PlayerTaskFv_0x20f730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setMaxBullet__10PlayerTaskFv");


    ctx->pc = 0x20f730u;

    // 0x20f730: 0x3c010050
    ctx->pc = 0x20f730u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20f734: 0x8425e504
    ctx->pc = 0x20f734u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x20f738: 0x2403000a
    ctx->pc = 0x20f738u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x20f73c: 0x14a30020
    ctx->pc = 0x20F73Cu;
    {
        const bool branch_taken_0x20f73c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x20f73c) {
            ctx->pc = 0x20F7C0u;
            goto label_20f7c0;
        }
    }
    ctx->pc = 0x20F744u;
    // 0x20f744: 0x8f858bcc
    ctx->pc = 0x20f744u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x20f748: 0x24080001
    ctx->pc = 0x20f748u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f74c: 0x10a80008
    ctx->pc = 0x20F74Cu;
    {
        const bool branch_taken_0x20f74c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 8));
        if (branch_taken_0x20f74c) {
            ctx->pc = 0x20F770u;
            goto label_20f770;
        }
    }
    ctx->pc = 0x20F754u;
    // 0x20f754: 0x24030002
    ctx->pc = 0x20f754u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20f758: 0x10a30001
    ctx->pc = 0x20F758u;
    {
        const bool branch_taken_0x20f758 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x20f758) {
            ctx->pc = 0x20F760u;
            goto label_20f760;
        }
    }
    ctx->pc = 0x20F760u;
label_20f760:
    // 0x20f760: 0x8c831cbc
    ctx->pc = 0x20f760u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20f764: 0x24050008
    ctx->pc = 0x20f764u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x20f768: 0x10000018
    ctx->pc = 0x20F768u;
    {
        const bool branch_taken_0x20f768 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F76Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 5));
        if (branch_taken_0x20f768) {
            ctx->pc = 0x20F7CCu;
            goto label_20f7cc;
        }
    }
    ctx->pc = 0x20F770u;
label_20f770:
    // 0x20f770: 0x8c871cb8
    ctx->pc = 0x20f770u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 7352)));
    // 0x20f774: 0x3c030050
    ctx->pc = 0x20f774u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x20f778: 0x2466fc80
    ctx->pc = 0x20f778u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 4294966400));
    // 0x20f77c: 0x3c0300a1
    ctx->pc = 0x20f77cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)161 << 16));
    // 0x20f780: 0x24650300
    ctx->pc = 0x20f780u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 768));
    // 0x20f784: 0x8c831cbc
    ctx->pc = 0x20f784u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20f788: 0x73880
    ctx->pc = 0x20f788u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
    // 0x20f78c: 0xc73021
    ctx->pc = 0x20f78cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x20f790: 0x80c60000
    ctx->pc = 0x20f790u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20f794: 0x63040
    ctx->pc = 0x20f794u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 1));
    // 0x20f798: 0xa62821
    ctx->pc = 0x20f798u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x20f79c: 0x80a50000
    ctx->pc = 0x20f79cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20f7a0: 0xac650048
    ctx->pc = 0x20f7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 5));
    // 0x20f7a4: 0x8c831cbc
    ctx->pc = 0x20f7a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20f7a8: 0x24650048
    ctx->pc = 0x20f7a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 72));
    // 0x20f7ac: 0x8c630048
    ctx->pc = 0x20f7acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x20f7b0: 0x4610006
    ctx->pc = 0x20F7B0u;
    {
        const bool branch_taken_0x20f7b0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x20f7b0) {
            ctx->pc = 0x20F7CCu;
            goto label_20f7cc;
        }
    }
    ctx->pc = 0x20F7B8u;
    // 0x20f7b8: 0x10000004
    ctx->pc = 0x20F7B8u;
    {
        const bool branch_taken_0x20f7b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F7BCu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
        if (branch_taken_0x20f7b8) {
            ctx->pc = 0x20F7CCu;
            goto label_20f7cc;
        }
    }
    ctx->pc = 0x20F7C0u;
label_20f7c0:
    // 0x20f7c0: 0x8c831cbc
    ctx->pc = 0x20f7c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20f7c4: 0x24050008
    ctx->pc = 0x20f7c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x20f7c8: 0xac650048
    ctx->pc = 0x20f7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 5));
label_20f7cc:
    // 0x20f7cc: 0x8c831cbc
    ctx->pc = 0x20f7ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20f7d0: 0x8c640048
    ctx->pc = 0x20f7d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x20f7d4: 0x2465004c
    ctx->pc = 0x20f7d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 76));
    // 0x20f7d8: 0x8c63004c
    ctx->pc = 0x20f7d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x20f7dc: 0x83182a
    ctx->pc = 0x20f7dcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x20f7e0: 0x10600002
    ctx->pc = 0x20F7E0u;
    {
        const bool branch_taken_0x20f7e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20f7e0) {
            ctx->pc = 0x20F7ECu;
            goto label_20f7ec;
        }
    }
    ctx->pc = 0x20F7E8u;
    // 0x20f7e8: 0xaca40000
    ctx->pc = 0x20f7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_20f7ec:
    // 0x20f7ec: 0x3e00008
    ctx->pc = 0x20F7ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F760u: goto label_20f760;
            case 0x20F770u: goto label_20f770;
            case 0x20F7C0u: goto label_20f7c0;
            case 0x20F7CCu: goto label_20f7cc;
            case 0x20F7ECu: goto label_20f7ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20F7F4u;
}
