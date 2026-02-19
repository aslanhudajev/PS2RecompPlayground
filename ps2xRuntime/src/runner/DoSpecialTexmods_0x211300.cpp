#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoSpecialTexmods
// Address: 0x211300 - 0x2113f8
void DoSpecialTexmods_0x211300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x211300u;

    // 0x211300: 0x27bdff80
    ctx->pc = 0x211300u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x211304: 0xffbf0070
    ctx->pc = 0x211304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x211308: 0xffb60060
    ctx->pc = 0x211308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x21130c: 0xffb50050
    ctx->pc = 0x21130cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x211310: 0xffb40040
    ctx->pc = 0x211310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x211314: 0xffb30030
    ctx->pc = 0x211314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x211318: 0xffb20020
    ctx->pc = 0x211318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21131c: 0xffb10010
    ctx->pc = 0x21131cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x211320: 0xffb00000
    ctx->pc = 0x211320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211324: 0x3c02003c
    ctx->pc = 0x211324u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x211328: 0x8c42c9a8
    ctx->pc = 0x211328u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294953384)));
    // 0x21132c: 0x18400028
    ctx->pc = 0x21132Cu;
    {
        const bool branch_taken_0x21132c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x211330u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21132c) {
            ctx->pc = 0x2113D0u;
            goto label_2113d0;
        }
    }
    ctx->pc = 0x211334u;
    // 0x211334: 0x24160058
    ctx->pc = 0x211334u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 88));
    // 0x211338: 0x3c02003c
    ctx->pc = 0x211338u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21133c: 0x2455c9b0
    ctx->pc = 0x21133cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294953392));
    // 0x211340: 0x3c140031
    ctx->pc = 0x211340u;
    SET_GPR_U32(ctx, 20, ((uint32_t)49 << 16));
    // 0x211344: 0x3c13003c
    ctx->pc = 0x211344u;
    SET_GPR_U32(ctx, 19, ((uint32_t)60 << 16));
    // 0x211348: 0x2561018
    ctx->pc = 0x211348u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21134c: 0x0
    ctx->pc = 0x21134cu;
    // NOP
label_211350:
    // 0x211350: 0x558021
    ctx->pc = 0x211350u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x211354: 0x8e030050
    ctx->pc = 0x211354u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x211358: 0x18600007
    ctx->pc = 0x211358u;
    {
        const bool branch_taken_0x211358 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x21135Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294967224)));
        if (branch_taken_0x211358) {
            ctx->pc = 0x211378u;
            goto label_211378;
        }
    }
    ctx->pc = 0x211360u;
    // 0x211360: 0x43001b
    ctx->pc = 0x211360u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 2) / divisor; ctx->hi = GPR_U32(ctx, 3) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,2); } }
    // 0x211364: 0x1010
    ctx->pc = 0x211364u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x211368: 0x50600001
    ctx->pc = 0x211368u;
    {
        const bool branch_taken_0x211368 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x211368) {
            ctx->pc = 0x21136Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x211370u;
            goto label_211370;
        }
    }
    ctx->pc = 0x211370u;
label_211370:
    // 0x211370: 0x54400013
    ctx->pc = 0x211370u;
    {
        const bool branch_taken_0x211370 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x211370) {
            ctx->pc = 0x211374u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x2113C0u;
            goto label_2113c0;
        }
    }
    ctx->pc = 0x211378u;
label_211378:
    // 0x211378: 0x8e110044
    ctx->pc = 0x211378u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x21137c: 0x6220009
    ctx->pc = 0x21137Cu;
    {
        const bool branch_taken_0x21137c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x21137c) {
            ctx->pc = 0x211380u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->pc = 0x2113A4u;
            goto label_2113a4;
        }
    }
    ctx->pc = 0x211384u;
    // 0x211384: 0x8e020048
    ctx->pc = 0x211384u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x211388: 0x8e040054
    ctx->pc = 0x211388u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x21138c: 0xc0b3da0
    ctx->pc = 0x21138Cu;
    SET_GPR_U32(ctx, 31, 0x211394u);
    ctx->pc = 0x211390u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x2CF680u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRomTexPtr_0x2cf680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211394u; }
    }
    if (ctx->pc != 0x211394u) { return; }
    ctx->pc = 0x211394u;
    // 0x211394: 0x220202d
    ctx->pc = 0x211394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211398: 0xc0b3de4
    ctx->pc = 0x211398u;
    SET_GPR_U32(ctx, 31, 0x2113A0u);
    ctx->pc = 0x21139Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CF790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetRomTexture_0x2cf790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2113A0u; }
    }
    if (ctx->pc != 0x2113A0u) { return; }
    ctx->pc = 0x2113A0u;
    // 0x2113a0: 0x8e020054
    ctx->pc = 0x2113a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2113a4:
    // 0x2113a4: 0x24420001
    ctx->pc = 0x2113a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2113a8: 0xae020054
    ctx->pc = 0x2113a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x2113ac: 0x8603004c
    ctx->pc = 0x2113acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2113b0: 0x43102a
    ctx->pc = 0x2113b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x2113b4: 0x50400001
    ctx->pc = 0x2113B4u;
    {
        const bool branch_taken_0x2113b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2113b4) {
            ctx->pc = 0x2113B8u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
            ctx->pc = 0x2113BCu;
            goto label_2113bc;
        }
    }
    ctx->pc = 0x2113BCu;
label_2113bc:
    // 0x2113bc: 0x26520001
    ctx->pc = 0x2113bcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_2113c0:
    // 0x2113c0: 0x8e62c9a8
    ctx->pc = 0x2113c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294953384)));
    // 0x2113c4: 0x242102a
    ctx->pc = 0x2113c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x2113c8: 0x1440ffe1
    ctx->pc = 0x2113C8u;
    {
        const bool branch_taken_0x2113c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2113CCu;
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2113c8) {
            ctx->pc = 0x211350u;
            goto label_211350;
        }
    }
    ctx->pc = 0x2113D0u;
label_2113d0:
    // 0x2113d0: 0xdfbf0070
    ctx->pc = 0x2113d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2113d4: 0xdfb60060
    ctx->pc = 0x2113d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2113d8: 0xdfb50050
    ctx->pc = 0x2113d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2113dc: 0xdfb40040
    ctx->pc = 0x2113dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2113e0: 0xdfb30030
    ctx->pc = 0x2113e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2113e4: 0xdfb20020
    ctx->pc = 0x2113e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2113e8: 0xdfb10010
    ctx->pc = 0x2113e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2113ec: 0xdfb00000
    ctx->pc = 0x2113ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2113f0: 0x3e00008
    ctx->pc = 0x2113F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2113F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x211350u: goto label_211350;
            case 0x211370u: goto label_211370;
            case 0x211378u: goto label_211378;
            case 0x2113A4u: goto label_2113a4;
            case 0x2113BCu: goto label_2113bc;
            case 0x2113C0u: goto label_2113c0;
            case 0x2113D0u: goto label_2113d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2113F8u;
}
