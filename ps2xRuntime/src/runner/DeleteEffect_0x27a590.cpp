#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DeleteEffect
// Address: 0x27a590 - 0x27a7a0
void DeleteEffect_0x27a590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27a590u;

label_27a590:
    // 0x27a590: 0x27bdffd0
    ctx->pc = 0x27a590u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27a594: 0xffbf0020
    ctx->pc = 0x27a594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27a598: 0xffb10010
    ctx->pc = 0x27a598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27a59c: 0x80882d
    ctx->pc = 0x27a59cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a5a0: 0x2e220040
    ctx->pc = 0x27a5a0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 64));
    // 0x27a5a4: 0x10400078
    ctx->pc = 0x27A5A4u;
    {
        const bool branch_taken_0x27a5a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27A5A8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x27a5a4) {
            ctx->pc = 0x27A788u;
            goto label_27a788;
        }
    }
    ctx->pc = 0x27A5ACu;
    // 0x27a5ac: 0x240300f0
    ctx->pc = 0x27a5acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27a5b0: 0x2231818
    ctx->pc = 0x27a5b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27a5b4: 0x3c020034
    ctx->pc = 0x27a5b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27a5b8: 0x24420eb0
    ctx->pc = 0x27a5b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27a5bc: 0x14a0000c
    ctx->pc = 0x27A5BCu;
    {
        const bool branch_taken_0x27a5bc = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x27A5C0u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x27a5bc) {
            ctx->pc = 0x27A5F0u;
            goto label_27a5f0;
        }
    }
    ctx->pc = 0x27A5C4u;
    // 0x27a5c4: 0xc6010070
    ctx->pc = 0x27a5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a5c8: 0x44800000
    ctx->pc = 0x27a5c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x27a5cc: 0x46010034
    ctx->pc = 0x27a5ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a5d0: 0x0
    ctx->pc = 0x27a5d0u;
    // NOP
    // 0x27a5d4: 0x45000006
    ctx->pc = 0x27A5D4u;
    {
        const bool branch_taken_0x27a5d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A5D8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x27a5d4) {
            ctx->pc = 0x27A5F0u;
            goto label_27a5f0;
        }
    }
    ctx->pc = 0x27A5DCu;
    // 0x27a5dc: 0xc440ffb4
    ctx->pc = 0x27a5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a5e0: 0x46010034
    ctx->pc = 0x27a5e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a5e4: 0x0
    ctx->pc = 0x27a5e4u;
    // NOP
    // 0x27a5e8: 0x45010068
    ctx->pc = 0x27A5E8u;
    {
        const bool branch_taken_0x27a5e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A5ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27a5e8) {
            ctx->pc = 0x27A78Cu;
            goto label_27a78c;
        }
    }
    ctx->pc = 0x27A5F0u;
label_27a5f0:
    // 0x27a5f0: 0x860200c4
    ctx->pc = 0x27a5f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x27a5f4: 0x14400017
    ctx->pc = 0x27A5F4u;
    {
        const bool branch_taken_0x27a5f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27A5F8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x27a5f4) {
            ctx->pc = 0x27A654u;
            goto label_27a654;
        }
    }
    ctx->pc = 0x27A5FCu;
    // 0x27a5fc: 0x8e030060
    ctx->pc = 0x27a5fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x27a600: 0x2c620027
    ctx->pc = 0x27a600u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 39));
    // 0x27a604: 0x10400012
    ctx->pc = 0x27A604u;
    {
        const bool branch_taken_0x27a604 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27A608u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 35));
        if (branch_taken_0x27a604) {
            ctx->pc = 0x27A650u;
            goto label_27a650;
        }
    }
    ctx->pc = 0x27A60Cu;
    // 0x27a60c: 0x14400011
    ctx->pc = 0x27A60Cu;
    {
        const bool branch_taken_0x27a60c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27A610u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x27a60c) {
            ctx->pc = 0x27A654u;
            goto label_27a654;
        }
    }
    ctx->pc = 0x27A614u;
    // 0x27a614: 0x960500bc
    ctx->pc = 0x27a614u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x27a618: 0x24a2ffff
    ctx->pc = 0x27a618u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x27a61c: 0x2c420004
    ctx->pc = 0x27a61cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 4));
    // 0x27a620: 0x1040000c
    ctx->pc = 0x27A620u;
    {
        const bool branch_taken_0x27a620 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27A624u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 16));
        if (branch_taken_0x27a620) {
            ctx->pc = 0x27A654u;
            goto label_27a654;
        }
    }
    ctx->pc = 0x27A628u;
    // 0x27a628: 0x52c03
    ctx->pc = 0x27a628u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x27a62c: 0x24062b00
    ctx->pc = 0x27a62cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x27a630: 0xa63018
    ctx->pc = 0x27a630u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27a634: 0x3c020032
    ctx->pc = 0x27a634u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x27a638: 0x2442f0e0
    ctx->pc = 0x27a638u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294963424));
    // 0x27a63c: 0xc23021
    ctx->pc = 0x27a63cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x27a640: 0x24040012
    ctx->pc = 0x27a640u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18));
    // 0x27a644: 0x24a5ffff
    ctx->pc = 0x27a644u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x27a648: 0xc0a3a1c
    ctx->pc = 0x27A648u;
    SET_GPR_U32(ctx, 31, 0x27A650u);
    ctx->pc = 0x27A64Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 64));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A650u; }
    }
    if (ctx->pc != 0x27A650u) { return; }
    ctx->pc = 0x27A650u;
label_27a650:
    // 0x27a650: 0x3c030034
    ctx->pc = 0x27a650u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_27a654:
    // 0x27a654: 0x8c62e888
    ctx->pc = 0x27a654u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294961288)));
    // 0x27a658: 0x56220004
    ctx->pc = 0x27A658u;
    {
        const bool branch_taken_0x27a658 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x27a658) {
            ctx->pc = 0x27A65Cu;
            SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
            ctx->pc = 0x27A66Cu;
            goto label_27a66c;
        }
    }
    ctx->pc = 0x27A660u;
    // 0x27a660: 0x2402ffff
    ctx->pc = 0x27a660u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27a664: 0xac62e888
    ctx->pc = 0x27a664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961288), GPR_U32(ctx, 2));
    // 0x27a668: 0x3c030034
    ctx->pc = 0x27a668u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_27a66c:
    // 0x27a66c: 0x8c62e8a4
    ctx->pc = 0x27a66cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294961316)));
    // 0x27a670: 0x56220004
    ctx->pc = 0x27A670u;
    {
        const bool branch_taken_0x27a670 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x27a670) {
            ctx->pc = 0x27A674u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x27A684u;
            goto label_27a684;
        }
    }
    ctx->pc = 0x27A678u;
    // 0x27a678: 0x2402ffff
    ctx->pc = 0x27a678u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27a67c: 0xac62e8a4
    ctx->pc = 0x27a67cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961316), GPR_U32(ctx, 2));
    // 0x27a680: 0xc6010068
    ctx->pc = 0x27a680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a684:
    // 0x27a684: 0x44800000
    ctx->pc = 0x27a684u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x27a688: 0x46010034
    ctx->pc = 0x27a688u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a68c: 0x0
    ctx->pc = 0x27a68cu;
    // NOP
    // 0x27a690: 0x45020009
    ctx->pc = 0x27A690u;
    {
        const bool branch_taken_0x27a690 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a690) {
            ctx->pc = 0x27A694u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->pc = 0x27A6B8u;
            goto label_27a6b8;
        }
    }
    ctx->pc = 0x27A698u;
    // 0x27a698: 0x860400e8
    ctx->pc = 0x27a698u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x27a69c: 0x4820006
    ctx->pc = 0x27A69Cu;
    {
        const bool branch_taken_0x27a69c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x27a69c) {
            ctx->pc = 0x27A6A0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->pc = 0x27A6B8u;
            goto label_27a6b8;
        }
    }
    ctx->pc = 0x27A6A4u;
    // 0x27a6a4: 0xc09e964
    ctx->pc = 0x27A6A4u;
    SET_GPR_U32(ctx, 31, 0x27A6ACu);
    ctx->pc = 0x27A6A8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x27A590u;
    goto label_27a590;
    ctx->pc = 0x27A6ACu;
label_27a6ac:
    // 0x27a6ac: 0x2402ffff
    ctx->pc = 0x27a6acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27a6b0: 0xa60200e8
    ctx->pc = 0x27a6b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 232), (uint16_t)GPR_U32(ctx, 2));
    // 0x27a6b4: 0x8e020018
    ctx->pc = 0x27a6b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_27a6b8:
    // 0x27a6b8: 0x50400004
    ctx->pc = 0x27A6B8u;
    {
        const bool branch_taken_0x27a6b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x27a6b8) {
            ctx->pc = 0x27A6BCu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->pc = 0x27A6CCu;
            goto label_27a6cc;
        }
    }
    ctx->pc = 0x27A6C0u;
    // 0x27a6c0: 0xc08496c
    ctx->pc = 0x27A6C0u;
    SET_GPR_U32(ctx, 31, 0x27A6C8u);
    ctx->pc = 0x27A6C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24));
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A6C8u; }
    }
    if (ctx->pc != 0x27A6C8u) { return; }
    ctx->pc = 0x27A6C8u;
    // 0x27a6c8: 0x8e040014
    ctx->pc = 0x27a6c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_27a6cc:
    // 0x27a6cc: 0x5080000a
    ctx->pc = 0x27A6CCu;
    {
        const bool branch_taken_0x27a6cc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x27a6cc) {
            ctx->pc = 0x27A6D0u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
            ctx->pc = 0x27A6F8u;
            goto label_27a6f8;
        }
    }
    ctx->pc = 0x27A6D4u;
    // 0x27a6d4: 0x8c820078
    ctx->pc = 0x27a6d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x27a6d8: 0x10400003
    ctx->pc = 0x27A6D8u;
    {
        const bool branch_taken_0x27a6d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27A6DCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27a6d8) {
            ctx->pc = 0x27A6E8u;
            goto label_27a6e8;
        }
    }
    ctx->pc = 0x27A6E0u;
    // 0x27a6e0: 0xc09ea22
    ctx->pc = 0x27A6E0u;
    SET_GPR_U32(ctx, 31, 0x27A6E8u);
    ctx->pc = 0x27A6E4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x27A888u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxDeleteParented_0x27a888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A6E8u; }
    }
    if (ctx->pc != 0x27A6E8u) { return; }
    ctx->pc = 0x27A6E8u;
label_27a6e8:
    // 0x27a6e8: 0x8e040014
    ctx->pc = 0x27a6e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x27a6ec: 0xc0b3f1a
    ctx->pc = 0x27A6ECu;
    SET_GPR_U32(ctx, 31, 0x27A6F4u);
    ctx->pc = 0x27A6F0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A6F4u; }
    }
    if (ctx->pc != 0x27A6F4u) { return; }
    ctx->pc = 0x27A6F4u;
    // 0x27a6f4: 0xae000060
    ctx->pc = 0x27a6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_27a6f8:
    // 0x27a6f8: 0xa60000c4
    ctx->pc = 0x27a6f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 196), (uint16_t)GPR_U32(ctx, 0));
    // 0x27a6fc: 0xae000014
    ctx->pc = 0x27a6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x27a700: 0x2402ffff
    ctx->pc = 0x27a700u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27a704: 0xa60200e8
    ctx->pc = 0x27a704u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 232), (uint16_t)GPR_U32(ctx, 2));
    // 0x27a708: 0xae000068
    ctx->pc = 0x27a708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x27a70c: 0xae0000c8
    ctx->pc = 0x27a70cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x27a710: 0xae000074
    ctx->pc = 0x27a710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x27a714: 0xae000078
    ctx->pc = 0x27a714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x27a718: 0xae00006c
    ctx->pc = 0x27a718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x27a71c: 0xae000064
    ctx->pc = 0x27a71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x27a720: 0xae0000b4
    ctx->pc = 0x27a720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x27a724: 0xae0000b8
    ctx->pc = 0x27a724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x27a728: 0xae0000ac
    ctx->pc = 0x27a728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x27a72c: 0x3c013f80
    ctx->pc = 0x27a72cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x27a730: 0x44810000
    ctx->pc = 0x27a730u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27a734: 0xe60000b0
    ctx->pc = 0x27a734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x27a738: 0x3c01bf80
    ctx->pc = 0x27a738u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x27a73c: 0x44810000
    ctx->pc = 0x27a73cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27a740: 0xe600009c
    ctx->pc = 0x27a740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x27a744: 0xa60000bc
    ctx->pc = 0x27a744u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 188), (uint16_t)GPR_U32(ctx, 0));
    // 0x27a748: 0xae0000e0
    ctx->pc = 0x27a748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x27a74c: 0xae0000e4
    ctx->pc = 0x27a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x27a750: 0xae0000ec
    ctx->pc = 0x27a750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
    // 0x27a754: 0x3c030034
    ctx->pc = 0x27a754u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27a758: 0x8c6200e4
    ctx->pc = 0x27a758u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 228)));
    // 0x27a75c: 0xa60200ea
    ctx->pc = 0x27a75cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 234), (uint16_t)GPR_U32(ctx, 2));
    // 0x27a760: 0x24420001
    ctx->pc = 0x27a760u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x27a764: 0xac6200e4
    ctx->pc = 0x27a764u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 228), GPR_U32(ctx, 2));
    // 0x27a768: 0x28427f00
    ctx->pc = 0x27a768u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 32512));
    // 0x27a76c: 0x54400004
    ctx->pc = 0x27A76Cu;
    {
        const bool branch_taken_0x27a76c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x27a76c) {
            ctx->pc = 0x27A770u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->pc = 0x27A780u;
            goto label_27a780;
        }
    }
    ctx->pc = 0x27A774u;
    // 0x27a774: 0x24020100
    ctx->pc = 0x27a774u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
    // 0x27a778: 0xac6200e4
    ctx->pc = 0x27a778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 228), GPR_U32(ctx, 2));
    // 0x27a77c: 0xae000010
    ctx->pc = 0x27a77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_27a780:
    // 0x27a780: 0xc09e934
    ctx->pc = 0x27A780u;
    SET_GPR_U32(ctx, 31, 0x27A788u);
    ctx->pc = 0x27A784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27A4D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ZeroEffect_0x27a4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A788u; }
    }
    if (ctx->pc != 0x27A788u) { return; }
    ctx->pc = 0x27A788u;
label_27a788:
    // 0x27a788: 0x2402ffff
    ctx->pc = 0x27a788u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_27a78c:
    // 0x27a78c: 0xdfbf0020
    ctx->pc = 0x27a78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a790: 0xdfb10010
    ctx->pc = 0x27a790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a794: 0xdfb00000
    ctx->pc = 0x27a794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a798: 0x3e00008
    ctx->pc = 0x27A798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A79Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27A590u: goto label_27a590;
            case 0x27A5F0u: goto label_27a5f0;
            case 0x27A650u: goto label_27a650;
            case 0x27A654u: goto label_27a654;
            case 0x27A66Cu: goto label_27a66c;
            case 0x27A684u: goto label_27a684;
            case 0x27A6ACu: goto label_27a6ac;
            case 0x27A6B8u: goto label_27a6b8;
            case 0x27A6CCu: goto label_27a6cc;
            case 0x27A6E8u: goto label_27a6e8;
            case 0x27A6F8u: goto label_27a6f8;
            case 0x27A780u: goto label_27a780;
            case 0x27A788u: goto label_27a788;
            case 0x27A78Cu: goto label_27a78c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27A7A0u;
}
