#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _getPtsDtsFlags
// Address: 0x125318 - 0x1254ac
void _getPtsDtsFlags_0x125318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125318u;

    // 0x125318: 0x27bdff50
    ctx->pc = 0x125318u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x12531c: 0x3c020017
    ctx->pc = 0x12531cu;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
    // 0x125320: 0xffbe0090
    ctx->pc = 0x125320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x125324: 0xffb50060
    ctx->pc = 0x125324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x125328: 0xc0f02d
    ctx->pc = 0x125328u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12532c: 0xffb40050
    ctx->pc = 0x12532cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x125330: 0xa0a82d
    ctx->pc = 0x125330u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125334: 0xffbf00a0
    ctx->pc = 0x125334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x125338: 0xffb70080
    ctx->pc = 0x125338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x12533c: 0xffb60070
    ctx->pc = 0x12533cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x125340: 0xffb20030
    ctx->pc = 0x125340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x125344: 0xffb10020
    ctx->pc = 0x125344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x125348: 0xffb00010
    ctx->pc = 0x125348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12534c: 0x8c4317bc
    ctx->pc = 0x12534cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 6076)));
    // 0x125350: 0xafa70000
    ctx->pc = 0x125350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x125354: 0xffb30040
    ctx->pc = 0x125354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x125358: 0x8c730040
    ctx->pc = 0x125358u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x12535c: 0x8e620070
    ctx->pc = 0x12535cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x125360: 0x10400025
    ctx->pc = 0x125360u;
    {
        const bool branch_taken_0x125360 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x125364u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x125360) {
            ctx->pc = 0x1253F8u;
            goto label_1253f8;
        }
    }
    ctx->pc = 0x125368u;
    // 0x125368: 0xde820018
    ctx->pc = 0x125368u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x12536c: 0x4430024
    ctx->pc = 0x12536Cu;
    {
        const bool branch_taken_0x12536c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12536c) {
            ctx->pc = 0x125370u;
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
            ctx->pc = 0x125400u;
            goto label_125400;
        }
    }
    ctx->pc = 0x125374u;
    // 0x125374: 0x8e770080
    ctx->pc = 0x125374u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x125378: 0x6e20021
    ctx->pc = 0x125378u;
    {
        const bool branch_taken_0x125378 = (GPR_S32(ctx, 23) < 0);
        if (branch_taken_0x125378) {
            ctx->pc = 0x12537Cu;
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
            ctx->pc = 0x125400u;
            goto label_125400;
        }
    }
    ctx->pc = 0x125380u;
    // 0x125380: 0xde700088
    ctx->pc = 0x125380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x125384: 0xde650078
    ctx->pc = 0x125384u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x125388: 0x10803c
    ctx->pc = 0x125388u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x12538c: 0x10803f
    ctx->pc = 0x12538cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x125390: 0x32120001
    ctx->pc = 0x125390u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 16), 1));
    // 0x125394: 0x30a50001
    ctx->pc = 0x125394u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    // 0x125398: 0xc049f28
    ctx->pc = 0x125398u;
    SET_GPR_U32(ctx, 31, 0x1253A0u);
    ctx->pc = 0x12539Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x127CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x127ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1253A0u; }
    }
    if (ctx->pc != 0x1253A0u) { return; }
    ctx->pc = 0x1253A0u;
    // 0x1253a0: 0x8e760090
    ctx->pc = 0x1253a0u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x1253a4: 0x40202d
    ctx->pc = 0x1253a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1253a8: 0xc049f28
    ctx->pc = 0x1253A8u;
    SET_GPR_U32(ctx, 31, 0x1253B0u);
    ctx->pc = 0x1253ACu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 22), 1));
    ctx->pc = 0x127CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x127ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1253B0u; }
    }
    if (ctx->pc != 0x1253B0u) { return; }
    ctx->pc = 0x1253B0u;
    // 0x1253b0: 0xde640078
    ctx->pc = 0x1253b0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1253b4: 0x2883c
    ctx->pc = 0x1253b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1253b8: 0x11883f
    ctx->pc = 0x1253b8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x1253bc: 0xc049f28
    ctx->pc = 0x1253BCu;
    SET_GPR_U32(ctx, 31, 0x1253C4u);
    ctx->pc = 0x1253C0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x127CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x127ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1253C4u; }
    }
    if (ctx->pc != 0x1253C4u) { return; }
    ctx->pc = 0x1253C4u;
    // 0x1253c4: 0x217f8
    ctx->pc = 0x1253c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x1253c8: 0x2103f
    ctx->pc = 0x1253c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1253cc: 0x240202d
    ctx->pc = 0x1253ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1253d0: 0x511021
    ctx->pc = 0x1253d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1253d4: 0x2e21021
    ctx->pc = 0x1253d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1253d8: 0xfea20000
    ctx->pc = 0x1253d8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x1253dc: 0xde650078
    ctx->pc = 0x1253dcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1253e0: 0xc049f28
    ctx->pc = 0x1253E0u;
    SET_GPR_U32(ctx, 31, 0x1253E8u);
    ctx->pc = 0x1253E4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x127CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x127ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1253E8u; }
    }
    if (ctx->pc != 0x1253E8u) { return; }
    ctx->pc = 0x1253E8u;
    // 0x1253e8: 0x10400005
    ctx->pc = 0x1253E8u;
    {
        const bool branch_taken_0x1253e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1253ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 1));
        if (branch_taken_0x1253e8) {
            ctx->pc = 0x125400u;
            goto label_125400;
        }
    }
    ctx->pc = 0x1253F0u;
    // 0x1253f0: 0x10000003
    ctx->pc = 0x1253F0u;
    {
        const bool branch_taken_0x1253f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1253F4u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 2));
        if (branch_taken_0x1253f0) {
            ctx->pc = 0x125400u;
            goto label_125400;
        }
    }
    ctx->pc = 0x1253F8u;
label_1253f8:
    // 0x1253f8: 0xde820018
    ctx->pc = 0x1253f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1253fc: 0xfea20000
    ctx->pc = 0x1253fcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
label_125400:
    // 0x125400: 0x8e6300f8
    ctx->pc = 0x125400u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 248)));
    // 0x125404: 0x24020002
    ctx->pc = 0x125404u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x125408: 0x54620009
    ctx->pc = 0x125408u;
    {
        const bool branch_taken_0x125408 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x125408) {
            ctx->pc = 0x12540Cu;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->pc = 0x125430u;
            goto label_125430;
        }
    }
    ctx->pc = 0x125410u;
    // 0x125410: 0xde6200f0
    ctx->pc = 0x125410u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x125414: 0x4420006
    ctx->pc = 0x125414u;
    {
        const bool branch_taken_0x125414 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x125414) {
            ctx->pc = 0x125418u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->pc = 0x125430u;
            goto label_125430;
        }
    }
    ctx->pc = 0x12541Cu;
    // 0x12541c: 0xfea20000
    ctx->pc = 0x12541cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x125420: 0x2402ffff
    ctx->pc = 0x125420u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x125424: 0xae6000f8
    ctx->pc = 0x125424u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 248), GPR_U32(ctx, 0));
    // 0x125428: 0xfe6200f0
    ctx->pc = 0x125428u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 240), GPR_U64(ctx, 2));
    // 0x12542c: 0x8e850040
    ctx->pc = 0x12542cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_125430:
    // 0x125430: 0x8e84003c
    ctx->pc = 0x125430u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x125434: 0x8e820034
    ctx->pc = 0x125434u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x125438: 0x52978
    ctx->pc = 0x125438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x12543c: 0x421b8
    ctx->pc = 0x12543cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
    // 0x125440: 0x8e860030
    ctx->pc = 0x125440u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x125444: 0x8e87002c
    ctx->pc = 0x125444u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x125448: 0xa42825
    ctx->pc = 0x125448u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x12544c: 0x8e830038
    ctx->pc = 0x12544cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x125450: 0x21238
    ctx->pc = 0x125450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x125454: 0xde840020
    ctx->pc = 0x125454u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x125458: 0x471025
    ctx->pc = 0x125458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x12545c: 0x630f8
    ctx->pc = 0x12545cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 3);
    // 0x125460: 0x319f8
    ctx->pc = 0x125460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 7);
    // 0x125464: 0xffc40000
    ctx->pc = 0x125464u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x125468: 0x661825
    ctx->pc = 0x125468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x12546c: 0x451025
    ctx->pc = 0x12546cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x125470: 0xdfbf00a0
    ctx->pc = 0x125470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x125474: 0x431025
    ctx->pc = 0x125474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x125478: 0xdfbe0090
    ctx->pc = 0x125478u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12547c: 0x8fa30000
    ctx->pc = 0x12547cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125480: 0xdfb70080
    ctx->pc = 0x125480u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x125484: 0xdfb60070
    ctx->pc = 0x125484u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x125488: 0xdfb50060
    ctx->pc = 0x125488u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12548c: 0xdfb40050
    ctx->pc = 0x12548cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x125490: 0xdfb30040
    ctx->pc = 0x125490u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x125494: 0xdfb20030
    ctx->pc = 0x125494u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125498: 0xdfb10020
    ctx->pc = 0x125498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12549c: 0xdfb00010
    ctx->pc = 0x12549cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1254a0: 0xfc620000
    ctx->pc = 0x1254a0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1254a4: 0x3e00008
    ctx->pc = 0x1254A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1254A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1253F8u: goto label_1253f8;
            case 0x125400u: goto label_125400;
            case 0x125430u: goto label_125430;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1254ACu;
}
