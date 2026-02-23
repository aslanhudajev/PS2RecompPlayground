#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _sliceA0
// Address: 0x160558 - 0x16067c
void _sliceA0_0x160558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_sliceA0");


    ctx->pc = 0x160558u;

    // 0x160558: 0x27bdff90
    ctx->pc = 0x160558u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x16055c: 0xffb40040
    ctx->pc = 0x16055cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x160560: 0xffb50050
    ctx->pc = 0x160560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x160564: 0x3c140023
    ctx->pc = 0x160564u;
    SET_GPR_U32(ctx, 20, ((uint32_t)35 << 16));
    // 0x160568: 0xffb30030
    ctx->pc = 0x160568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x16056c: 0xa0a82d
    ctx->pc = 0x16056cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160570: 0xffb00000
    ctx->pc = 0x160570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x160574: 0xc0982d
    ctx->pc = 0x160574u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160578: 0xffb10010
    ctx->pc = 0x160578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x16057c: 0xe0802d
    ctx->pc = 0x16057cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160580: 0xffbf0060
    ctx->pc = 0x160580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x160584: 0xffb20020
    ctx->pc = 0x160584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x160588: 0xc05862e
    ctx->pc = 0x160588u;
    SET_GPR_U32(ctx, 31, 0x160590u);
    ctx->pc = 0x16058Cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294943560), GPR_U32(ctx, 0));
    ctx->pc = 0x1618B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextStartCode_0x1618b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160590u; }
        else if (ctx->pc != 0x160590u) { ctx->pc = 0x160590u; }
    }
    if (ctx->pc != 0x160590u) { return; }
    ctx->pc = 0x160590u;
    // 0x160590: 0xc058540
    ctx->pc = 0x160590u;
    SET_GPR_U32(ctx, 31, 0x160598u);
    ctx->pc = 0x160594u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x161500u;
    {
        const uint32_t __entryPc = ctx->pc;
        _peepBit_0x161500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160598u; }
        else if (ctx->pc != 0x160598u) { ctx->pc = 0x160598u; }
    }
    if (ctx->pc != 0x160598u) { return; }
    ctx->pc = 0x160598u;
    // 0x160598: 0x40882d
    ctx->pc = 0x160598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16059c: 0x2622feff
    ctx->pc = 0x16059cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294967039));
    // 0x1605a0: 0x2c4200af
    ctx->pc = 0x1605a0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 175));
    // 0x1605a4: 0x14400006
    ctx->pc = 0x1605A4u;
    {
        const bool branch_taken_0x1605a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1605A8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x1605a4) {
            ctx->pc = 0x1605C0u;
            goto label_1605c0;
        }
    }
    ctx->pc = 0x1605ACu;
    // 0x1605ac: 0x220282d
    ctx->pc = 0x1605acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1605b0: 0xc059106
    ctx->pc = 0x1605B0u;
    SET_GPR_U32(ctx, 31, 0x1605B8u);
    ctx->pc = 0x1605B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937552));
    ctx->pc = 0x164418u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x164418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1605B8u; }
        else if (ctx->pc != 0x1605B8u) { ctx->pc = 0x1605B8u; }
    }
    if (ctx->pc != 0x1605B8u) { return; }
    ctx->pc = 0x1605B8u;
    // 0x1605b8: 0x10000027
    ctx->pc = 0x1605B8u;
    {
        const bool branch_taken_0x1605b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1605BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1605b8) {
            ctx->pc = 0x160658u;
            goto label_160658;
        }
    }
    ctx->pc = 0x1605C0u;
label_1605c0:
    // 0x1605c0: 0xc05858e
    ctx->pc = 0x1605C0u;
    SET_GPR_U32(ctx, 31, 0x1605C8u);
    ctx->pc = 0x1605C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x161638u;
    {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x161638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1605C8u; }
        else if (ctx->pc != 0x1605C8u) { ctx->pc = 0x1605C8u; }
    }
    if (ctx->pc != 0x1605C8u) { return; }
    ctx->pc = 0x1605C8u;
    // 0x1605c8: 0xc058648
    ctx->pc = 0x1605C8u;
    SET_GPR_U32(ctx, 31, 0x1605D0u);
    ctx->pc = 0x161920u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sliceB_0x161920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1605D0u; }
        else if (ctx->pc != 0x1605D0u) { ctx->pc = 0x1605D0u; }
    }
    if (ctx->pc != 0x1605D0u) { return; }
    ctx->pc = 0x1605D0u;
    // 0x1605d0: 0xc0580c8
    ctx->pc = 0x1605D0u;
    SET_GPR_U32(ctx, 31, 0x1605D8u);
    ctx->pc = 0x1605D4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160320u;
    {
        const uint32_t __entryPc = ctx->pc;
        _mbAddressIncrement_0x160320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1605D8u; }
        else if (ctx->pc != 0x1605D8u) { ctx->pc = 0x1605D8u; }
    }
    if (ctx->pc != 0x1605D8u) { return; }
    ctx->pc = 0x1605D8u;
    // 0x1605d8: 0x40382d
    ctx->pc = 0x1605d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1605dc: 0xae670000
    ctx->pc = 0x1605dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x1605e0: 0x8e82a348
    ctx->pc = 0x1605e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294943560)));
    // 0x1605e4: 0x10400005
    ctx->pc = 0x1605E4u;
    {
        const bool branch_taken_0x1605e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1605E8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x1605e4) {
            ctx->pc = 0x1605FCu;
            goto label_1605fc;
        }
    }
    ctx->pc = 0x1605ECu;
    // 0x1605ec: 0xc059112
    ctx->pc = 0x1605ECu;
    SET_GPR_U32(ctx, 31, 0x1605F4u);
    ctx->pc = 0x1605F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937592));
    ctx->pc = 0x164448u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x164448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1605F4u; }
        else if (ctx->pc != 0x1605F4u) { ctx->pc = 0x1605F4u; }
    }
    if (ctx->pc != 0x1605F4u) { return; }
    ctx->pc = 0x1605F4u;
    // 0x1605f4: 0x10000018
    ctx->pc = 0x1605F4u;
    {
        const bool branch_taken_0x1605f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1605F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1605f4) {
            ctx->pc = 0x160658u;
            goto label_160658;
        }
    }
    ctx->pc = 0x1605FCu;
label_1605fc:
    // 0x1605fc: 0x322200ff
    ctx->pc = 0x1605fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 255));
    // 0x160600: 0x3c040023
    ctx->pc = 0x160600u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x160604: 0x1219c0
    ctx->pc = 0x160604u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 7));
    // 0x160608: 0x8c85a368
    ctx->pc = 0x160608u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 4294943592)));
    // 0x16060c: 0x621821
    ctx->pc = 0x16060cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x160610: 0x24040001
    ctx->pc = 0x160610u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x160614: 0x2463ffff
    ctx->pc = 0x160614u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x160618: 0x3c060023
    ctx->pc = 0x160618u;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
    // 0x16061c: 0x651018
    ctx->pc = 0x16061cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x160620: 0x471821
    ctx->pc = 0x160620u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x160624: 0x2463ffff
    ctx->pc = 0x160624u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x160628: 0x102d
    ctx->pc = 0x160628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16062c: 0xaea30000
    ctx->pc = 0x16062cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x160630: 0xae640000
    ctx->pc = 0x160630u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x160634: 0xacc4a47c
    ctx->pc = 0x160634u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294943868), GPR_U32(ctx, 4));
    // 0x160638: 0xae000008
    ctx->pc = 0x160638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x16063c: 0xae000014
    ctx->pc = 0x16063cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x160640: 0xae000010
    ctx->pc = 0x160640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x160644: 0xae000004
    ctx->pc = 0x160644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x160648: 0xae000000
    ctx->pc = 0x160648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x16064c: 0xae00001c
    ctx->pc = 0x16064cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x160650: 0xae000018
    ctx->pc = 0x160650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x160654: 0xae00000c
    ctx->pc = 0x160654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_160658:
    // 0x160658: 0xdfbf0060
    ctx->pc = 0x160658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16065c: 0xdfb50050
    ctx->pc = 0x16065cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x160660: 0xdfb40040
    ctx->pc = 0x160660u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x160664: 0xdfb30030
    ctx->pc = 0x160664u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x160668: 0xdfb20020
    ctx->pc = 0x160668u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16066c: 0xdfb10010
    ctx->pc = 0x16066cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160670: 0xdfb00000
    ctx->pc = 0x160670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160674: 0x3e00008
    ctx->pc = 0x160674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160678u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1605C0u: goto label_1605c0;
            case 0x1605FCu: goto label_1605fc;
            case 0x160658u: goto label_160658;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16067Cu;
}
