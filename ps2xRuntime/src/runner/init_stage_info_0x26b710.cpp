#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_stage_info
// Address: 0x26b710 - 0x26b858
void init_stage_info_0x26b710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26b710u;

    // 0x26b710: 0x27bdffd0
    ctx->pc = 0x26b710u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26b714: 0xffbf0020
    ctx->pc = 0x26b714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26b718: 0xffb10010
    ctx->pc = 0x26b718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26b71c: 0xffb00000
    ctx->pc = 0x26b71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26b720: 0x882d
    ctx->pc = 0x26b720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b724: 0x3c03003c
    ctx->pc = 0x26b724u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26b728: 0x2402005b
    ctx->pc = 0x26b728u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 91));
    // 0x26b72c: 0xac6239bc
    ctx->pc = 0x26b72cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14780), GPR_U32(ctx, 2));
    // 0x26b730: 0x3c02003c
    ctx->pc = 0x26b730u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26b734: 0x3c013ccc
    ctx->pc = 0x26b734u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15564 << 16));
    // 0x26b738: 0x3421cccd
    ctx->pc = 0x26b738u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x26b73c: 0x44810000
    ctx->pc = 0x26b73cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26b740: 0xe44038f8
    ctx->pc = 0x26b740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14584), bits); }
    // 0x26b744: 0x3c020034
    ctx->pc = 0x26b744u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b748: 0x8c42e7c8
    ctx->pc = 0x26b748u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x26b74c: 0x8c420000
    ctx->pc = 0x26b74cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b750: 0x30420001
    ctx->pc = 0x26b750u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x26b754: 0x10400009
    ctx->pc = 0x26B754u;
    {
        const bool branch_taken_0x26b754 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26B758u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26b754) {
            ctx->pc = 0x26B77Cu;
            goto label_26b77c;
        }
    }
    ctx->pc = 0x26B75Cu;
    // 0x26b75c: 0x240400af
    ctx->pc = 0x26b75cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 175));
    // 0x26b760: 0x3c013f80
    ctx->pc = 0x26b760u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x26b764: 0x44816000
    ctx->pc = 0x26b764u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x26b768: 0xc0809f2
    ctx->pc = 0x26B768u;
    SET_GPR_U32(ctx, 31, 0x26B770u);
    ctx->pc = 0x26B76Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2027C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringTextWidth_0x2027c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B770u; }
    }
    if (ctx->pc != 0x26B770u) { return; }
    ctx->pc = 0x26B770u;
    // 0x26b770: 0x40882d
    ctx->pc = 0x26b770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b774: 0x1000000d
    ctx->pc = 0x26B774u;
    {
        const bool branch_taken_0x26b774 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26B778u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 175));
        if (branch_taken_0x26b774) {
            ctx->pc = 0x26B7ACu;
            goto label_26b7ac;
        }
    }
    ctx->pc = 0x26B77Cu;
label_26b77c:
    // 0x26b77c: 0x3c020034
    ctx->pc = 0x26b77cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b780: 0x8c42e7c8
    ctx->pc = 0x26b780u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x26b784: 0x8c420000
    ctx->pc = 0x26b784u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b788: 0x30420004
    ctx->pc = 0x26b788u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x26b78c: 0x1040000e
    ctx->pc = 0x26B78Cu;
    {
        const bool branch_taken_0x26b78c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26B790u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 176));
        if (branch_taken_0x26b78c) {
            ctx->pc = 0x26B7C8u;
            goto label_26b7c8;
        }
    }
    ctx->pc = 0x26B794u;
    // 0x26b794: 0x3c013f80
    ctx->pc = 0x26b794u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x26b798: 0x44816000
    ctx->pc = 0x26b798u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x26b79c: 0xc0809f2
    ctx->pc = 0x26B79Cu;
    SET_GPR_U32(ctx, 31, 0x26B7A4u);
    ctx->pc = 0x26B7A0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2027C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringTextWidth_0x2027c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B7A4u; }
    }
    if (ctx->pc != 0x26B7A4u) { return; }
    ctx->pc = 0x26B7A4u;
    // 0x26b7a4: 0x40882d
    ctx->pc = 0x26b7a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b7a8: 0x240400b0
    ctx->pc = 0x26b7a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 176));
label_26b7ac:
    // 0x26b7ac: 0x2405ffff
    ctx->pc = 0x26b7acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26b7b0: 0x3c013f80
    ctx->pc = 0x26b7b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x26b7b4: 0x44816000
    ctx->pc = 0x26b7b4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x26b7b8: 0xc080a62
    ctx->pc = 0x26B7B8u;
    SET_GPR_U32(ctx, 31, 0x26B7C0u);
    ctx->pc = 0x26B7BCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202988u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringTextHeight_0x202988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B7C0u; }
    }
    if (ctx->pc != 0x26B7C0u) { return; }
    ctx->pc = 0x26B7C0u;
    // 0x26b7c0: 0x10000006
    ctx->pc = 0x26B7C0u;
    {
        const bool branch_taken_0x26b7c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26B7C4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26b7c0) {
            ctx->pc = 0x26B7DCu;
            goto label_26b7dc;
        }
    }
    ctx->pc = 0x26B7C8u;
label_26b7c8:
    // 0x26b7c8: 0x3c020034
    ctx->pc = 0x26b7c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b7cc: 0x8c42e7f4
    ctx->pc = 0x26b7ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961140)));
    // 0x26b7d0: 0x14400002
    ctx->pc = 0x26B7D0u;
    {
        const bool branch_taken_0x26b7d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26B7D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26b7d0) {
            ctx->pc = 0x26B7DCu;
            goto label_26b7dc;
        }
    }
    ctx->pc = 0x26B7D8u;
    // 0x26b7d8: 0xac4039c4
    ctx->pc = 0x26b7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14788), GPR_U32(ctx, 0));
label_26b7dc:
    // 0x26b7dc: 0x1a20001a
    ctx->pc = 0x26B7DCu;
    {
        const bool branch_taken_0x26b7dc = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x26B7E0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x26b7dc) {
            ctx->pc = 0x26B848u;
            goto label_26b848;
        }
    }
    ctx->pc = 0x26B7E4u;
    // 0x26b7e4: 0x2631003c
    ctx->pc = 0x26b7e4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 60));
    // 0x26b7e8: 0x26100010
    ctx->pc = 0x26b7e8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
    // 0x26b7ec: 0x112fc2
    ctx->pc = 0x26b7ecu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 17), 31));
    // 0x26b7f0: 0x2252821
    ctx->pc = 0x26b7f0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x26b7f4: 0x52843
    ctx->pc = 0x26b7f4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x26b7f8: 0x24030100
    ctx->pc = 0x26b7f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 256));
    // 0x26b7fc: 0x1037c2
    ctx->pc = 0x26b7fcu;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 16), 31));
    // 0x26b800: 0x2063021
    ctx->pc = 0x26b800u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x26b804: 0x63043
    ctx->pc = 0x26b804u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x26b808: 0x2402006c
    ctx->pc = 0x26b808u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 108));
    // 0x26b80c: 0x3c04003b
    ctx->pc = 0x26b80cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x26b810: 0x2484a600
    ctx->pc = 0x26b810u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944256));
    // 0x26b814: 0x652823
    ctx->pc = 0x26b814u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x26b818: 0xc0b0c08
    ctx->pc = 0x26B818u;
    SET_GPR_U32(ctx, 31, 0x26B820u);
    ctx->pc = 0x26B81Cu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B820u; }
    }
    if (ctx->pc != 0x26B820u) { return; }
    ctx->pc = 0x26B820u;
    // 0x26b820: 0x3c03003c
    ctx->pc = 0x26b820u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26b824: 0xac6238f4
    ctx->pc = 0x26b824u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14580), GPR_U32(ctx, 2));
    // 0x26b828: 0x40202d
    ctx->pc = 0x26b828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b82c: 0x220282d
    ctx->pc = 0x26b82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b830: 0x200302d
    ctx->pc = 0x26b830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b834: 0xdfbf0020
    ctx->pc = 0x26b834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b838: 0xdfb10010
    ctx->pc = 0x26b838u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b83c: 0xdfb00000
    ctx->pc = 0x26b83cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b840: 0x80b0cf6
    ctx->pc = 0x26B840u;
    ctx->pc = 0x26B844u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2C33D8u;
    MBBlitSetSize_0x2c33d8(rdram, ctx, runtime); return;
    ctx->pc = 0x26B848u;
label_26b848:
    // 0x26b848: 0xdfb10010
    ctx->pc = 0x26b848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b84c: 0xdfb00000
    ctx->pc = 0x26b84cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b850: 0x3e00008
    ctx->pc = 0x26B850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B854u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B77Cu: goto label_26b77c;
            case 0x26B7ACu: goto label_26b7ac;
            case 0x26B7C8u: goto label_26b7c8;
            case 0x26B7DCu: goto label_26b7dc;
            case 0x26B848u: goto label_26b848;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B858u;
}
