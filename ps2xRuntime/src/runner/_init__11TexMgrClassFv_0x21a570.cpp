#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _init__11TexMgrClassFv
// Address: 0x21a570 - 0x21a614
void _init__11TexMgrClassFv_0x21a570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_init__11TexMgrClassFv");


    ctx->pc = 0x21a570u;

    // 0x21a570: 0x3c030092
    ctx->pc = 0x21a570u;
    SET_GPR_U32(ctx, 3, ((uint32_t)146 << 16));
    // 0x21a574: 0x70002e28
    ctx->pc = 0x21a574u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21a578: 0x24664d00
    ctx->pc = 0x21a578u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 19712));
label_21a57c:
    // 0x21a57c: 0xacc00000
    ctx->pc = 0x21a57cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x21a580: 0xacc00004
    ctx->pc = 0x21a580u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x21a584: 0xacc00014
    ctx->pc = 0x21a584u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x21a588: 0x24030101
    ctx->pc = 0x21a588u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 257));
    // 0x21a58c: 0x10a3001a
    ctx->pc = 0x21A58Cu;
    {
        const bool branch_taken_0x21a58c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x21A590u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
        if (branch_taken_0x21a58c) {
            ctx->pc = 0x21A5F8u;
            goto label_21a5f8;
        }
    }
    ctx->pc = 0x21A594u;
    // 0x21a594: 0x24030100
    ctx->pc = 0x21a594u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 256));
    // 0x21a598: 0x50a30018
    ctx->pc = 0x21A598u;
    {
        const bool branch_taken_0x21a598 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x21a598) {
            ctx->pc = 0x21A59Cu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x21A5FCu;
            goto label_21a5fc;
        }
    }
    ctx->pc = 0x21A5A0u;
    // 0x21a5a0: 0x240300ff
    ctx->pc = 0x21a5a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x21a5a4: 0x10a30014
    ctx->pc = 0x21A5A4u;
    {
        const bool branch_taken_0x21a5a4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x21a5a4) {
            ctx->pc = 0x21A5F8u;
            goto label_21a5f8;
        }
    }
    ctx->pc = 0x21A5ACu;
    // 0x21a5ac: 0x240300fe
    ctx->pc = 0x21a5acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 254));
    // 0x21a5b0: 0x10a30011
    ctx->pc = 0x21A5B0u;
    {
        const bool branch_taken_0x21a5b0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x21a5b0) {
            ctx->pc = 0x21A5F8u;
            goto label_21a5f8;
        }
    }
    ctx->pc = 0x21A5B8u;
    // 0x21a5b8: 0x240300fd
    ctx->pc = 0x21a5b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 253));
    // 0x21a5bc: 0x10a3000e
    ctx->pc = 0x21A5BCu;
    {
        const bool branch_taken_0x21a5bc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x21a5bc) {
            ctx->pc = 0x21A5F8u;
            goto label_21a5f8;
        }
    }
    ctx->pc = 0x21A5C4u;
    // 0x21a5c4: 0x240300fb
    ctx->pc = 0x21a5c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 251));
    // 0x21a5c8: 0x10a3000b
    ctx->pc = 0x21A5C8u;
    {
        const bool branch_taken_0x21a5c8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x21a5c8) {
            ctx->pc = 0x21A5F8u;
            goto label_21a5f8;
        }
    }
    ctx->pc = 0x21A5D0u;
    // 0x21a5d0: 0x240300fc
    ctx->pc = 0x21a5d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 252));
    // 0x21a5d4: 0x10a30008
    ctx->pc = 0x21A5D4u;
    {
        const bool branch_taken_0x21a5d4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x21a5d4) {
            ctx->pc = 0x21A5F8u;
            goto label_21a5f8;
        }
    }
    ctx->pc = 0x21A5DCu;
    // 0x21a5dc: 0x240300fa
    ctx->pc = 0x21a5dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 250));
    // 0x21a5e0: 0x10a30005
    ctx->pc = 0x21A5E0u;
    {
        const bool branch_taken_0x21a5e0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x21a5e0) {
            ctx->pc = 0x21A5F8u;
            goto label_21a5f8;
        }
    }
    ctx->pc = 0x21A5E8u;
    // 0x21a5e8: 0x24030001
    ctx->pc = 0x21a5e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a5ec: 0x10a30002
    ctx->pc = 0x21A5ECu;
    {
        const bool branch_taken_0x21a5ec = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x21a5ec) {
            ctx->pc = 0x21A5F8u;
            goto label_21a5f8;
        }
    }
    ctx->pc = 0x21A5F4u;
    // 0x21a5f4: 0xacc00008
    ctx->pc = 0x21a5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_21a5f8:
    // 0x21a5f8: 0x24a50001
    ctx->pc = 0x21a5f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_21a5fc:
    // 0x21a5fc: 0x28a301d7
    ctx->pc = 0x21a5fcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 471));
    // 0x21a600: 0x1460ffde
    ctx->pc = 0x21A600u;
    {
        const bool branch_taken_0x21a600 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x21A604u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 28));
        if (branch_taken_0x21a600) {
            ctx->pc = 0x21A57Cu;
            goto label_21a57c;
        }
    }
    ctx->pc = 0x21A608u;
    // 0x21a608: 0xac8003ac
    ctx->pc = 0x21a608u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 940), GPR_U32(ctx, 0));
    // 0x21a60c: 0x3e00008
    ctx->pc = 0x21A60Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A610u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 948), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21A57Cu: goto label_21a57c;
            case 0x21A5F8u: goto label_21a5f8;
            case 0x21A5FCu: goto label_21a5fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21A614u;
}
