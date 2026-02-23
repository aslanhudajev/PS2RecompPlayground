#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _fwalk
// Address: 0x142348 - 0x1423dc
void _fwalk_0x142348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_fwalk");


    ctx->pc = 0x142348u;

label_142348:
    // 0x142348: 0x27bdffa0
    ctx->pc = 0x142348u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_14234c:
    // 0x14234c: 0xffb40040
    ctx->pc = 0x14234cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_142350:
    // 0x142350: 0xffb30030
    ctx->pc = 0x142350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_142354:
    // 0x142354: 0xa0a02d
    ctx->pc = 0x142354u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_142358:
    // 0x142358: 0xffb20020
    ctx->pc = 0x142358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_14235c:
    // 0x14235c: 0x982d
    ctx->pc = 0x14235cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_142360:
    // 0x142360: 0xffbf0050
    ctx->pc = 0x142360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_142364:
    // 0x142364: 0x249201d8
    ctx->pc = 0x142364u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 4), 472));
label_142368:
    // 0x142368: 0xffb10010
    ctx->pc = 0x142368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_14236c:
    // 0x14236c: 0x12400012
label_142370:
    if (ctx->pc == 0x142370u) {
        ctx->pc = 0x142370u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x142374u;
        goto label_142374;
    }
    ctx->pc = 0x14236Cu;
    {
        const bool branch_taken_0x14236c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x142370u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x14236c) {
            ctx->pc = 0x1423B8u;
            goto label_1423b8;
        }
    }
    ctx->pc = 0x142374u;
label_142374:
    // 0x142374: 0x8e500004
    ctx->pc = 0x142374u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_142378:
    // 0x142378: 0x2610ffff
    ctx->pc = 0x142378u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_14237c:
    // 0x14237c: 0x600000b
label_142380:
    if (ctx->pc == 0x142380u) {
        ctx->pc = 0x142380u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x142384u;
        goto label_142384;
    }
    ctx->pc = 0x14237Cu;
    {
        const bool branch_taken_0x14237c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x142380u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 8)));
        if (branch_taken_0x14237c) {
            ctx->pc = 0x1423ACu;
            goto label_1423ac;
        }
    }
    ctx->pc = 0x142384u;
label_142384:
    // 0x142384: 0x0
    ctx->pc = 0x142384u;
    // NOP
label_142388:
    // 0x142388: 0x8622000c
    ctx->pc = 0x142388u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_14238c:
    // 0x14238c: 0x50400005
label_142390:
    if (ctx->pc == 0x142390u) {
        ctx->pc = 0x142390u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->pc = 0x142394u;
        goto label_142394;
    }
    ctx->pc = 0x14238Cu;
    {
        const bool branch_taken_0x14238c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x14238c) {
            ctx->pc = 0x142390u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->pc = 0x1423A4u;
            goto label_1423a4;
        }
    }
    ctx->pc = 0x142394u;
label_142394:
    // 0x142394: 0x280f809
label_142398:
    if (ctx->pc == 0x142398u) {
        ctx->pc = 0x142398u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14239Cu;
        goto label_14239c;
    }
    ctx->pc = 0x142394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x14239Cu);
        ctx->pc = 0x142398u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142348u: goto label_142348;
            case 0x14234Cu: goto label_14234c;
            case 0x142350u: goto label_142350;
            case 0x142354u: goto label_142354;
            case 0x142358u: goto label_142358;
            case 0x14235Cu: goto label_14235c;
            case 0x142360u: goto label_142360;
            case 0x142364u: goto label_142364;
            case 0x142368u: goto label_142368;
            case 0x14236Cu: goto label_14236c;
            case 0x142370u: goto label_142370;
            case 0x142374u: goto label_142374;
            case 0x142378u: goto label_142378;
            case 0x14237Cu: goto label_14237c;
            case 0x142380u: goto label_142380;
            case 0x142384u: goto label_142384;
            case 0x142388u: goto label_142388;
            case 0x14238Cu: goto label_14238c;
            case 0x142390u: goto label_142390;
            case 0x142394u: goto label_142394;
            case 0x142398u: goto label_142398;
            case 0x14239Cu: goto label_14239c;
            case 0x1423A0u: goto label_1423a0;
            case 0x1423A4u: goto label_1423a4;
            case 0x1423A8u: goto label_1423a8;
            case 0x1423ACu: goto label_1423ac;
            case 0x1423B0u: goto label_1423b0;
            case 0x1423B4u: goto label_1423b4;
            case 0x1423B8u: goto label_1423b8;
            case 0x1423BCu: goto label_1423bc;
            case 0x1423C0u: goto label_1423c0;
            case 0x1423C4u: goto label_1423c4;
            case 0x1423C8u: goto label_1423c8;
            case 0x1423CCu: goto label_1423cc;
            case 0x1423D0u: goto label_1423d0;
            case 0x1423D4u: goto label_1423d4;
            case 0x1423D8u: goto label_1423d8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14239Cu; }
            if (ctx->pc != 0x14239Cu) { return; }
        }
    }
    ctx->pc = 0x14239Cu;
label_14239c:
    // 0x14239c: 0x2629825
    ctx->pc = 0x14239cu;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1423a0:
    // 0x1423a0: 0x2610ffff
    ctx->pc = 0x1423a0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_1423a4:
    // 0x1423a4: 0x601fff8
label_1423a8:
    if (ctx->pc == 0x1423A8u) {
        ctx->pc = 0x1423A8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 88));
        ctx->pc = 0x1423ACu;
        goto label_1423ac;
    }
    ctx->pc = 0x1423A4u;
    {
        const bool branch_taken_0x1423a4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1423A8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 88));
        if (branch_taken_0x1423a4) {
            ctx->pc = 0x142388u;
            goto label_142388;
        }
    }
    ctx->pc = 0x1423ACu;
label_1423ac:
    // 0x1423ac: 0x8e520000
    ctx->pc = 0x1423acu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1423b0:
    // 0x1423b0: 0x5640fff1
label_1423b4:
    if (ctx->pc == 0x1423B4u) {
        ctx->pc = 0x1423B4u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x1423B8u;
        goto label_1423b8;
    }
    ctx->pc = 0x1423B0u;
    {
        const bool branch_taken_0x1423b0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x1423b0) {
            ctx->pc = 0x1423B4u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->pc = 0x142378u;
            goto label_142378;
        }
    }
    ctx->pc = 0x1423B8u;
label_1423b8:
    // 0x1423b8: 0x260102d
    ctx->pc = 0x1423b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1423bc:
    // 0x1423bc: 0xdfbf0050
    ctx->pc = 0x1423bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1423c0:
    // 0x1423c0: 0xdfb40040
    ctx->pc = 0x1423c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1423c4:
    // 0x1423c4: 0xdfb30030
    ctx->pc = 0x1423c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1423c8:
    // 0x1423c8: 0xdfb20020
    ctx->pc = 0x1423c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1423cc:
    // 0x1423cc: 0xdfb10010
    ctx->pc = 0x1423ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1423d0:
    // 0x1423d0: 0xdfb00000
    ctx->pc = 0x1423d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1423d4:
    // 0x1423d4: 0x3e00008
label_1423d8:
    if (ctx->pc == 0x1423D8u) {
        ctx->pc = 0x1423D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1423DCu;
        goto label_fallthrough_0x1423d4;
    }
    ctx->pc = 0x1423D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1423D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142348u: goto label_142348;
            case 0x14234Cu: goto label_14234c;
            case 0x142350u: goto label_142350;
            case 0x142354u: goto label_142354;
            case 0x142358u: goto label_142358;
            case 0x14235Cu: goto label_14235c;
            case 0x142360u: goto label_142360;
            case 0x142364u: goto label_142364;
            case 0x142368u: goto label_142368;
            case 0x14236Cu: goto label_14236c;
            case 0x142370u: goto label_142370;
            case 0x142374u: goto label_142374;
            case 0x142378u: goto label_142378;
            case 0x14237Cu: goto label_14237c;
            case 0x142380u: goto label_142380;
            case 0x142384u: goto label_142384;
            case 0x142388u: goto label_142388;
            case 0x14238Cu: goto label_14238c;
            case 0x142390u: goto label_142390;
            case 0x142394u: goto label_142394;
            case 0x142398u: goto label_142398;
            case 0x14239Cu: goto label_14239c;
            case 0x1423A0u: goto label_1423a0;
            case 0x1423A4u: goto label_1423a4;
            case 0x1423A8u: goto label_1423a8;
            case 0x1423ACu: goto label_1423ac;
            case 0x1423B0u: goto label_1423b0;
            case 0x1423B4u: goto label_1423b4;
            case 0x1423B8u: goto label_1423b8;
            case 0x1423BCu: goto label_1423bc;
            case 0x1423C0u: goto label_1423c0;
            case 0x1423C4u: goto label_1423c4;
            case 0x1423C8u: goto label_1423c8;
            case 0x1423CCu: goto label_1423cc;
            case 0x1423D0u: goto label_1423d0;
            case 0x1423D4u: goto label_1423d4;
            case 0x1423D8u: goto label_1423d8;
            default: break;
        }
        return;
    }
label_fallthrough_0x1423d4:
    ctx->pc = 0x1423DCu;
}
