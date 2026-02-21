#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterLookAtPlayer
// Address: 0x29c760 - 0x29c890
void CritterLookAtPlayer_0x29c760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29c760u;

    // 0x29c760: 0x27bdffb0
    ctx->pc = 0x29c760u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29c764: 0xffbf0040
    ctx->pc = 0x29c764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29c768: 0xffb20030
    ctx->pc = 0x29c768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29c76c: 0xffb10020
    ctx->pc = 0x29c76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x29c770: 0xffb00010
    ctx->pc = 0x29c770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29c774: 0x80802d
    ctx->pc = 0x29c774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c778: 0x8e120004
    ctx->pc = 0x29c778u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29c77c: 0x10a0000e
    ctx->pc = 0x29C77Cu;
    {
        const bool branch_taken_0x29c77c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x29C780u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29c77c) {
            ctx->pc = 0x29C7B8u;
            goto label_29c7b8;
        }
    }
    ctx->pc = 0x29C784u;
    // 0x29c784: 0x8ca30000
    ctx->pc = 0x29c784u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29c788: 0x24020010
    ctx->pc = 0x29c788u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x29c78c: 0x1062003b
    ctx->pc = 0x29C78Cu;
    {
        const bool branch_taken_0x29c78c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x29C790u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x29c78c) {
            ctx->pc = 0x29C87Cu;
            goto label_29c87c;
        }
    }
    ctx->pc = 0x29C794u;
    // 0x29c794: 0x10600039
    ctx->pc = 0x29C794u;
    {
        const bool branch_taken_0x29c794 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x29C798u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
        if (branch_taken_0x29c794) {
            ctx->pc = 0x29C87Cu;
            goto label_29c87c;
        }
    }
    ctx->pc = 0x29C79Cu;
    // 0x29c79c: 0x50620006
    ctx->pc = 0x29C79Cu;
    {
        const bool branch_taken_0x29c79c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x29c79c) {
            ctx->pc = 0x29C7A0u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x29C7B8u;
            goto label_29c7b8;
        }
    }
    ctx->pc = 0x29C7A4u;
    // 0x29c7a4: 0x8ca20004
    ctx->pc = 0x29c7a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x29c7a8: 0x30420001
    ctx->pc = 0x29c7a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x29c7ac: 0x50400003
    ctx->pc = 0x29C7ACu;
    {
        const bool branch_taken_0x29c7ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x29c7ac) {
            ctx->pc = 0x29C7B0u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2892)));
            ctx->pc = 0x29C7BCu;
            goto label_29c7bc;
        }
    }
    ctx->pc = 0x29C7B4u;
    // 0x29c7b4: 0x24040001
    ctx->pc = 0x29c7b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_29c7b8:
    // 0x29c7b8: 0x86020b4c
    ctx->pc = 0x29c7b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2892)));
label_29c7bc:
    // 0x29c7bc: 0x24030001
    ctx->pc = 0x29c7bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c7c0: 0x28420001
    ctx->pc = 0x29c7c0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 1));
    // 0x29c7c4: 0x62200a
    ctx->pc = 0x29c7c4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x29c7c8: 0x86020b4e
    ctx->pc = 0x29c7c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2894)));
    // 0x29c7cc: 0x18400006
    ctx->pc = 0x29C7CCu;
    {
        const bool branch_taken_0x29c7cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29C7D0u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2894)));
        if (branch_taken_0x29c7cc) {
            ctx->pc = 0x29C7E8u;
            goto label_29c7e8;
        }
    }
    ctx->pc = 0x29C7D4u;
    // 0x29c7d4: 0x3c020031
    ctx->pc = 0x29c7d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x29c7d8: 0x9442ffbc
    ctx->pc = 0x29c7d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x29c7dc: 0x621023
    ctx->pc = 0x29c7dcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29c7e0: 0xa6020b4e
    ctx->pc = 0x29c7e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2894), (uint16_t)GPR_U32(ctx, 2));
    // 0x29c7e4: 0x24040001
    ctx->pc = 0x29c7e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_29c7e8:
    // 0x29c7e8: 0x1480000f
    ctx->pc = 0x29C7E8u;
    {
        const bool branch_taken_0x29c7e8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x29C7ECu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29c7e8) {
            ctx->pc = 0x29C828u;
            goto label_29c828;
        }
    }
    ctx->pc = 0x29C7F0u;
    // 0x29c7f0: 0x86020130
    ctx->pc = 0x29c7f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x29c7f4: 0x440000c
    ctx->pc = 0x29C7F4u;
    {
        const bool branch_taken_0x29c7f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29C7F8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x29c7f4) {
            ctx->pc = 0x29C828u;
            goto label_29c828;
        }
    }
    ctx->pc = 0x29C7FCu;
    // 0x29c7fc: 0x431818
    ctx->pc = 0x29c7fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29c800: 0x3c020032
    ctx->pc = 0x29c800u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x29c804: 0x24421bc0
    ctx->pc = 0x29c804u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x29c808: 0x621821
    ctx->pc = 0x29c808u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29c80c: 0xc4600060
    ctx->pc = 0x29c80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c810: 0xe7a00000
    ctx->pc = 0x29c810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29c814: 0xc4600064
    ctx->pc = 0x29c814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c818: 0xe7a00004
    ctx->pc = 0x29c818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29c81c: 0xc4600068
    ctx->pc = 0x29c81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c820: 0xe7a00008
    ctx->pc = 0x29c820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29c824: 0x3a0882d
    ctx->pc = 0x29c824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29c828:
    // 0x29c828: 0x8e0400d4
    ctx->pc = 0x29c828u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x29c82c: 0x10800008
    ctx->pc = 0x29C82Cu;
    {
        const bool branch_taken_0x29c82c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x29C830u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29c82c) {
            ctx->pc = 0x29C850u;
            goto label_29c850;
        }
    }
    ctx->pc = 0x29C834u;
    // 0x29c834: 0x2606010c
    ctx->pc = 0x29c834u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 268));
    // 0x29c838: 0xc64c0060
    ctx->pc = 0x29c838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29c83c: 0x44806800
    ctx->pc = 0x29c83cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x29c840: 0x26070114
    ctx->pc = 0x29c840u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 276));
    // 0x29c844: 0xc64e0068
    ctx->pc = 0x29c844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x29c848: 0xc0a70e8
    ctx->pc = 0x29C848u;
    SET_GPR_U32(ctx, 31, 0x29C850u);
    ctx->pc = 0x29C84Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->pc = 0x29C3A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NodeLookAtPos_0x29c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C850u; }
    }
    if (ctx->pc != 0x29C850u) { return; }
    ctx->pc = 0x29C850u;
label_29c850:
    // 0x29c850: 0x8e0400d8
    ctx->pc = 0x29c850u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x29c854: 0x10800008
    ctx->pc = 0x29C854u;
    {
        const bool branch_taken_0x29c854 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x29C858u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29c854) {
            ctx->pc = 0x29C878u;
            goto label_29c878;
        }
    }
    ctx->pc = 0x29C85Cu;
    // 0x29c85c: 0x26060110
    ctx->pc = 0x29c85cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 272));
    // 0x29c860: 0xc64c0064
    ctx->pc = 0x29c860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29c864: 0x44806800
    ctx->pc = 0x29c864u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x29c868: 0x26070118
    ctx->pc = 0x29c868u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 280));
    // 0x29c86c: 0xc64e006c
    ctx->pc = 0x29c86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x29c870: 0xc0a70e8
    ctx->pc = 0x29C870u;
    SET_GPR_U32(ctx, 31, 0x29C878u);
    ctx->pc = 0x29C874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->pc = 0x29C3A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NodeLookAtPos_0x29c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C878u; }
    }
    if (ctx->pc != 0x29C878u) { return; }
    ctx->pc = 0x29C878u;
label_29c878:
    // 0x29c878: 0xdfbf0040
    ctx->pc = 0x29c878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29c87c:
    // 0x29c87c: 0xdfb20030
    ctx->pc = 0x29c87cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29c880: 0xdfb10020
    ctx->pc = 0x29c880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c884: 0xdfb00010
    ctx->pc = 0x29c884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c888: 0x3e00008
    ctx->pc = 0x29C888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C88Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29C7B8u: goto label_29c7b8;
            case 0x29C7BCu: goto label_29c7bc;
            case 0x29C7E8u: goto label_29c7e8;
            case 0x29C828u: goto label_29c828;
            case 0x29C850u: goto label_29c850;
            case 0x29C878u: goto label_29c878;
            case 0x29C87Cu: goto label_29c87c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29C890u;
}
