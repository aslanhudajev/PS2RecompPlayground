#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: backpollCheck
// Address: 0x2076b8 - 0x207944
void backpollCheck_0x2076b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2076b8u;

    // 0x2076b8: 0x27bdffd0
    ctx->pc = 0x2076b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2076bc: 0xffbf0020
    ctx->pc = 0x2076bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2076c0: 0xffbe0010
    ctx->pc = 0x2076c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x2076c4: 0x3a0f02d
    ctx->pc = 0x2076c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2076c8: 0x3c02003c
    ctx->pc = 0x2076c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2076cc: 0x8c42c4e8
    ctx->pc = 0x2076ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952168)));
    // 0x2076d0: 0x10400021
    ctx->pc = 0x2076D0u;
    {
        const bool branch_taken_0x2076d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2076d0) {
            ctx->pc = 0x207758u;
            goto label_207758;
        }
    }
    ctx->pc = 0x2076D8u;
    // 0x2076d8: 0x27c20004
    ctx->pc = 0x2076d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 4));
    // 0x2076dc: 0x24040001
    ctx->pc = 0x2076dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2076e0: 0x3c0282d
    ctx->pc = 0x2076e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2076e4: 0x40302d
    ctx->pc = 0x2076e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2076e8: 0xc0b9a14
    ctx->pc = 0x2076E8u;
    SET_GPR_U32(ctx, 31, 0x2076F0u);
    ctx->pc = 0x2E6850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x2e6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2076F0u; }
    }
    if (ctx->pc != 0x2076F0u) { return; }
    ctx->pc = 0x2076F0u;
    // 0x2076f0: 0x14400003
    ctx->pc = 0x2076F0u;
    {
        const bool branch_taken_0x2076f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2076f0) {
            ctx->pc = 0x207700u;
            goto label_207700;
        }
    }
    ctx->pc = 0x2076F8u;
    // 0x2076f8: 0x1000008c
    ctx->pc = 0x2076F8u;
    {
        const bool branch_taken_0x2076f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2076f8) {
            ctx->pc = 0x20792Cu;
            goto label_20792c;
        }
    }
    ctx->pc = 0x207700u;
label_207700:
    // 0x207700: 0x8fc20004
    ctx->pc = 0x207700u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x207704: 0x10400010
    ctx->pc = 0x207704u;
    {
        const bool branch_taken_0x207704 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x207704) {
            ctx->pc = 0x207748u;
            goto label_207748;
        }
    }
    ctx->pc = 0x20770Cu;
    // 0x20770c: 0x3c04003c
    ctx->pc = 0x20770cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x207710: 0x8c84c4ec
    ctx->pc = 0x207710u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4294952172)));
    // 0x207714: 0x3c05003c
    ctx->pc = 0x207714u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x207718: 0x8ca5c4f0
    ctx->pc = 0x207718u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4294952176)));
    // 0x20771c: 0x8fc60004
    ctx->pc = 0x20771cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x207720: 0x3c07003c
    ctx->pc = 0x207720u;
    SET_GPR_U32(ctx, 7, ((uint32_t)60 << 16));
    // 0x207724: 0x8ce7c118
    ctx->pc = 0x207724u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 4294951192)));
    // 0x207728: 0x3c08003c
    ctx->pc = 0x207728u;
    SET_GPR_U32(ctx, 8, ((uint32_t)60 << 16));
    // 0x20772c: 0x8d08c11c
    ctx->pc = 0x20772cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 8), 4294951196)));
    // 0x207730: 0xc081d36
    ctx->pc = 0x207730u;
    SET_GPR_U32(ctx, 31, 0x207738u);
    ctx->pc = 0x2074D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        updateCardState_0x2074d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207738u; }
    }
    if (ctx->pc != 0x207738u) { return; }
    ctx->pc = 0x207738u;
    // 0x207738: 0x3c01003c
    ctx->pc = 0x207738u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x20773c: 0xac20c4e8
    ctx->pc = 0x20773cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952168), GPR_U32(ctx, 0));
    // 0x207740: 0x10000003
    ctx->pc = 0x207740u;
    {
        const bool branch_taken_0x207740 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x207740) {
            ctx->pc = 0x207750u;
            goto label_207750;
        }
    }
    ctx->pc = 0x207748u;
label_207748:
    // 0x207748: 0x3c01003c
    ctx->pc = 0x207748u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x20774c: 0xac20c4e8
    ctx->pc = 0x20774cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952168), GPR_U32(ctx, 0));
label_207750:
    // 0x207750: 0x10000076
    ctx->pc = 0x207750u;
    {
        const bool branch_taken_0x207750 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x207750) {
            ctx->pc = 0x20792Cu;
            goto label_20792c;
        }
    }
    ctx->pc = 0x207758u;
label_207758:
    // 0x207758: 0x3c02003c
    ctx->pc = 0x207758u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x20775c: 0x8c42c4f0
    ctx->pc = 0x20775cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952176)));
    // 0x207760: 0x24430001
    ctx->pc = 0x207760u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x207764: 0x3c01003c
    ctx->pc = 0x207764u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x207768: 0xac23c4f0
    ctx->pc = 0x207768u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952176), GPR_U32(ctx, 3));
    // 0x20776c: 0x3c02003c
    ctx->pc = 0x20776cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x207770: 0x8c42c4f0
    ctx->pc = 0x207770u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952176)));
    // 0x207774: 0x28430004
    ctx->pc = 0x207774u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 4));
    // 0x207778: 0x1460000f
    ctx->pc = 0x207778u;
    {
        const bool branch_taken_0x207778 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x207778) {
            ctx->pc = 0x2077B8u;
            goto label_2077b8;
        }
    }
    ctx->pc = 0x207780u;
    // 0x207780: 0x3c01003c
    ctx->pc = 0x207780u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x207784: 0xac20c4f0
    ctx->pc = 0x207784u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952176), GPR_U32(ctx, 0));
    // 0x207788: 0x3c02003c
    ctx->pc = 0x207788u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x20778c: 0x8c42c4ec
    ctx->pc = 0x20778cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952172)));
    // 0x207790: 0x24430001
    ctx->pc = 0x207790u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x207794: 0x3c01003c
    ctx->pc = 0x207794u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x207798: 0xac23c4ec
    ctx->pc = 0x207798u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952172), GPR_U32(ctx, 3));
    // 0x20779c: 0x3c02003c
    ctx->pc = 0x20779cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2077a0: 0x8c42c4ec
    ctx->pc = 0x2077a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952172)));
    // 0x2077a4: 0x28430002
    ctx->pc = 0x2077a4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 2));
    // 0x2077a8: 0x14600003
    ctx->pc = 0x2077A8u;
    {
        const bool branch_taken_0x2077a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2077a8) {
            ctx->pc = 0x2077B8u;
            goto label_2077b8;
        }
    }
    ctx->pc = 0x2077B0u;
    // 0x2077b0: 0x3c01003c
    ctx->pc = 0x2077b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x2077b4: 0xac20c4ec
    ctx->pc = 0x2077b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952172), GPR_U32(ctx, 0));
label_2077b8:
    // 0x2077b8: 0x3c02003c
    ctx->pc = 0x2077b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2077bc: 0x8c42c4f0
    ctx->pc = 0x2077bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952176)));
    // 0x2077c0: 0x10400038
    ctx->pc = 0x2077C0u;
    {
        const bool branch_taken_0x2077c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2077c0) {
            ctx->pc = 0x2078A4u;
            goto label_2078a4;
        }
    }
    ctx->pc = 0x2077C8u;
    // 0x2077c8: 0x3c02003c
    ctx->pc = 0x2077c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2077cc: 0x8c42c4ec
    ctx->pc = 0x2077ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952172)));
    // 0x2077d0: 0x40182d
    ctx->pc = 0x2077d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2077d4: 0x31080
    ctx->pc = 0x2077d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2077d8: 0x3c030031
    ctx->pc = 0x2077d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2077dc: 0x24631c88
    ctx->pc = 0x2077dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7304));
    // 0x2077e0: 0x621021
    ctx->pc = 0x2077e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2077e4: 0x8c430000
    ctx->pc = 0x2077e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2077e8: 0x24020002
    ctx->pc = 0x2077e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2077ec: 0x1062002d
    ctx->pc = 0x2077ECu;
    {
        const bool branch_taken_0x2077ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2077ec) {
            ctx->pc = 0x2078A4u;
            goto label_2078a4;
        }
    }
    ctx->pc = 0x2077F4u;
    // 0x2077f4: 0x3c02003c
    ctx->pc = 0x2077f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2077f8: 0x8c42c4f0
    ctx->pc = 0x2077f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952176)));
    // 0x2077fc: 0x40182d
    ctx->pc = 0x2077fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207800: 0x31080
    ctx->pc = 0x207800u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x207804: 0x3c03003c
    ctx->pc = 0x207804u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x207808: 0x8c63c4ec
    ctx->pc = 0x207808u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294952172)));
    // 0x20780c: 0x60202d
    ctx->pc = 0x20780cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207810: 0x41900
    ctx->pc = 0x207810u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x207814: 0x431021
    ctx->pc = 0x207814u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207818: 0x3c030031
    ctx->pc = 0x207818u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x20781c: 0x24632280
    ctx->pc = 0x20781cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8832));
    // 0x207820: 0x621021
    ctx->pc = 0x207820u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207824: 0xac400000
    ctx->pc = 0x207824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x207828: 0x3c02003c
    ctx->pc = 0x207828u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x20782c: 0x8c42c4f0
    ctx->pc = 0x20782cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952176)));
    // 0x207830: 0x40182d
    ctx->pc = 0x207830u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207834: 0x31080
    ctx->pc = 0x207834u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x207838: 0x3c03003c
    ctx->pc = 0x207838u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x20783c: 0x8c63c4ec
    ctx->pc = 0x20783cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294952172)));
    // 0x207840: 0x60202d
    ctx->pc = 0x207840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207844: 0x41900
    ctx->pc = 0x207844u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x207848: 0x431021
    ctx->pc = 0x207848u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20784c: 0x3c030031
    ctx->pc = 0x20784cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x207850: 0x246322a0
    ctx->pc = 0x207850u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8864));
    // 0x207854: 0x621021
    ctx->pc = 0x207854u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207858: 0xac400000
    ctx->pc = 0x207858u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x20785c: 0x3c02003c
    ctx->pc = 0x20785cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x207860: 0x8c42c4f0
    ctx->pc = 0x207860u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952176)));
    // 0x207864: 0x40182d
    ctx->pc = 0x207864u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207868: 0x31080
    ctx->pc = 0x207868u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x20786c: 0x3c03003c
    ctx->pc = 0x20786cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x207870: 0x8c63c4ec
    ctx->pc = 0x207870u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294952172)));
    // 0x207874: 0x60202d
    ctx->pc = 0x207874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207878: 0x41900
    ctx->pc = 0x207878u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x20787c: 0x431021
    ctx->pc = 0x20787cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207880: 0x3c030031
    ctx->pc = 0x207880u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x207884: 0x246322c0
    ctx->pc = 0x207884u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8896));
    // 0x207888: 0x621021
    ctx->pc = 0x207888u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20788c: 0x2403ffff
    ctx->pc = 0x20788cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207890: 0xac430000
    ctx->pc = 0x207890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x207894: 0x3c01003c
    ctx->pc = 0x207894u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x207898: 0xac20c4e8
    ctx->pc = 0x207898u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952168), GPR_U32(ctx, 0));
    // 0x20789c: 0x10000023
    ctx->pc = 0x20789Cu;
    {
        const bool branch_taken_0x20789c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20789c) {
            ctx->pc = 0x20792Cu;
            goto label_20792c;
        }
    }
    ctx->pc = 0x2078A4u;
label_2078a4:
    // 0x2078a4: 0x3c04003c
    ctx->pc = 0x2078a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2078a8: 0x8c84c4ec
    ctx->pc = 0x2078a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4294952172)));
    // 0x2078ac: 0x3c05003c
    ctx->pc = 0x2078acu;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x2078b0: 0x8ca5c4f0
    ctx->pc = 0x2078b0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4294952176)));
    // 0x2078b4: 0x3c06003c
    ctx->pc = 0x2078b4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)60 << 16));
    // 0x2078b8: 0x24c6c118
    ctx->pc = 0x2078b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294951192));
    // 0x2078bc: 0x382d
    ctx->pc = 0x2078bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2078c0: 0x3c08003c
    ctx->pc = 0x2078c0u;
    SET_GPR_U32(ctx, 8, ((uint32_t)60 << 16));
    // 0x2078c4: 0x2508c11c
    ctx->pc = 0x2078c4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294951196));
    // 0x2078c8: 0xc0b9a64
    ctx->pc = 0x2078C8u;
    SET_GPR_U32(ctx, 31, 0x2078D0u);
    ctx->pc = 0x2E6990u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcGetInfo_0x2e6990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2078D0u; }
    }
    if (ctx->pc != 0x2078D0u) { return; }
    ctx->pc = 0x2078D0u;
    // 0x2078d0: 0xafc20008
    ctx->pc = 0x2078d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x2078d4: 0x8fc20008
    ctx->pc = 0x2078d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2078d8: 0x4410007
    ctx->pc = 0x2078D8u;
    {
        const bool branch_taken_0x2078d8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2078d8) {
            ctx->pc = 0x2078F8u;
            goto label_2078f8;
        }
    }
    ctx->pc = 0x2078E0u;
    // 0x2078e0: 0x3c04003a
    ctx->pc = 0x2078e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2078e4: 0x24844bc8
    ctx->pc = 0x2078e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19400));
    // 0x2078e8: 0xc0b4a34
    ctx->pc = 0x2078E8u;
    SET_GPR_U32(ctx, 31, 0x2078F0u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2078F0u; }
    }
    if (ctx->pc != 0x2078F0u) { return; }
    ctx->pc = 0x2078F0u;
    // 0x2078f0: 0x1000000e
    ctx->pc = 0x2078F0u;
    {
        const bool branch_taken_0x2078f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2078f0) {
            ctx->pc = 0x20792Cu;
            goto label_20792c;
        }
    }
    ctx->pc = 0x2078F8u;
label_2078f8:
    // 0x2078f8: 0x8fc20008
    ctx->pc = 0x2078f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2078fc: 0x14400006
    ctx->pc = 0x2078FCu;
    {
        const bool branch_taken_0x2078fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2078fc) {
            ctx->pc = 0x207918u;
            goto label_207918;
        }
    }
    ctx->pc = 0x207904u;
    // 0x207904: 0x24020001
    ctx->pc = 0x207904u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x207908: 0x3c01003c
    ctx->pc = 0x207908u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x20790c: 0xac22c4e8
    ctx->pc = 0x20790cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952168), GPR_U32(ctx, 2));
    // 0x207910: 0x10000006
    ctx->pc = 0x207910u;
    {
        const bool branch_taken_0x207910 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x207910) {
            ctx->pc = 0x20792Cu;
            goto label_20792c;
        }
    }
    ctx->pc = 0x207918u;
label_207918:
    // 0x207918: 0x3c02003c
    ctx->pc = 0x207918u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x20791c: 0x8c42c4f0
    ctx->pc = 0x20791cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952176)));
    // 0x207920: 0x2443ffff
    ctx->pc = 0x207920u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x207924: 0x3c01003c
    ctx->pc = 0x207924u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x207928: 0xac23c4f0
    ctx->pc = 0x207928u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952176), GPR_U32(ctx, 3));
label_20792c:
    // 0x20792c: 0x3c0e82d
    ctx->pc = 0x20792cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207930: 0xdfbf0020
    ctx->pc = 0x207930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207934: 0xdfbe0010
    ctx->pc = 0x207934u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207938: 0x27bd0030
    ctx->pc = 0x207938u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x20793c: 0x3e00008
    ctx->pc = 0x20793Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207700u: goto label_207700;
            case 0x207748u: goto label_207748;
            case 0x207750u: goto label_207750;
            case 0x207758u: goto label_207758;
            case 0x2077B8u: goto label_2077b8;
            case 0x2078A4u: goto label_2078a4;
            case 0x2078F8u: goto label_2078f8;
            case 0x207918u: goto label_207918;
            case 0x20792Cu: goto label_20792c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x207944u;
}
