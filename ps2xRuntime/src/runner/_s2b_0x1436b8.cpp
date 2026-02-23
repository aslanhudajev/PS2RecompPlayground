#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _s2b
// Address: 0x1436b8 - 0x143800
void _s2b_0x1436b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_s2b");


    ctx->pc = 0x1436b8u;

    // 0x1436b8: 0x27bdff80
    ctx->pc = 0x1436b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1436bc: 0x24020009
    ctx->pc = 0x1436bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1436c0: 0xffb50050
    ctx->pc = 0x1436c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1436c4: 0xe0a82d
    ctx->pc = 0x1436c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1436c8: 0xffb60060
    ctx->pc = 0x1436c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1436cc: 0x26a30008
    ctx->pc = 0x1436ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 21), 8));
    // 0x1436d0: 0xffb40040
    ctx->pc = 0x1436d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1436d4: 0x62001a
    ctx->pc = 0x1436d4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1436d8: 0xffb30030
    ctx->pc = 0x1436d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1436dc: 0xffb00000
    ctx->pc = 0x1436dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1436e0: 0x24070001
    ctx->pc = 0x1436e0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1436e4: 0xffbf0070
    ctx->pc = 0x1436e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1436e8: 0xa0802d
    ctx->pc = 0x1436e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1436ec: 0xffb20020
    ctx->pc = 0x1436ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1436f0: 0x80a02d
    ctx->pc = 0x1436f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1436f4: 0xffb10010
    ctx->pc = 0x1436f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1436f8: 0xc0982d
    ctx->pc = 0x1436f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1436fc: 0x50400001
    ctx->pc = 0x1436FCu;
    {
        const bool branch_taken_0x1436fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1436fc) {
            ctx->pc = 0x143700u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x143704u;
            goto label_143704;
        }
    }
    ctx->pc = 0x143704u;
label_143704:
    // 0x143704: 0x100b02d
    ctx->pc = 0x143704u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143708: 0x1812
    ctx->pc = 0x143708u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x14370c: 0xe3102a
    ctx->pc = 0x14370cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 3)));
    // 0x143710: 0x1040000c
    ctx->pc = 0x143710u;
    {
        const bool branch_taken_0x143710 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x143714u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x143710) {
            ctx->pc = 0x143744u;
            goto label_143744;
        }
    }
    ctx->pc = 0x143718u;
    // 0x143718: 0x2a72000a
    ctx->pc = 0x143718u;
    SET_GPR_U32(ctx, 18, SLT32(GPR_S32(ctx, 19), 10));
    // 0x14371c: 0x0
    ctx->pc = 0x14371cu;
    // NOP
label_143720:
    // 0x143720: 0x73840
    ctx->pc = 0x143720u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 1));
    // 0x143724: 0x24a50001
    ctx->pc = 0x143724u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x143728: 0xe3102a
    ctx->pc = 0x143728u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 3)));
    // 0x14372c: 0x0
    ctx->pc = 0x14372cu;
    // NOP
    // 0x143730: 0x0
    ctx->pc = 0x143730u;
    // NOP
    // 0x143734: 0x1440fffa
    ctx->pc = 0x143734u;
    {
        const bool branch_taken_0x143734 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x143734) {
            ctx->pc = 0x143720u;
            goto label_143720;
        }
    }
    ctx->pc = 0x14373Cu;
    // 0x14373c: 0x10000003
    ctx->pc = 0x14373Cu;
    {
        const bool branch_taken_0x14373c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x143740u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14373c) {
            ctx->pc = 0x14374Cu;
            goto label_14374c;
        }
    }
    ctx->pc = 0x143744u;
label_143744:
    // 0x143744: 0x2a72000a
    ctx->pc = 0x143744u;
    SET_GPR_U32(ctx, 18, SLT32(GPR_S32(ctx, 19), 10));
    // 0x143748: 0x280202d
    ctx->pc = 0x143748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14374c:
    // 0x14374c: 0xc050d32
    ctx->pc = 0x14374Cu;
    SET_GPR_U32(ctx, 31, 0x143754u);
    ctx->pc = 0x143750u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x1434C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x1434c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143754u; }
        else if (ctx->pc != 0x143754u) { ctx->pc = 0x143754u; }
    }
    if (ctx->pc != 0x143754u) { return; }
    ctx->pc = 0x143754u;
    // 0x143754: 0x40282d
    ctx->pc = 0x143754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143758: 0x24020001
    ctx->pc = 0x143758u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x14375c: 0xacb60014
    ctx->pc = 0x14375cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 22));
    // 0x143760: 0x1640000f
    ctx->pc = 0x143760u;
    {
        const bool branch_taken_0x143760 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x143764u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x143760) {
            ctx->pc = 0x1437A0u;
            goto label_1437a0;
        }
    }
    ctx->pc = 0x143768u;
    // 0x143768: 0x26100009
    ctx->pc = 0x143768u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 9));
    // 0x14376c: 0x82070000
    ctx->pc = 0x14376cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_143770:
    // 0x143770: 0x280202d
    ctx->pc = 0x143770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143774: 0x2406000a
    ctx->pc = 0x143774u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    // 0x143778: 0x26310001
    ctx->pc = 0x143778u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x14377c: 0x24e7ffd0
    ctx->pc = 0x14377cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x143780: 0xc050d68
    ctx->pc = 0x143780u;
    SET_GPR_U32(ctx, 31, 0x143788u);
    ctx->pc = 0x143784u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1435A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x1435a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143788u; }
        else if (ctx->pc != 0x143788u) { ctx->pc = 0x143788u; }
    }
    if (ctx->pc != 0x143788u) { return; }
    ctx->pc = 0x143788u;
    // 0x143788: 0x40282d
    ctx->pc = 0x143788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14378c: 0x233102a
    ctx->pc = 0x14378cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 19)));
    // 0x143790: 0x5440fff7
    ctx->pc = 0x143790u;
    {
        const bool branch_taken_0x143790 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x143790) {
            ctx->pc = 0x143794u;
            SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x143770u;
            goto label_143770;
        }
    }
    ctx->pc = 0x143798u;
    // 0x143798: 0x10000002
    ctx->pc = 0x143798u;
    {
        const bool branch_taken_0x143798 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14379Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x143798) {
            ctx->pc = 0x1437A4u;
            goto label_1437a4;
        }
    }
    ctx->pc = 0x1437A0u;
label_1437a0:
    // 0x1437a0: 0x2610000a
    ctx->pc = 0x1437a0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 10));
label_1437a4:
    // 0x1437a4: 0x235102a
    ctx->pc = 0x1437a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 21)));
    // 0x1437a8: 0x1040000a
    ctx->pc = 0x1437A8u;
    {
        const bool branch_taken_0x1437a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1437ACu;
        SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        if (branch_taken_0x1437a8) {
            ctx->pc = 0x1437D4u;
            goto label_1437d4;
        }
    }
    ctx->pc = 0x1437B0u;
label_1437b0:
    // 0x1437b0: 0x82070000
    ctx->pc = 0x1437b0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1437b4: 0x280202d
    ctx->pc = 0x1437b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437b8: 0x2406000a
    ctx->pc = 0x1437b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1437bc: 0x26100001
    ctx->pc = 0x1437bcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1437c0: 0x24e7ffd0
    ctx->pc = 0x1437c0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x1437c4: 0xc050d68
    ctx->pc = 0x1437C4u;
    SET_GPR_U32(ctx, 31, 0x1437CCu);
    ctx->pc = 0x1437C8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->pc = 0x1435A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x1435a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1437CCu; }
        else if (ctx->pc != 0x1437CCu) { ctx->pc = 0x1437CCu; }
    }
    if (ctx->pc != 0x1437CCu) { return; }
    ctx->pc = 0x1437CCu;
    // 0x1437cc: 0x1620fff8
    ctx->pc = 0x1437CCu;
    {
        const bool branch_taken_0x1437cc = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x1437D0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1437cc) {
            ctx->pc = 0x1437B0u;
            goto label_1437b0;
        }
    }
    ctx->pc = 0x1437D4u;
label_1437d4:
    // 0x1437d4: 0xdfbf0070
    ctx->pc = 0x1437d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1437d8: 0xa0102d
    ctx->pc = 0x1437d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437dc: 0xdfb60060
    ctx->pc = 0x1437dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1437e0: 0xdfb50050
    ctx->pc = 0x1437e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1437e4: 0xdfb40040
    ctx->pc = 0x1437e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1437e8: 0xdfb30030
    ctx->pc = 0x1437e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1437ec: 0xdfb20020
    ctx->pc = 0x1437ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1437f0: 0xdfb10010
    ctx->pc = 0x1437f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1437f4: 0xdfb00000
    ctx->pc = 0x1437f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1437f8: 0x3e00008
    ctx->pc = 0x1437F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1437FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143704u: goto label_143704;
            case 0x143720u: goto label_143720;
            case 0x143744u: goto label_143744;
            case 0x14374Cu: goto label_14374c;
            case 0x143770u: goto label_143770;
            case 0x1437A0u: goto label_1437a0;
            case 0x1437A4u: goto label_1437a4;
            case 0x1437B0u: goto label_1437b0;
            case 0x1437D4u: goto label_1437d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x143800u;
}
