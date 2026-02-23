#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _pictureDisplayExtension
// Address: 0x162118 - 0x162208
void _pictureDisplayExtension_0x162118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_pictureDisplayExtension");


    ctx->pc = 0x162118u;

    // 0x162118: 0x3c020023
    ctx->pc = 0x162118u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x16211c: 0x27bdffa0
    ctx->pc = 0x16211cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x162120: 0x8c43a388
    ctx->pc = 0x162120u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943624)));
    // 0x162124: 0xffbf0050
    ctx->pc = 0x162124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x162128: 0xffb40040
    ctx->pc = 0x162128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x16212c: 0xffb30030
    ctx->pc = 0x16212cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x162130: 0xffb20020
    ctx->pc = 0x162130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x162134: 0xffb10010
    ctx->pc = 0x162134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x162138: 0x1060000a
    ctx->pc = 0x162138u;
    {
        const bool branch_taken_0x162138 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16213Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x162138) {
            ctx->pc = 0x162164u;
            goto label_162164;
        }
    }
    ctx->pc = 0x162140u;
    // 0x162140: 0x3c020023
    ctx->pc = 0x162140u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x162144: 0x8c43a400
    ctx->pc = 0x162144u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943744)));
    // 0x162148: 0x1060000b
    ctx->pc = 0x162148u;
    {
        const bool branch_taken_0x162148 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16214Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x162148) {
            ctx->pc = 0x162178u;
            goto label_162178;
        }
    }
    ctx->pc = 0x162150u;
    // 0x162150: 0x24120002
    ctx->pc = 0x162150u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 2));
    // 0x162154: 0x8c44a3f0
    ctx->pc = 0x162154u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943728)));
    // 0x162158: 0x24030003
    ctx->pc = 0x162158u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x16215c: 0x1000000b
    ctx->pc = 0x16215Cu;
    {
        const bool branch_taken_0x16215c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x162160u;
        if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
        if (branch_taken_0x16215c) {
            ctx->pc = 0x16218Cu;
            goto label_16218c;
        }
    }
    ctx->pc = 0x162164u;
label_162164:
    // 0x162164: 0x3c020023
    ctx->pc = 0x162164u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x162168: 0x24030003
    ctx->pc = 0x162168u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x16216c: 0x8c44a3ec
    ctx->pc = 0x16216cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943724)));
    // 0x162170: 0x10830003
    ctx->pc = 0x162170u;
    {
        const bool branch_taken_0x162170 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x162174u;
        SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
        if (branch_taken_0x162170) {
            ctx->pc = 0x162180u;
            goto label_162180;
        }
    }
    ctx->pc = 0x162178u;
label_162178:
    // 0x162178: 0x10000004
    ctx->pc = 0x162178u;
    {
        const bool branch_taken_0x162178 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16217Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x162178) {
            ctx->pc = 0x16218Cu;
            goto label_16218c;
        }
    }
    ctx->pc = 0x162180u;
label_162180:
    // 0x162180: 0x24120002
    ctx->pc = 0x162180u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 2));
    // 0x162184: 0x8c62a400
    ctx->pc = 0x162184u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294943744)));
    // 0x162188: 0x82900b
    ctx->pc = 0x162188u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 4));
label_16218c:
    // 0x16218c: 0x1a400016
    ctx->pc = 0x16218Cu;
    {
        const bool branch_taken_0x16218c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x162190u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16218c) {
            ctx->pc = 0x1621E8u;
            goto label_1621e8;
        }
    }
    ctx->pc = 0x162194u;
    // 0x162194: 0x3c140023
    ctx->pc = 0x162194u;
    SET_GPR_U32(ctx, 20, ((uint32_t)35 << 16));
    // 0x162198: 0x3c130023
    ctx->pc = 0x162198u;
    SET_GPR_U32(ctx, 19, ((uint32_t)35 << 16));
    // 0x16219c: 0x24040010
    ctx->pc = 0x16219cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
label_1621a0:
    // 0x1621a0: 0xc0585d4
    ctx->pc = 0x1621A0u;
    SET_GPR_U32(ctx, 31, 0x1621A8u);
    ctx->pc = 0x1621A4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 17), 2));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1621A8u; }
        else if (ctx->pc != 0x1621A8u) { ctx->pc = 0x1621A8u; }
    }
    if (ctx->pc != 0x1621A8u) { return; }
    ctx->pc = 0x1621A8u;
    // 0x1621a8: 0x26310001
    ctx->pc = 0x1621a8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1621ac: 0x2683a428
    ctx->pc = 0x1621acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 4294943784));
    // 0x1621b0: 0x24040001
    ctx->pc = 0x1621b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1621b4: 0x2031821
    ctx->pc = 0x1621b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1621b8: 0xc0585d4
    ctx->pc = 0x1621B8u;
    SET_GPR_U32(ctx, 31, 0x1621C0u);
    ctx->pc = 0x1621BCu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1621C0u; }
        else if (ctx->pc != 0x1621C0u) { ctx->pc = 0x1621C0u; }
    }
    if (ctx->pc != 0x1621C0u) { return; }
    ctx->pc = 0x1621C0u;
    // 0x1621c0: 0xc0585d4
    ctx->pc = 0x1621C0u;
    SET_GPR_U32(ctx, 31, 0x1621C8u);
    ctx->pc = 0x1621C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1621C8u; }
        else if (ctx->pc != 0x1621C8u) { ctx->pc = 0x1621C8u; }
    }
    if (ctx->pc != 0x1621C8u) { return; }
    ctx->pc = 0x1621C8u;
    // 0x1621c8: 0x2663a438
    ctx->pc = 0x1621c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 4294943800));
    // 0x1621cc: 0x24040001
    ctx->pc = 0x1621ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1621d0: 0x2038021
    ctx->pc = 0x1621d0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1621d4: 0xc0585d4
    ctx->pc = 0x1621D4u;
    SET_GPR_U32(ctx, 31, 0x1621DCu);
    ctx->pc = 0x1621D8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1621DCu; }
        else if (ctx->pc != 0x1621DCu) { ctx->pc = 0x1621DCu; }
    }
    if (ctx->pc != 0x1621DCu) { return; }
    ctx->pc = 0x1621DCu;
    // 0x1621dc: 0x232182a
    ctx->pc = 0x1621dcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x1621e0: 0x1460ffef
    ctx->pc = 0x1621E0u;
    {
        const bool branch_taken_0x1621e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1621E4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x1621e0) {
            ctx->pc = 0x1621A0u;
            goto label_1621a0;
        }
    }
    ctx->pc = 0x1621E8u;
label_1621e8:
    // 0x1621e8: 0xdfbf0050
    ctx->pc = 0x1621e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1621ec: 0xdfb40040
    ctx->pc = 0x1621ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1621f0: 0xdfb30030
    ctx->pc = 0x1621f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1621f4: 0xdfb20020
    ctx->pc = 0x1621f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1621f8: 0xdfb10010
    ctx->pc = 0x1621f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1621fc: 0xdfb00000
    ctx->pc = 0x1621fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162200: 0x3e00008
    ctx->pc = 0x162200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162204u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162164u: goto label_162164;
            case 0x162178u: goto label_162178;
            case 0x162180u: goto label_162180;
            case 0x16218Cu: goto label_16218c;
            case 0x1621A0u: goto label_1621a0;
            case 0x1621E8u: goto label_1621e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162208u;
}
