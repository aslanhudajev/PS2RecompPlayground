#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sequenceExtension
// Address: 0x2ef0f0 - 0x2ef254
void _sequenceExtension_0x2ef0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ef0f0u;

    // 0x2ef0f0: 0x27bdffa0
    ctx->pc = 0x2ef0f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ef0f4: 0x3c02003a
    ctx->pc = 0x2ef0f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2ef0f8: 0xffb00000
    ctx->pc = 0x2ef0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ef0fc: 0x202d
    ctx->pc = 0x2ef0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef100: 0x24100001
    ctx->pc = 0x2ef100u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef104: 0xffb40040
    ctx->pc = 0x2ef104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ef108: 0xffb30030
    ctx->pc = 0x2ef108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ef10c: 0xffb20020
    ctx->pc = 0x2ef10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ef110: 0xffb10010
    ctx->pc = 0x2ef110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ef114: 0xffbf0050
    ctx->pc = 0x2ef114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2ef118: 0xc0bc432
    ctx->pc = 0x2EF118u;
    SET_GPR_U32(ctx, 31, 0x2EF120u);
    ctx->pc = 0x2EF11Cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14576), GPR_U32(ctx, 16));
    ctx->pc = 0x2F10C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _ipuSetMPEG1_0x2f10c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF120u; }
    }
    if (ctx->pc != 0x2EF120u) { return; }
    ctx->pc = 0x2EF120u;
    // 0x2ef120: 0xc0bca32
    ctx->pc = 0x2EF120u;
    SET_GPR_U32(ctx, 31, 0x2EF128u);
    ctx->pc = 0x2EF124u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 28));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF128u; }
    }
    if (ctx->pc != 0x2EF128u) { return; }
    ctx->pc = 0x2EF128u;
    // 0x2ef128: 0x40882d
    ctx->pc = 0x2ef128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef12c: 0x3c05003a
    ctx->pc = 0x2ef12cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2ef130: 0x111842
    ctx->pc = 0x2ef130u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 17), 1));
    // 0x2ef134: 0x111442
    ctx->pc = 0x2ef134u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 17), 17));
    // 0x2ef138: 0x30740fff
    ctx->pc = 0x2ef138u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 3), 4095));
    // 0x2ef13c: 0x30420003
    ctx->pc = 0x2ef13cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
    // 0x2ef140: 0x112342
    ctx->pc = 0x2ef140u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 17), 13));
    // 0x2ef144: 0x111bc2
    ctx->pc = 0x2ef144u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 17), 15));
    // 0x2ef148: 0x30930003
    ctx->pc = 0x2ef148u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 4), 3));
    // 0x2ef14c: 0x30720003
    ctx->pc = 0x2ef14cu;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 3), 3));
    // 0x2ef150: 0x10500004
    ctx->pc = 0x2EF150u;
    {
        const bool branch_taken_0x2ef150 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        ctx->pc = 0x2EF154u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 12684), GPR_U32(ctx, 2));
        if (branch_taken_0x2ef150) {
            ctx->pc = 0x2EF164u;
            goto label_2ef164;
        }
    }
    ctx->pc = 0x2EF158u;
    // 0x2ef158: 0x3c04003c
    ctx->pc = 0x2ef158u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2ef15c: 0xc0bba56
    ctx->pc = 0x2EF15Cu;
    SET_GPR_U32(ctx, 31, 0x2EF164u);
    ctx->pc = 0x2EF160u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942176));
    ctx->pc = 0x2EE958u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x2ee958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF164u; }
    }
    if (ctx->pc != 0x2EF164u) { return; }
    ctx->pc = 0x2EF164u;
label_2ef164:
    // 0x2ef164: 0x112502
    ctx->pc = 0x2ef164u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 17), 20));
    // 0x2ef168: 0x3c10003a
    ctx->pc = 0x2ef168u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2ef16c: 0x1114c2
    ctx->pc = 0x2ef16cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 17), 19));
    // 0x2ef170: 0xae043184
    ctx->pc = 0x2ef170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12676), GPR_U32(ctx, 4));
    // 0x2ef174: 0x30420001
    ctx->pc = 0x2ef174u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2ef178: 0x3c03003a
    ctx->pc = 0x2ef178u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2ef17c: 0xac623188
    ctx->pc = 0x2ef17cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12680), GPR_U32(ctx, 2));
    // 0x2ef180: 0xc0bca32
    ctx->pc = 0x2EF180u;
    SET_GPR_U32(ctx, 31, 0x2EF188u);
    ctx->pc = 0x2EF184u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF188u; }
    }
    if (ctx->pc != 0x2EF188u) { return; }
    ctx->pc = 0x2EF188u;
    // 0x2ef188: 0x40882d
    ctx->pc = 0x2ef188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef18c: 0x3c06003a
    ctx->pc = 0x2ef18cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x2ef190: 0x3222001f
    ctx->pc = 0x2ef190u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 31));
    // 0x2ef194: 0x111942
    ctx->pc = 0x2ef194u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 17), 5));
    // 0x2ef198: 0x1121c2
    ctx->pc = 0x2ef198u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 17), 7));
    // 0x2ef19c: 0x8e083184
    ctx->pc = 0x2ef19cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 12676)));
    // 0x2ef1a0: 0x30630003
    ctx->pc = 0x2ef1a0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 3));
    // 0x2ef1a4: 0x30840001
    ctx->pc = 0x2ef1a4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 1));
    // 0x2ef1a8: 0x3c05003a
    ctx->pc = 0x2ef1a8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2ef1ac: 0x3c07003a
    ctx->pc = 0x2ef1acu;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
    // 0x2ef1b0: 0xacc23198
    ctx->pc = 0x2ef1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12696), GPR_U32(ctx, 2));
    // 0x2ef1b4: 0x118202
    ctx->pc = 0x2ef1b4u;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 17), 8));
    // 0x2ef1b8: 0xaca33194
    ctx->pc = 0x2ef1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12692), GPR_U32(ctx, 3));
    // 0x2ef1bc: 0x24020048
    ctx->pc = 0x2ef1bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 72));
    // 0x2ef1c0: 0x11020006
    ctx->pc = 0x2EF1C0u;
    {
        const bool branch_taken_0x2ef1c0 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        ctx->pc = 0x2EF1C4u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 12688), GPR_U32(ctx, 4));
        if (branch_taken_0x2ef1c0) {
            ctx->pc = 0x2EF1DCu;
            goto label_2ef1dc;
        }
    }
    ctx->pc = 0x2EF1C8u;
    // 0x2ef1c8: 0x24020058
    ctx->pc = 0x2ef1c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 88));
    // 0x2ef1cc: 0x11020003
    ctx->pc = 0x2EF1CCu;
    {
        const bool branch_taken_0x2ef1cc = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        ctx->pc = 0x2EF1D0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x2ef1cc) {
            ctx->pc = 0x2EF1DCu;
            goto label_2ef1dc;
        }
    }
    ctx->pc = 0x2EF1D4u;
    // 0x2ef1d4: 0xc0bba56
    ctx->pc = 0x2EF1D4u;
    SET_GPR_U32(ctx, 31, 0x2EF1DCu);
    ctx->pc = 0x2EF1D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942216));
    ctx->pc = 0x2EE958u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x2ee958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF1DCu; }
    }
    if (ctx->pc != 0x2EF1DCu) { return; }
    ctx->pc = 0x2EF1DCu;
label_2ef1dc:
    // 0x2ef1dc: 0x3c0c003a
    ctx->pc = 0x2ef1dcu;
    SET_GPR_U32(ctx, 12, ((uint32_t)58 << 16));
    // 0x2ef1e0: 0x3c0d003a
    ctx->pc = 0x2ef1e0u;
    SET_GPR_U32(ctx, 13, ((uint32_t)58 << 16));
    // 0x2ef1e4: 0x8d853160
    ctx->pc = 0x2ef1e4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 12), 12640)));
    // 0x2ef1e8: 0x3c0b003a
    ctx->pc = 0x2ef1e8u;
    SET_GPR_U32(ctx, 11, ((uint32_t)58 << 16));
    // 0x2ef1ec: 0x8da33164
    ctx->pc = 0x2ef1ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 12644)));
    // 0x2ef1f0: 0x3c0a003a
    ctx->pc = 0x2ef1f0u;
    SET_GPR_U32(ctx, 10, ((uint32_t)58 << 16));
    // 0x2ef1f4: 0x8d673178
    ctx->pc = 0x2ef1f4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 11), 12664)));
    // 0x2ef1f8: 0x144480
    ctx->pc = 0x2ef1f8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 20), 18));
    // 0x2ef1fc: 0x8d46317c
    ctx->pc = 0x2ef1fcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 10), 12668)));
    // 0x2ef200: 0x104a80
    ctx->pc = 0x2ef200u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 16), 10));
    // 0x2ef204: 0x122300
    ctx->pc = 0x2ef204u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 18), 12));
    // 0x2ef208: 0x30a50fff
    ctx->pc = 0x2ef208u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 4095));
    // 0x2ef20c: 0x131300
    ctx->pc = 0x2ef20cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 12));
    // 0x2ef210: 0x30630fff
    ctx->pc = 0x2ef210u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 4095));
    // 0x2ef214: 0x852025
    ctx->pc = 0x2ef214u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ef218: 0x431025
    ctx->pc = 0x2ef218u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ef21c: 0xe83821
    ctx->pc = 0x2ef21cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2ef220: 0xc93021
    ctx->pc = 0x2ef220u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2ef224: 0xdfbf0050
    ctx->pc = 0x2ef224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ef228: 0xdfb40040
    ctx->pc = 0x2ef228u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ef22c: 0xdfb30030
    ctx->pc = 0x2ef22cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ef230: 0xdfb20020
    ctx->pc = 0x2ef230u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ef234: 0xdfb10010
    ctx->pc = 0x2ef234u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef238: 0xdfb00000
    ctx->pc = 0x2ef238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef23c: 0xad843160
    ctx->pc = 0x2ef23cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12640), GPR_U32(ctx, 4));
    // 0x2ef240: 0xada23164
    ctx->pc = 0x2ef240u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12644), GPR_U32(ctx, 2));
    // 0x2ef244: 0xad673178
    ctx->pc = 0x2ef244u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12664), GPR_U32(ctx, 7));
    // 0x2ef248: 0xad46317c
    ctx->pc = 0x2ef248u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12668), GPR_U32(ctx, 6));
    // 0x2ef24c: 0x3e00008
    ctx->pc = 0x2EF24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF250u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EF164u: goto label_2ef164;
            case 0x2EF1DCu: goto label_2ef1dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2EF254u;
}
