#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: end_see_thru
// Address: 0x22c6f0 - 0x22c810
void end_see_thru_0x22c6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22c6f0u;

    // 0x22c6f0: 0x27bdffb0
    ctx->pc = 0x22c6f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22c6f4: 0xffbf0040
    ctx->pc = 0x22c6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22c6f8: 0xffb30030
    ctx->pc = 0x22c6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22c6fc: 0xffb20020
    ctx->pc = 0x22c6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22c700: 0xffb10010
    ctx->pc = 0x22c700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22c704: 0xffb00000
    ctx->pc = 0x22c704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22c708: 0x80982d
    ctx->pc = 0x22c708u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c70c: 0x3c030034
    ctx->pc = 0x22c70cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x22c710: 0x2463cdf0
    ctx->pc = 0x22c710u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954480));
    // 0x22c714: 0x24020048
    ctx->pc = 0x22c714u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 72));
    // 0x22c718: 0x2621018
    ctx->pc = 0x22c718u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22c71c: 0x432021
    ctx->pc = 0x22c71cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22c720: 0x8c820000
    ctx->pc = 0x22c720u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22c724: 0x10400004
    ctx->pc = 0x22C724u;
    {
        const bool branch_taken_0x22c724 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22C728u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x22c724) {
            ctx->pc = 0x22C738u;
            goto label_22c738;
        }
    }
    ctx->pc = 0x22C72Cu;
    // 0x22c72c: 0xc08496c
    ctx->pc = 0x22C72Cu;
    SET_GPR_U32(ctx, 31, 0x22C734u);
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C734u; }
    }
    if (ctx->pc != 0x22C734u) { return; }
    ctx->pc = 0x22C734u;
    // 0x22c734: 0x3c020034
    ctx->pc = 0x22c734u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_22c738:
    // 0x22c738: 0x2442cf50
    ctx->pc = 0x22c738u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294954832));
    // 0x22c73c: 0x138880
    ctx->pc = 0x22c73cu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 19), 2));
    // 0x22c740: 0x2221021
    ctx->pc = 0x22c740u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22c744: 0x8c440000
    ctx->pc = 0x22c744u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22c748: 0x24050001
    ctx->pc = 0x22c748u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c74c: 0xc0b41b8
    ctx->pc = 0x22C74Cu;
    SET_GPR_U32(ctx, 31, 0x22C754u);
    ctx->pc = 0x22C750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C754u; }
    }
    if (ctx->pc != 0x22C754u) { return; }
    ctx->pc = 0x22C754u;
    // 0x22c754: 0x3c020034
    ctx->pc = 0x22c754u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x22c758: 0x2442cf30
    ctx->pc = 0x22c758u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294954800));
    // 0x22c75c: 0x2229021
    ctx->pc = 0x22c75cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22c760: 0x8e440000
    ctx->pc = 0x22c760u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22c764: 0x1080001f
    ctx->pc = 0x22C764u;
    {
        const bool branch_taken_0x22c764 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x22C768u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x22c764) {
            ctx->pc = 0x22C7E4u;
            goto label_22c7e4;
        }
    }
    ctx->pc = 0x22C76Cu;
    // 0x22c76c: 0x8c840070
    ctx->pc = 0x22c76cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x22c770: 0x1080001c
    ctx->pc = 0x22C770u;
    {
        const bool branch_taken_0x22c770 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x22C774u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x22c770) {
            ctx->pc = 0x22C7E4u;
            goto label_22c7e4;
        }
    }
    ctx->pc = 0x22C778u;
    // 0x22c778: 0x2442cf20
    ctx->pc = 0x22c778u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294954784));
    // 0x22c77c: 0x2221021
    ctx->pc = 0x22c77cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22c780: 0xc0b3f94
    ctx->pc = 0x22C780u;
    SET_GPR_U32(ctx, 31, 0x22C788u);
    ctx->pc = 0x22C784u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C788u; }
    }
    if (ctx->pc != 0x22C788u) { return; }
    ctx->pc = 0x22C788u;
    // 0x22c788: 0x3c100034
    ctx->pc = 0x22c788u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x22c78c: 0x2610cf10
    ctx->pc = 0x22c78cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294954768));
    // 0x22c790: 0x2308021
    ctx->pc = 0x22c790u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x22c794: 0x8e420000
    ctx->pc = 0x22c794u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22c798: 0x8e040000
    ctx->pc = 0x22c798u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22c79c: 0xc0b549e
    ctx->pc = 0x22C79Cu;
    SET_GPR_U32(ctx, 31, 0x22C7A4u);
    ctx->pc = 0x22C7A0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 112)));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C7A4u; }
    }
    if (ctx->pc != 0x22C7A4u) { return; }
    ctx->pc = 0x22C7A4u;
    // 0x22c7a4: 0x8e420000
    ctx->pc = 0x22c7a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22c7a8: 0x8c430070
    ctx->pc = 0x22c7a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x22c7ac: 0x8e020000
    ctx->pc = 0x22c7acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22c7b0: 0xc4400030
    ctx->pc = 0x22c7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c7b4: 0xe4600030
    ctx->pc = 0x22c7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x22c7b8: 0x8e420000
    ctx->pc = 0x22c7b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22c7bc: 0x8c430070
    ctx->pc = 0x22c7bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x22c7c0: 0x8e020000
    ctx->pc = 0x22c7c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22c7c4: 0xc4400034
    ctx->pc = 0x22c7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c7c8: 0xe4600034
    ctx->pc = 0x22c7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x22c7cc: 0x8e420000
    ctx->pc = 0x22c7ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22c7d0: 0x8c430070
    ctx->pc = 0x22c7d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x22c7d4: 0x8e020000
    ctx->pc = 0x22c7d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22c7d8: 0xc4400038
    ctx->pc = 0x22c7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c7dc: 0xe4600038
    ctx->pc = 0x22c7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x22c7e0: 0x3c030034
    ctx->pc = 0x22c7e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_22c7e4:
    // 0x22c7e4: 0x2463cf30
    ctx->pc = 0x22c7e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954800));
    // 0x22c7e8: 0x131080
    ctx->pc = 0x22c7e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x22c7ec: 0x431021
    ctx->pc = 0x22c7ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22c7f0: 0xac400000
    ctx->pc = 0x22c7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x22c7f4: 0xdfbf0040
    ctx->pc = 0x22c7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22c7f8: 0xdfb30030
    ctx->pc = 0x22c7f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c7fc: 0xdfb20020
    ctx->pc = 0x22c7fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c800: 0xdfb10010
    ctx->pc = 0x22c800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c804: 0xdfb00000
    ctx->pc = 0x22c804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c808: 0x3e00008
    ctx->pc = 0x22C808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C80Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22C738u: goto label_22c738;
            case 0x22C7E4u: goto label_22c7e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22C810u;
}
