#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: load_player_model_sub
// Address: 0x22f2a0 - 0x22f4f8
void load_player_model_sub_0x22f2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22f2a0u;

    // 0x22f2a0: 0x27bdff70
    ctx->pc = 0x22f2a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x22f2a4: 0xffbf0080
    ctx->pc = 0x22f2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x22f2a8: 0xffb70070
    ctx->pc = 0x22f2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x22f2ac: 0xffb60060
    ctx->pc = 0x22f2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x22f2b0: 0xffb50050
    ctx->pc = 0x22f2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x22f2b4: 0xffb40040
    ctx->pc = 0x22f2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22f2b8: 0xffb30030
    ctx->pc = 0x22f2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22f2bc: 0xffb20020
    ctx->pc = 0x22f2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22f2c0: 0xffb10010
    ctx->pc = 0x22f2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22f2c4: 0xffb00000
    ctx->pc = 0x22f2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22f2c8: 0xe0b02d
    ctx->pc = 0x22f2c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f2cc: 0x100802d
    ctx->pc = 0x22f2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f2d0: 0x3c020032
    ctx->pc = 0x22f2d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22f2d4: 0x24421bc0
    ctx->pc = 0x22f2d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x22f2d8: 0x24032b00
    ctx->pc = 0x22f2d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x22f2dc: 0x832018
    ctx->pc = 0x22f2dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22f2e0: 0x822021
    ctx->pc = 0x22f2e0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22f2e4: 0x8c950004
    ctx->pc = 0x22f2e4u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22f2e8: 0x8cb4000c
    ctx->pc = 0x22f2e8u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x22f2ec: 0x8ca32ac0
    ctx->pc = 0x22f2ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 10944)));
    // 0x22f2f0: 0x2402000a
    ctx->pc = 0x22f2f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x22f2f4: 0x62001a
    ctx->pc = 0x22f2f4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x22f2f8: 0x1812
    ctx->pc = 0x22f2f8u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x22f2fc: 0x50400001
    ctx->pc = 0x22F2FCu;
    {
        const bool branch_taken_0x22f2fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22f2fc) {
            ctx->pc = 0x22F300u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x22F304u;
            goto label_22f304;
        }
    }
    ctx->pc = 0x22F304u;
label_22f304:
    // 0x22f304: 0x60b82d
    ctx->pc = 0x22f304u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f308: 0x280982d
    ctx->pc = 0x22f308u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f30c: 0x2a630008
    ctx->pc = 0x22f30cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), 8));
    // 0x22f310: 0x2662fff8
    ctx->pc = 0x22f310u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294967288));
    // 0x22f314: 0x12c0000c
    ctx->pc = 0x22F314u;
    {
        const bool branch_taken_0x22f314 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x22F318u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 2));
        if (branch_taken_0x22f314) {
            ctx->pc = 0x22F348u;
            goto label_22f348;
        }
    }
    ctx->pc = 0x22F31Cu;
    // 0x22f31c: 0x141080
    ctx->pc = 0x22f31cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
    // 0x22f320: 0x3c060032
    ctx->pc = 0x22f320u;
    SET_GPR_U32(ctx, 6, ((uint32_t)50 << 16));
    // 0x22f324: 0x24c613e0
    ctx->pc = 0x22f324u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 5088));
    // 0x22f328: 0x3c04003c
    ctx->pc = 0x22f328u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x22f32c: 0x24841b48
    ctx->pc = 0x22f32cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6984));
    // 0x22f330: 0x3c05003a
    ctx->pc = 0x22f330u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x22f334: 0x24a57690
    ctx->pc = 0x22f334u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30352));
    // 0x22f338: 0xc0b6252
    ctx->pc = 0x22F338u;
    SET_GPR_U32(ctx, 31, 0x22F340u);
    ctx->pc = 0x22F33Cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F340u; }
    }
    if (ctx->pc != 0x22F340u) { return; }
    ctx->pc = 0x22F340u;
    // 0x22f340: 0x10000024
    ctx->pc = 0x22F340u;
    {
        const bool branch_taken_0x22f340 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22F344u;
        SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
        if (branch_taken_0x22f340) {
            ctx->pc = 0x22F3D4u;
            goto label_22f3d4;
        }
    }
    ctx->pc = 0x22F348u;
label_22f348:
    // 0x22f348: 0x3c020032
    ctx->pc = 0x22f348u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22f34c: 0x24421610
    ctx->pc = 0x22f34cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5648));
    // 0x22f350: 0x143880
    ctx->pc = 0x22f350u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 20), 2));
    // 0x22f354: 0xe21021
    ctx->pc = 0x22f354u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x22f358: 0x8c420000
    ctx->pc = 0x22f358u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f35c: 0x10400010
    ctx->pc = 0x22F35Cu;
    {
        const bool branch_taken_0x22f35c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22F360u;
        SET_GPR_U32(ctx, 6, ((uint32_t)50 << 16));
        if (branch_taken_0x22f35c) {
            ctx->pc = 0x22F3A0u;
            goto label_22f3a0;
        }
    }
    ctx->pc = 0x22F364u;
    // 0x22f364: 0x24c613e0
    ctx->pc = 0x22f364u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 5088));
    // 0x22f368: 0x3c020032
    ctx->pc = 0x22f368u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22f36c: 0x24421470
    ctx->pc = 0x22f36cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5232));
    // 0x22f370: 0x151880
    ctx->pc = 0x22f370u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 21), 2));
    // 0x22f374: 0x621821
    ctx->pc = 0x22f374u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22f378: 0x3c04003c
    ctx->pc = 0x22f378u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x22f37c: 0x24841b48
    ctx->pc = 0x22f37cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6984));
    // 0x22f380: 0x3c05003a
    ctx->pc = 0x22f380u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x22f384: 0x24a576a0
    ctx->pc = 0x22f384u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30368));
    // 0x22f388: 0xe63021
    ctx->pc = 0x22f388u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x22f38c: 0x8c670000
    ctx->pc = 0x22f38cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22f390: 0xc0b6252
    ctx->pc = 0x22F390u;
    SET_GPR_U32(ctx, 31, 0x22F398u);
    ctx->pc = 0x22F394u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F398u; }
    }
    if (ctx->pc != 0x22F398u) { return; }
    ctx->pc = 0x22F398u;
    // 0x22f398: 0x1000000e
    ctx->pc = 0x22F398u;
    {
        const bool branch_taken_0x22f398 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22F39Cu;
        SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
        if (branch_taken_0x22f398) {
            ctx->pc = 0x22F3D4u;
            goto label_22f3d4;
        }
    }
    ctx->pc = 0x22F3A0u;
label_22f3a0:
    // 0x22f3a0: 0x24c613e0
    ctx->pc = 0x22f3a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 5088));
    // 0x22f3a4: 0x3c020032
    ctx->pc = 0x22f3a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22f3a8: 0x24421470
    ctx->pc = 0x22f3a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5232));
    // 0x22f3ac: 0x151880
    ctx->pc = 0x22f3acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 21), 2));
    // 0x22f3b0: 0x621821
    ctx->pc = 0x22f3b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22f3b4: 0x3c04003c
    ctx->pc = 0x22f3b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x22f3b8: 0x24841b48
    ctx->pc = 0x22f3b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6984));
    // 0x22f3bc: 0x3c05003a
    ctx->pc = 0x22f3bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x22f3c0: 0x24a57690
    ctx->pc = 0x22f3c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30352));
    // 0x22f3c4: 0xe63021
    ctx->pc = 0x22f3c4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x22f3c8: 0xc0b6252
    ctx->pc = 0x22F3C8u;
    SET_GPR_U32(ctx, 31, 0x22F3D0u);
    ctx->pc = 0x22F3CCu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F3D0u; }
    }
    if (ctx->pc != 0x22F3D0u) { return; }
    ctx->pc = 0x22F3D0u;
    // 0x22f3d0: 0x3c11003c
    ctx->pc = 0x22f3d0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
label_22f3d4:
    // 0x22f3d4: 0x26241b48
    ctx->pc = 0x22f3d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 6984));
    // 0x22f3d8: 0x8e050018
    ctx->pc = 0x22f3d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x22f3dc: 0x302d
    ctx->pc = 0x22f3dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f3e0: 0x382d
    ctx->pc = 0x22f3e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f3e4: 0xc0b1d78
    ctx->pc = 0x22F3E4u;
    SET_GPR_U32(ctx, 31, 0x22F3ECu);
    ctx->pc = 0x22F3E8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x2C75E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_LoadModelFixed_0x2c75e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F3ECu; }
    }
    if (ctx->pc != 0x22F3ECu) { return; }
    ctx->pc = 0x22F3ECu;
    // 0x22f3ec: 0x8e060028
    ctx->pc = 0x22f3ecu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x22f3f0: 0x18c00008
    ctx->pc = 0x22F3F0u;
    {
        const bool branch_taken_0x22f3f0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x22F3F4u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22f3f0) {
            ctx->pc = 0x22F414u;
            goto label_22f414;
        }
    }
    ctx->pc = 0x22F3F8u;
    // 0x22f3f8: 0x26241b48
    ctx->pc = 0x22f3f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 6984));
    // 0x22f3fc: 0x3c05003a
    ctx->pc = 0x22f3fcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x22f400: 0x24a576b8
    ctx->pc = 0x22f400u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30392));
    // 0x22f404: 0xc0b4e7c
    ctx->pc = 0x22F404u;
    SET_GPR_U32(ctx, 31, 0x22F40Cu);
    ctx->pc = 0x22F408u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->pc = 0x2D39F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReadFile_0x2d39f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F40Cu; }
    }
    if (ctx->pc != 0x22F40Cu) { return; }
    ctx->pc = 0x22F40Cu;
    // 0x22f40c: 0x10000008
    ctx->pc = 0x22F40Cu;
    {
        const bool branch_taken_0x22f40c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22F410u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 48)));
        if (branch_taken_0x22f40c) {
            ctx->pc = 0x22F430u;
            goto label_22f430;
        }
    }
    ctx->pc = 0x22F414u;
label_22f414:
    // 0x22f414: 0x3c04003c
    ctx->pc = 0x22f414u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x22f418: 0x24841b48
    ctx->pc = 0x22f418u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6984));
    // 0x22f41c: 0x3c05003a
    ctx->pc = 0x22f41cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x22f420: 0xc0b4e96
    ctx->pc = 0x22F420u;
    SET_GPR_U32(ctx, 31, 0x22F428u);
    ctx->pc = 0x22F424u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30392));
    ctx->pc = 0x2D3A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocFile_0x2d3a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F428u; }
    }
    if (ctx->pc != 0x22F428u) { return; }
    ctx->pc = 0x22F428u;
    // 0x22f428: 0xae020030
    ctx->pc = 0x22f428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x22f42c: 0x8e040030
    ctx->pc = 0x22f42cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_22f430:
    // 0x22f430: 0x240282d
    ctx->pc = 0x22f430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f434: 0xc084784
    ctx->pc = 0x22F434u;
    SET_GPR_U32(ctx, 31, 0x22F43Cu);
    ctx->pc = 0x22F438u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x211E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetupAtreeList_0x211e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F43Cu; }
    }
    if (ctx->pc != 0x22F43Cu) { return; }
    ctx->pc = 0x22F43Cu;
    // 0x22f43c: 0xae02002c
    ctx->pc = 0x22f43cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x22f440: 0xae120010
    ctx->pc = 0x22f440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x22f444: 0xae140000
    ctx->pc = 0x22f444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x22f448: 0xae150004
    ctx->pc = 0x22f448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 21));
    // 0x22f44c: 0xae170008
    ctx->pc = 0x22f44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 23));
    // 0x22f450: 0xae16000c
    ctx->pc = 0x22f450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 22));
    // 0x22f454: 0x131080
    ctx->pc = 0x22f454u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x22f458: 0x3c060032
    ctx->pc = 0x22f458u;
    SET_GPR_U32(ctx, 6, ((uint32_t)50 << 16));
    // 0x22f45c: 0x24c613e0
    ctx->pc = 0x22f45cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 5088));
    // 0x22f460: 0x3c11003c
    ctx->pc = 0x22f460u;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    // 0x22f464: 0x26241b48
    ctx->pc = 0x22f464u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 6984));
    // 0x22f468: 0x3c05003a
    ctx->pc = 0x22f468u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x22f46c: 0x24a576c0
    ctx->pc = 0x22f46cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30400));
    // 0x22f470: 0xc0b6252
    ctx->pc = 0x22F470u;
    SET_GPR_U32(ctx, 31, 0x22F478u);
    ctx->pc = 0x22F474u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F478u; }
    }
    if (ctx->pc != 0x22F478u) { return; }
    ctx->pc = 0x22F478u;
    // 0x22f478: 0x8e06001c
    ctx->pc = 0x22f478u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x22f47c: 0x18c00007
    ctx->pc = 0x22F47Cu;
    {
        const bool branch_taken_0x22f47c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x22F480u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 6984));
        if (branch_taken_0x22f47c) {
            ctx->pc = 0x22F49Cu;
            goto label_22f49c;
        }
    }
    ctx->pc = 0x22F484u;
    // 0x22f484: 0x3c05003a
    ctx->pc = 0x22f484u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x22f488: 0x24a576b8
    ctx->pc = 0x22f488u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30392));
    // 0x22f48c: 0xc0b4e7c
    ctx->pc = 0x22F48Cu;
    SET_GPR_U32(ctx, 31, 0x22F494u);
    ctx->pc = 0x22F490u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x2D39F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReadFile_0x2d39f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F494u; }
    }
    if (ctx->pc != 0x22F494u) { return; }
    ctx->pc = 0x22F494u;
    // 0x22f494: 0x10000008
    ctx->pc = 0x22F494u;
    {
        const bool branch_taken_0x22f494 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22F498u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        if (branch_taken_0x22f494) {
            ctx->pc = 0x22F4B8u;
            goto label_22f4b8;
        }
    }
    ctx->pc = 0x22F49Cu;
label_22f49c:
    // 0x22f49c: 0x3c04003c
    ctx->pc = 0x22f49cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x22f4a0: 0x24841b48
    ctx->pc = 0x22f4a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6984));
    // 0x22f4a4: 0x3c05003a
    ctx->pc = 0x22f4a4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x22f4a8: 0xc0b4e96
    ctx->pc = 0x22F4A8u;
    SET_GPR_U32(ctx, 31, 0x22F4B0u);
    ctx->pc = 0x22F4ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30392));
    ctx->pc = 0x2D3A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocFile_0x2d3a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F4B0u; }
    }
    if (ctx->pc != 0x22F4B0u) { return; }
    ctx->pc = 0x22F4B0u;
    // 0x22f4b0: 0xae020024
    ctx->pc = 0x22f4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x22f4b4: 0x8e040024
    ctx->pc = 0x22f4b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_22f4b8:
    // 0x22f4b8: 0x240282d
    ctx->pc = 0x22f4b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f4bc: 0xc084784
    ctx->pc = 0x22F4BCu;
    SET_GPR_U32(ctx, 31, 0x22F4C4u);
    ctx->pc = 0x22F4C0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->pc = 0x211E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetupAtreeList_0x211e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F4C4u; }
    }
    if (ctx->pc != 0x22F4C4u) { return; }
    ctx->pc = 0x22F4C4u;
    // 0x22f4c4: 0xae020014
    ctx->pc = 0x22f4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x22f4c8: 0x240102d
    ctx->pc = 0x22f4c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f4cc: 0xdfbf0080
    ctx->pc = 0x22f4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22f4d0: 0xdfb70070
    ctx->pc = 0x22f4d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22f4d4: 0xdfb60060
    ctx->pc = 0x22f4d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22f4d8: 0xdfb50050
    ctx->pc = 0x22f4d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22f4dc: 0xdfb40040
    ctx->pc = 0x22f4dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22f4e0: 0xdfb30030
    ctx->pc = 0x22f4e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f4e4: 0xdfb20020
    ctx->pc = 0x22f4e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f4e8: 0xdfb10010
    ctx->pc = 0x22f4e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f4ec: 0xdfb00000
    ctx->pc = 0x22f4ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f4f0: 0x3e00008
    ctx->pc = 0x22F4F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F4F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22F304u: goto label_22f304;
            case 0x22F348u: goto label_22f348;
            case 0x22F3A0u: goto label_22f3a0;
            case 0x22F3D4u: goto label_22f3d4;
            case 0x22F414u: goto label_22f414;
            case 0x22F430u: goto label_22f430;
            case 0x22F49Cu: goto label_22f49c;
            case 0x22F4B8u: goto label_22f4b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22F4F8u;
}
