#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: decBs0
// Address: 0x2de3e0 - 0x2de5e8
void decBs0_0x2de3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2de3e0u;

    // 0x2de3e0: 0x27bdff50
    ctx->pc = 0x2de3e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2de3e4: 0xffbf00a0
    ctx->pc = 0x2de3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2de3e8: 0xffbe0090
    ctx->pc = 0x2de3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2de3ec: 0xffb70080
    ctx->pc = 0x2de3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2de3f0: 0xffb60070
    ctx->pc = 0x2de3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2de3f4: 0xffb50060
    ctx->pc = 0x2de3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2de3f8: 0xffb40050
    ctx->pc = 0x2de3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2de3fc: 0xffb30040
    ctx->pc = 0x2de3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2de400: 0xffb20030
    ctx->pc = 0x2de400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2de404: 0xffb10020
    ctx->pc = 0x2de404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2de408: 0xffb00010
    ctx->pc = 0x2de408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2de40c: 0xafa40000
    ctx->pc = 0x2de40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2de410: 0x24020001
    ctx->pc = 0x2de410u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de414: 0xafa20004
    ctx->pc = 0x2de414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2de418: 0x80b82d
    ctx->pc = 0x2de418u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de41c: 0x3c02003a
    ctx->pc = 0x2de41cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2de420: 0x2403012c
    ctx->pc = 0x2de420u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 300));
    // 0x2de424: 0xac432da4
    ctx->pc = 0x2de424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11684), GPR_U32(ctx, 3));
    // 0x2de428: 0x1000004b
    ctx->pc = 0x2DE428u;
    {
        const bool branch_taken_0x2de428 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DE42Cu;
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2de428) {
            ctx->pc = 0x2DE558u;
            goto label_2de558;
        }
    }
    ctx->pc = 0x2DE430u;
label_2de430:
    // 0x2de430: 0xafc22da4
    ctx->pc = 0x2de430u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11684), GPR_U32(ctx, 2));
    // 0x2de434: 0x10000004
    ctx->pc = 0x2DE434u;
    {
        const bool branch_taken_0x2de434 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DE438u;
        SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
        if (branch_taken_0x2de434) {
            ctx->pc = 0x2DE448u;
            goto label_2de448;
        }
    }
    ctx->pc = 0x2DE43Cu;
    // 0x2de43c: 0x0
    ctx->pc = 0x2de43cu;
    // NOP
label_2de440:
    // 0x2de440: 0xc0b74d4
    ctx->pc = 0x2DE440u;
    SET_GPR_U32(ctx, 31, 0x2DE448u);
    ctx->pc = 0x2DD350u;
    {
        const uint32_t __entryPc = ctx->pc;
        switchThread_0x2dd350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE448u; }
    }
    if (ctx->pc != 0x2DE448u) { return; }
    ctx->pc = 0x2DE448u;
label_2de448:
    // 0x2de448: 0xc0b7a42
    ctx->pc = 0x2DE448u;
    SET_GPR_U32(ctx, 31, 0x2DE450u);
    ctx->pc = 0x2DE44Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10736));
    ctx->pc = 0x2DE908u;
    {
        const uint32_t __entryPc = ctx->pc;
        voBufGetData_0x2de908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE450u; }
    }
    if (ctx->pc != 0x2DE450u) { return; }
    ctx->pc = 0x2DE450u;
    // 0x2de450: 0x40282d
    ctx->pc = 0x2de450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de454: 0x10a0fffa
    ctx->pc = 0x2DE454u;
    {
        const bool branch_taken_0x2de454 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DE458u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 303));
        if (branch_taken_0x2de454) {
            ctx->pc = 0x2DE440u;
            goto label_2de440;
        }
    }
    ctx->pc = 0x2DE45Cu;
    // 0x2de45c: 0xafc22da4
    ctx->pc = 0x2de45cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11684), GPR_U32(ctx, 2));
    // 0x2de460: 0x2e0202d
    ctx->pc = 0x2de460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de464: 0xc0bb7b2
    ctx->pc = 0x2DE464u;
    SET_GPR_U32(ctx, 31, 0x2DE46Cu);
    ctx->pc = 0x2DE468u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1200));
    ctx->pc = 0x2EDEC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegGetPicture_0x2edec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE46Cu; }
    }
    if (ctx->pc != 0x2DE46Cu) { return; }
    ctx->pc = 0x2DE46Cu;
    // 0x2de46c: 0x4410005
    ctx->pc = 0x2DE46Cu;
    {
        const bool branch_taken_0x2de46c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2DE470u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 304));
        if (branch_taken_0x2de46c) {
            ctx->pc = 0x2DE484u;
            goto label_2de484;
        }
    }
    ctx->pc = 0x2DE474u;
    // 0x2de474: 0x3c04003c
    ctx->pc = 0x2de474u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2de478: 0xc0b75d2
    ctx->pc = 0x2DE478u;
    SET_GPR_U32(ctx, 31, 0x2DE480u);
    ctx->pc = 0x2DE47Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936736));
    ctx->pc = 0x2DD748u;
    {
        const uint32_t __entryPc = ctx->pc;
        ErrMessage_0x2dd748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE480u; }
    }
    if (ctx->pc != 0x2DE480u) { return; }
    ctx->pc = 0x2DE480u;
    // 0x2de480: 0x24020130
    ctx->pc = 0x2de480u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 304));
label_2de484:
    // 0x2de484: 0xafc22da4
    ctx->pc = 0x2de484u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11684), GPR_U32(ctx, 2));
    // 0x2de488: 0x8ee20008
    ctx->pc = 0x2de488u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x2de48c: 0x1440002b
    ctx->pc = 0x2DE48Cu;
    {
        const bool branch_taken_0x2de48c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DE490u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 305));
        if (branch_taken_0x2de48c) {
            ctx->pc = 0x2DE53Cu;
            goto label_2de53c;
        }
    }
    ctx->pc = 0x2DE494u;
    // 0x2de494: 0x8ef40000
    ctx->pc = 0x2de494u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2de498: 0x8ef30004
    ctx->pc = 0x2de498u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x2de49c: 0x3c03003a
    ctx->pc = 0x2de49cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2de4a0: 0x246329f0
    ctx->pc = 0x2de4a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 10736));
    // 0x2de4a4: 0x8c620010
    ctx->pc = 0x2de4a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2de4a8: 0x18400023
    ctx->pc = 0x2DE4A8u;
    {
        const bool branch_taken_0x2de4a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2DE4ACu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2de4a8) {
            ctx->pc = 0x2DE538u;
            goto label_2de538;
        }
    }
    ctx->pc = 0x2DE4B0u;
    // 0x2de4b0: 0x3c16003a
    ctx->pc = 0x2de4b0u;
    SET_GPR_U32(ctx, 22, ((uint32_t)58 << 16));
    // 0x2de4b4: 0x2c0102d
    ctx->pc = 0x2de4b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de4b8: 0x245529f0
    ctx->pc = 0x2de4b8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 10736));
    // 0x2de4bc: 0x3c020003
    ctx->pc = 0x2de4bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)3 << 16));
label_2de4c0:
    // 0x2de4c0: 0x34429240
    ctx->pc = 0x2de4c0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 37440));
    // 0x2de4c4: 0x2428018
    ctx->pc = 0x2de4c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2de4c8: 0x8ea40004
    ctx->pc = 0x2de4c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2de4cc: 0x2042021
    ctx->pc = 0x2de4ccu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2de4d0: 0x3c030012
    ctx->pc = 0x2de4d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)18 << 16));
    // 0x2de4d4: 0x3463c000
    ctx->pc = 0x2de4d4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49152));
    // 0x2de4d8: 0x2438818
    ctx->pc = 0x2de4d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2de4dc: 0x8ec529f0
    ctx->pc = 0x2de4dcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 10736)));
    // 0x2de4e0: 0x24840040
    ctx->pc = 0x2de4e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 64));
    // 0x2de4e4: 0x2252821
    ctx->pc = 0x2de4e4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2de4e8: 0x302d
    ctx->pc = 0x2de4e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de4ec: 0x280382d
    ctx->pc = 0x2de4ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de4f0: 0xc0b704a
    ctx->pc = 0x2DE4F0u;
    SET_GPR_U32(ctx, 31, 0x2DE4F8u);
    ctx->pc = 0x2DE4F4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DC128u;
    {
        const uint32_t __entryPc = ctx->pc;
        setImageTag_0x2dc128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE4F8u; }
    }
    if (ctx->pc != 0x2DE4F8u) { return; }
    ctx->pc = 0x2DE4F8u;
    // 0x2de4f8: 0x8ea20004
    ctx->pc = 0x2de4f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2de4fc: 0x2028021
    ctx->pc = 0x2de4fcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2de500: 0x8ec529f0
    ctx->pc = 0x2de500u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 10736)));
    // 0x2de504: 0x3c020001
    ctx->pc = 0x2de504u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x2de508: 0x3442c940
    ctx->pc = 0x2de508u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 51520));
    // 0x2de50c: 0x2022021
    ctx->pc = 0x2de50cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2de510: 0x2252821
    ctx->pc = 0x2de510u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2de514: 0x24060001
    ctx->pc = 0x2de514u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de518: 0x280382d
    ctx->pc = 0x2de518u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de51c: 0xc0b704a
    ctx->pc = 0x2DE51Cu;
    SET_GPR_U32(ctx, 31, 0x2DE524u);
    ctx->pc = 0x2DE520u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DC128u;
    {
        const uint32_t __entryPc = ctx->pc;
        setImageTag_0x2dc128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE524u; }
    }
    if (ctx->pc != 0x2DE524u) { return; }
    ctx->pc = 0x2DE524u;
    // 0x2de524: 0x26520001
    ctx->pc = 0x2de524u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x2de528: 0x8ea20010
    ctx->pc = 0x2de528u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x2de52c: 0x242102a
    ctx->pc = 0x2de52cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x2de530: 0x1440ffe3
    ctx->pc = 0x2DE530u;
    {
        const bool branch_taken_0x2de530 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DE534u;
        SET_GPR_U32(ctx, 2, ((uint32_t)3 << 16));
        if (branch_taken_0x2de530) {
            ctx->pc = 0x2DE4C0u;
            goto label_2de4c0;
        }
    }
    ctx->pc = 0x2DE538u;
label_2de538:
    // 0x2de538: 0x24020131
    ctx->pc = 0x2de538u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 305));
label_2de53c:
    // 0x2de53c: 0xafc22da4
    ctx->pc = 0x2de53cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11684), GPR_U32(ctx, 2));
    // 0x2de540: 0x3c03003a
    ctx->pc = 0x2de540u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2de544: 0xc0b7a22
    ctx->pc = 0x2DE544u;
    SET_GPR_U32(ctx, 31, 0x2DE54Cu);
    ctx->pc = 0x2DE548u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 10736));
    ctx->pc = 0x2DE888u;
    {
        const uint32_t __entryPc = ctx->pc;
        voBufIncCount_0x2de888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE54Cu; }
    }
    if (ctx->pc != 0x2DE54Cu) { return; }
    ctx->pc = 0x2DE54Cu;
    // 0x2de54c: 0x24020132
    ctx->pc = 0x2de54cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 306));
    // 0x2de550: 0xc0b74d4
    ctx->pc = 0x2DE550u;
    SET_GPR_U32(ctx, 31, 0x2DE558u);
    ctx->pc = 0x2DE554u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11684), GPR_U32(ctx, 2));
    ctx->pc = 0x2DD350u;
    {
        const uint32_t __entryPc = ctx->pc;
        switchThread_0x2dd350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE558u; }
    }
    if (ctx->pc != 0x2DE558u) { return; }
    ctx->pc = 0x2DE558u;
label_2de558:
    // 0x2de558: 0xc0bb7f8
    ctx->pc = 0x2DE558u;
    SET_GPR_U32(ctx, 31, 0x2DE560u);
    ctx->pc = 0x2DE55Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x2EDFE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegIsEnd_0x2edfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE560u; }
    }
    if (ctx->pc != 0x2DE560u) { return; }
    ctx->pc = 0x2DE560u;
    // 0x2de560: 0x1440000d
    ctx->pc = 0x2DE560u;
    {
        const bool branch_taken_0x2de560 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DE564u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 301));
        if (branch_taken_0x2de560) {
            ctx->pc = 0x2DE598u;
            goto label_2de598;
        }
    }
    ctx->pc = 0x2DE568u;
    // 0x2de568: 0xafc22da4
    ctx->pc = 0x2de568u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11684), GPR_U32(ctx, 2));
    // 0x2de56c: 0x3c02003a
    ctx->pc = 0x2de56cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2de570: 0x8c4222f8
    ctx->pc = 0x2de570u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8952)));
    // 0x2de574: 0x3c03003a
    ctx->pc = 0x2de574u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2de578: 0xac6229e0
    ctx->pc = 0x2de578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10720), GPR_U32(ctx, 2));
    // 0x2de57c: 0xc0b7850
    ctx->pc = 0x2DE57Cu;
    SET_GPR_U32(ctx, 31, 0x2DE584u);
    ctx->pc = 0x2DE580u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x2DE140u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecGetState_0x2de140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE584u; }
    }
    if (ctx->pc != 0x2DE584u) { return; }
    ctx->pc = 0x2DE584u;
    // 0x2de584: 0x24030001
    ctx->pc = 0x2de584u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de588: 0x1443ffa9
    ctx->pc = 0x2DE588u;
    {
        const bool branch_taken_0x2de588 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x2DE58Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 302));
        if (branch_taken_0x2de588) {
            ctx->pc = 0x2DE430u;
            goto label_2de430;
        }
    }
    ctx->pc = 0x2DE590u;
    // 0x2de590: 0x2402ffff
    ctx->pc = 0x2de590u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2de594: 0xafa20004
    ctx->pc = 0x2de594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2de598:
    // 0x2de598: 0x3c10003a
    ctx->pc = 0x2de598u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2de59c: 0x24020136
    ctx->pc = 0x2de59cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 310));
    // 0x2de5a0: 0xae022da4
    ctx->pc = 0x2de5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11684), GPR_U32(ctx, 2));
    // 0x2de5a4: 0xc0bb800
    ctx->pc = 0x2DE5A4u;
    SET_GPR_U32(ctx, 31, 0x2DE5ACu);
    ctx->pc = 0x2DE5A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EE000u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegReset_0x2ee000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE5ACu; }
    }
    if (ctx->pc != 0x2DE5ACu) { return; }
    ctx->pc = 0x2DE5ACu;
    // 0x2de5ac: 0x24020137
    ctx->pc = 0x2de5acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 311));
    // 0x2de5b0: 0xae022da4
    ctx->pc = 0x2de5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11684), GPR_U32(ctx, 2));
    // 0x2de5b4: 0x8fa20004
    ctx->pc = 0x2de5b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2de5b8: 0xdfbf00a0
    ctx->pc = 0x2de5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2de5bc: 0xdfbe0090
    ctx->pc = 0x2de5bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2de5c0: 0xdfb70080
    ctx->pc = 0x2de5c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2de5c4: 0xdfb60070
    ctx->pc = 0x2de5c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2de5c8: 0xdfb50060
    ctx->pc = 0x2de5c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2de5cc: 0xdfb40050
    ctx->pc = 0x2de5ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2de5d0: 0xdfb30040
    ctx->pc = 0x2de5d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2de5d4: 0xdfb20030
    ctx->pc = 0x2de5d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de5d8: 0xdfb10020
    ctx->pc = 0x2de5d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de5dc: 0xdfb00010
    ctx->pc = 0x2de5dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de5e0: 0x3e00008
    ctx->pc = 0x2DE5E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE5E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DE430u: goto label_2de430;
            case 0x2DE440u: goto label_2de440;
            case 0x2DE448u: goto label_2de448;
            case 0x2DE484u: goto label_2de484;
            case 0x2DE4C0u: goto label_2de4c0;
            case 0x2DE538u: goto label_2de538;
            case 0x2DE53Cu: goto label_2de53c;
            case 0x2DE558u: goto label_2de558;
            case 0x2DE598u: goto label_2de598;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DE5E8u;
}
