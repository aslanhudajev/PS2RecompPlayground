#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setup_vmu_entries
// Address: 0x286690 - 0x28686c
void setup_vmu_entries_0x286690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x286690u;

    // 0x286690: 0x27bdff60
    ctx->pc = 0x286690u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x286694: 0xffbf0090
    ctx->pc = 0x286694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x286698: 0xffbe0080
    ctx->pc = 0x286698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x28669c: 0xffb70070
    ctx->pc = 0x28669cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2866a0: 0xffb60060
    ctx->pc = 0x2866a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2866a4: 0xffb50050
    ctx->pc = 0x2866a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2866a8: 0xffb40040
    ctx->pc = 0x2866a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2866ac: 0xffb30030
    ctx->pc = 0x2866acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2866b0: 0xffb20020
    ctx->pc = 0x2866b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2866b4: 0xffb10010
    ctx->pc = 0x2866b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2866b8: 0xffb00000
    ctx->pc = 0x2866b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2866bc: 0x982d
    ctx->pc = 0x2866bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2866c0: 0x902d
    ctx->pc = 0x2866c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2866c4: 0x3c020035
    ctx->pc = 0x2866c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2866c8: 0x2457acd0
    ctx->pc = 0x2866c8u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 4294946000));
    // 0x2866cc: 0x24160024
    ctx->pc = 0x2866ccu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 36));
    // 0x2866d0: 0x802d
    ctx->pc = 0x2866d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2866d4: 0x0
    ctx->pc = 0x2866d4u;
    // NOP
label_2866d8:
    // 0x2866d8: 0x12a100
    ctx->pc = 0x2866d8u;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 18), 4));
    // 0x2866dc: 0x12a880
    ctx->pc = 0x2866dcu;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 18), 2));
    // 0x2866e0: 0x3c020031
    ctx->pc = 0x2866e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2866e4: 0x24421c80
    ctx->pc = 0x2866e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7296));
    // 0x2866e8: 0x2a2f021
    ctx->pc = 0x2866e8u;
    SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2866ec: 0x128980
    ctx->pc = 0x2866ecu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 18), 6));
    // 0x2866f0: 0x101080
    ctx->pc = 0x2866f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2866f4: 0x0
    ctx->pc = 0x2866f4u;
    // NOP
label_2866f8:
    // 0x2866f8: 0x541021
    ctx->pc = 0x2866f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2866fc: 0x3c030031
    ctx->pc = 0x2866fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x286700: 0x24632280
    ctx->pc = 0x286700u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8832));
    // 0x286704: 0x431021
    ctx->pc = 0x286704u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x286708: 0x8c420000
    ctx->pc = 0x286708u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28670c: 0x1040003d
    ctx->pc = 0x28670Cu;
    {
        const bool branch_taken_0x28670c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x286710u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x28670c) {
            ctx->pc = 0x286804u;
            goto label_286804;
        }
    }
    ctx->pc = 0x286714u;
    // 0x286714: 0x8fc20000
    ctx->pc = 0x286714u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x286718: 0x1443000d
    ctx->pc = 0x286718u;
    {
        const bool branch_taken_0x286718 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x28671Cu;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x286718) {
            ctx->pc = 0x286750u;
            goto label_286750;
        }
    }
    ctx->pc = 0x286720u;
    // 0x286720: 0x972021
    ctx->pc = 0x286720u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x286724: 0x3c05003b
    ctx->pc = 0x286724u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x286728: 0x3c030035
    ctx->pc = 0x286728u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28672c: 0x2463aac8
    ctx->pc = 0x28672cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294945480));
    // 0x286730: 0x2031021
    ctx->pc = 0x286730u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x286734: 0x2242021
    ctx->pc = 0x286734u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x286738: 0x24a5d380
    ctx->pc = 0x286738u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955904));
    // 0x28673c: 0x26460001
    ctx->pc = 0x28673cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 1));
    // 0x286740: 0xc0b6252
    ctx->pc = 0x286740u;
    SET_GPR_U32(ctx, 31, 0x286748u);
    ctx->pc = 0x286744u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286748u; }
    }
    if (ctx->pc != 0x286748u) { return; }
    ctx->pc = 0x286748u;
    // 0x286748: 0x1000000b
    ctx->pc = 0x286748u;
    {
        const bool branch_taken_0x286748 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28674Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x286748) {
            ctx->pc = 0x286778u;
            goto label_286778;
        }
    }
    ctx->pc = 0x286750u;
label_286750:
    // 0x286750: 0x5e00002d
    ctx->pc = 0x286750u;
    {
        const bool branch_taken_0x286750 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x286750) {
            ctx->pc = 0x286754u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x286808u;
            goto label_286808;
        }
    }
    ctx->pc = 0x286758u;
    // 0x286758: 0x102100
    ctx->pc = 0x286758u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 4));
    // 0x28675c: 0x972021
    ctx->pc = 0x28675cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x286760: 0x3c05003b
    ctx->pc = 0x286760u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x286764: 0x2242021
    ctx->pc = 0x286764u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x286768: 0x24a5d390
    ctx->pc = 0x286768u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955920));
    // 0x28676c: 0xc0b6252
    ctx->pc = 0x28676Cu;
    SET_GPR_U32(ctx, 31, 0x286774u);
    ctx->pc = 0x286770u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286774u; }
    }
    if (ctx->pc != 0x286774u) { return; }
    ctx->pc = 0x286774u;
    // 0x286774: 0x3c020035
    ctx->pc = 0x286774u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_286778:
    // 0x286778: 0x2445ad50
    ctx->pc = 0x286778u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294946128));
    // 0x28677c: 0x2762018
    ctx->pc = 0x28677cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x286780: 0x851821
    ctx->pc = 0x286780u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x286784: 0x101100
    ctx->pc = 0x286784u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 4));
    // 0x286788: 0x571021
    ctx->pc = 0x286788u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x28678c: 0x2221021
    ctx->pc = 0x28678cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x286790: 0xac620000
    ctx->pc = 0x286790u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x286794: 0xa41821
    ctx->pc = 0x286794u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x286798: 0x260203e8
    ctx->pc = 0x286798u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1000));
    // 0x28679c: 0x2a21021
    ctx->pc = 0x28679cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2867a0: 0xac620004
    ctx->pc = 0x2867a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2867a4: 0x101080
    ctx->pc = 0x2867a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2867a8: 0x541021
    ctx->pc = 0x2867a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2867ac: 0x3c030031
    ctx->pc = 0x2867acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2867b0: 0x246322a0
    ctx->pc = 0x2867b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8864));
    // 0x2867b4: 0x431021
    ctx->pc = 0x2867b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2867b8: 0x8c420000
    ctx->pc = 0x2867b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2867bc: 0x24030002
    ctx->pc = 0x2867bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2867c0: 0x14430004
    ctx->pc = 0x2867C0u;
    {
        const bool branch_taken_0x2867c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x2867C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x2867c0) {
            ctx->pc = 0x2867D4u;
            goto label_2867d4;
        }
    }
    ctx->pc = 0x2867C8u;
    // 0x2867c8: 0xa41021
    ctx->pc = 0x2867c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2867cc: 0x10000006
    ctx->pc = 0x2867CCu;
    {
        const bool branch_taken_0x2867cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2867D0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        if (branch_taken_0x2867cc) {
            ctx->pc = 0x2867E8u;
            goto label_2867e8;
        }
    }
    ctx->pc = 0x2867D4u;
label_2867d4:
    // 0x2867d4: 0x2442ad50
    ctx->pc = 0x2867d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294946128));
    // 0x2867d8: 0x400013
    ctx->pc = 0x2867d8u;
    ctx->lo = GPR_U32(ctx, 2);
    // 0x2867dc: 0x72761800
    ctx->pc = 0x2867dcu;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 22); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2867e0: 0x2402ffff
    ctx->pc = 0x2867e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2867e4: 0xac620020
    ctx->pc = 0x2867e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
label_2867e8:
    // 0x2867e8: 0x3c020035
    ctx->pc = 0x2867e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2867ec: 0x2442ad58
    ctx->pc = 0x2867ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294946136));
    // 0x2867f0: 0x400013
    ctx->pc = 0x2867f0u;
    ctx->lo = GPR_U32(ctx, 2);
    // 0x2867f4: 0x72761800
    ctx->pc = 0x2867f4u;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 22); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2867f8: 0x24020004
    ctx->pc = 0x2867f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2867fc: 0xac620000
    ctx->pc = 0x2867fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x286800: 0x26730001
    ctx->pc = 0x286800u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_286804:
    // 0x286804: 0x26100001
    ctx->pc = 0x286804u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_286808:
    // 0x286808: 0x2a020004
    ctx->pc = 0x286808u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x28680c: 0x1440ffba
    ctx->pc = 0x28680Cu;
    {
        const bool branch_taken_0x28680c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x286810u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x28680c) {
            ctx->pc = 0x2866F8u;
            goto label_2866f8;
        }
    }
    ctx->pc = 0x286814u;
    // 0x286814: 0x26520001
    ctx->pc = 0x286814u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x286818: 0x2a420002
    ctx->pc = 0x286818u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 2));
    // 0x28681c: 0x1440ffae
    ctx->pc = 0x28681Cu;
    {
        const bool branch_taken_0x28681c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x286820u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28681c) {
            ctx->pc = 0x2866D8u;
            goto label_2866d8;
        }
    }
    ctx->pc = 0x286824u;
    // 0x286824: 0x3c030035
    ctx->pc = 0x286824u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x286828: 0x2463ad50
    ctx->pc = 0x286828u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294946128));
    // 0x28682c: 0x24020024
    ctx->pc = 0x28682cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
    // 0x286830: 0x2621018
    ctx->pc = 0x286830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x286834: 0x431021
    ctx->pc = 0x286834u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x286838: 0xac400000
    ctx->pc = 0x286838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28683c: 0xdfbf0090
    ctx->pc = 0x28683cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x286840: 0xdfbe0080
    ctx->pc = 0x286840u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x286844: 0xdfb70070
    ctx->pc = 0x286844u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x286848: 0xdfb60060
    ctx->pc = 0x286848u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28684c: 0xdfb50050
    ctx->pc = 0x28684cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x286850: 0xdfb40040
    ctx->pc = 0x286850u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x286854: 0xdfb30030
    ctx->pc = 0x286854u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286858: 0xdfb20020
    ctx->pc = 0x286858u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28685c: 0xdfb10010
    ctx->pc = 0x28685cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286860: 0xdfb00000
    ctx->pc = 0x286860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286864: 0x3e00008
    ctx->pc = 0x286864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286868u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2866D8u: goto label_2866d8;
            case 0x2866F8u: goto label_2866f8;
            case 0x286750u: goto label_286750;
            case 0x286778u: goto label_286778;
            case 0x2867D4u: goto label_2867d4;
            case 0x2867E8u: goto label_2867e8;
            case 0x286804u: goto label_286804;
            case 0x286808u: goto label_286808;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28686Cu;
}
