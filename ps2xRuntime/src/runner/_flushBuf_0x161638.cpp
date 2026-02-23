#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _flushBuf
// Address: 0x161638 - 0x16174c
void _flushBuf_0x161638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_flushBuf");


    ctx->pc = 0x161638u;

    // 0x161638: 0x27bdffa0
    ctx->pc = 0x161638u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16163c: 0x3c021000
    ctx->pc = 0x16163cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x161640: 0xffb10010
    ctx->pc = 0x161640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x161644: 0x34422010
    ctx->pc = 0x161644u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8208));
    // 0x161648: 0xffbf0050
    ctx->pc = 0x161648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x16164c: 0x3c058000
    ctx->pc = 0x16164cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x161650: 0xffb40040
    ctx->pc = 0x161650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x161654: 0x34a54000
    ctx->pc = 0x161654u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 16384));
    // 0x161658: 0xffb30030
    ctx->pc = 0x161658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x16165c: 0x80882d
    ctx->pc = 0x16165cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161660: 0xffb20020
    ctx->pc = 0x161660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x161664: 0x302d
    ctx->pc = 0x161664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161668: 0xffb00000
    ctx->pc = 0x161668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16166c: 0x8c430000
    ctx->pc = 0x16166cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161670: 0x3c028000
    ctx->pc = 0x161670u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x161674: 0x651824
    ctx->pc = 0x161674u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x161678: 0x14620018
    ctx->pc = 0x161678u;
    {
        const bool branch_taken_0x161678 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x16167Cu;
        SET_GPR_U32(ctx, 19, ((uint32_t)35 << 16));
        if (branch_taken_0x161678) {
            ctx->pc = 0x1616DCu;
            goto label_1616dc;
        }
    }
    ctx->pc = 0x161680u;
    // 0x161680: 0x3c100023
    ctx->pc = 0x161680u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x161684: 0x3c140023
    ctx->pc = 0x161684u;
    SET_GPR_U32(ctx, 20, ((uint32_t)35 << 16));
    // 0x161688: 0x3c120023
    ctx->pc = 0x161688u;
    SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
    // 0x16168c: 0x0
    ctx->pc = 0x16168cu;
    // NOP
label_161690:
    // 0x161690: 0xc0102d
    ctx->pc = 0x161690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161694: 0x28421389
    ctx->pc = 0x161694u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5001));
    // 0x161698: 0x14400005
    ctx->pc = 0x161698u;
    {
        const bool branch_taken_0x161698 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16169Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x161698) {
            ctx->pc = 0x1616B0u;
            goto label_1616b0;
        }
    }
    ctx->pc = 0x1616A0u;
    // 0x1616a0: 0x3c020023
    ctx->pc = 0x1616a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1616a4: 0xc058f00
    ctx->pc = 0x1616A4u;
    SET_GPR_U32(ctx, 31, 0x1616ACu);
    ctx->pc = 0x1616A8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943260)));
    ctx->pc = 0x163C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x163c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1616ACu; }
        else if (ctx->pc != 0x1616ACu) { ctx->pc = 0x1616ACu; }
    }
    if (ctx->pc != 0x1616ACu) { return; }
    ctx->pc = 0x1616ACu;
    // 0x1616ac: 0x302d
    ctx->pc = 0x1616acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1616b0:
    // 0x1616b0: 0x3c031000
    ctx->pc = 0x1616b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1616b4: 0x3c048000
    ctx->pc = 0x1616b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x1616b8: 0x34632010
    ctx->pc = 0x1616b8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
    // 0x1616bc: 0x34844000
    ctx->pc = 0x1616bcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 16384));
    // 0x1616c0: 0x8c620000
    ctx->pc = 0x1616c0u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x1616c4: 0x3c058000
    ctx->pc = 0x1616c4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x1616c8: 0x441024
    ctx->pc = 0x1616c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1616cc: 0x1045fff0
    ctx->pc = 0x1616CCu;
    {
        const bool branch_taken_0x1616cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x1616D0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
        if (branch_taken_0x1616cc) {
            ctx->pc = 0x161690u;
            goto label_161690;
        }
    }
    ctx->pc = 0x1616D4u;
    // 0x1616d4: 0x10000006
    ctx->pc = 0x1616D4u;
    {
        const bool branch_taken_0x1616d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1616D8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
        if (branch_taken_0x1616d4) {
            ctx->pc = 0x1616F0u;
            goto label_1616f0;
        }
    }
    ctx->pc = 0x1616DCu;
label_1616dc:
    // 0x1616dc: 0x3c100023
    ctx->pc = 0x1616dcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x1616e0: 0x3c140023
    ctx->pc = 0x1616e0u;
    SET_GPR_U32(ctx, 20, ((uint32_t)35 << 16));
    // 0x1616e4: 0x3c120023
    ctx->pc = 0x1616e4u;
    SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
    // 0x1616e8: 0x3c034000
    ctx->pc = 0x1616e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
    // 0x1616ec: 0x3c041000
    ctx->pc = 0x1616ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
label_1616f0:
    // 0x1616f0: 0x2231825
    ctx->pc = 0x1616f0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1616f4: 0x34842000
    ctx->pc = 0x1616f4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 8192));
    // 0x1616f8: 0xac830000
    ctx->pc = 0x1616f8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x1616fc: 0x31702
    ctx->pc = 0x1616fcu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 28));
    // 0x161700: 0x2603a148
    ctx->pc = 0x161700u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294943048));
    // 0x161704: 0x21080
    ctx->pc = 0x161704u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x161708: 0x431021
    ctx->pc = 0x161708u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16170c: 0x8c440000
    ctx->pc = 0x16170cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161710: 0xc0584a6
    ctx->pc = 0x161710u;
    SET_GPR_U32(ctx, 31, 0x161718u);
    ctx->pc = 0x161714u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294943332), GPR_U32(ctx, 4));
    ctx->pc = 0x161298u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle64_0x161298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161718u; }
        else if (ctx->pc != 0x161718u) { ctx->pc = 0x161718u; }
    }
    if (ctx->pc != 0x161718u) { return; }
    ctx->pc = 0x161718u;
    // 0x161718: 0x2103c
    ctx->pc = 0x161718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x16171c: 0x2103f
    ctx->pc = 0x16171cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x161720: 0x24030020
    ctx->pc = 0x161720u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
    // 0x161724: 0xae82aad8
    ctx->pc = 0x161724u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294945496), GPR_U32(ctx, 2));
    // 0x161728: 0xae43aadc
    ctx->pc = 0x161728u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294945500), GPR_U32(ctx, 3));
    // 0x16172c: 0xdfbf0050
    ctx->pc = 0x16172cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x161730: 0xdfb40040
    ctx->pc = 0x161730u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x161734: 0xdfb30030
    ctx->pc = 0x161734u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161738: 0xdfb20020
    ctx->pc = 0x161738u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16173c: 0xdfb10010
    ctx->pc = 0x16173cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161740: 0xdfb00000
    ctx->pc = 0x161740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161744: 0x3e00008
    ctx->pc = 0x161744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161748u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161690u: goto label_161690;
            case 0x1616B0u: goto label_1616b0;
            case 0x1616DCu: goto label_1616dc;
            case 0x1616F0u: goto label_1616f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16174Cu;
}
