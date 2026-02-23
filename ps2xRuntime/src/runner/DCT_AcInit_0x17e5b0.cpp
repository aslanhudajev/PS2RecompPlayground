#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DCT_AcInit
// Address: 0x17e5b0 - 0x17e6cc
void DCT_AcInit_0x17e5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DCT_AcInit");


    ctx->pc = 0x17e5b0u;

    // 0x17e5b0: 0x27bdff70
    ctx->pc = 0x17e5b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x17e5b4: 0xffb70070
    ctx->pc = 0x17e5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x17e5b8: 0xffb60060
    ctx->pc = 0x17e5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x17e5bc: 0xffbf0080
    ctx->pc = 0x17e5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x17e5c0: 0xffb50050
    ctx->pc = 0x17e5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x17e5c4: 0xffb40040
    ctx->pc = 0x17e5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x17e5c8: 0xffb30030
    ctx->pc = 0x17e5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x17e5cc: 0xffb20020
    ctx->pc = 0x17e5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17e5d0: 0xffb10010
    ctx->pc = 0x17e5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17e5d4: 0xc06016e
    ctx->pc = 0x17E5D4u;
    SET_GPR_U32(ctx, 31, 0x17E5DCu);
    ctx->pc = 0x17E5D8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x1805B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DCT_GetVerStr_0x1805b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5DCu; }
        else if (ctx->pc != 0x17E5DCu) { ctx->pc = 0x17E5DCu; }
    }
    if (ctx->pc != 0x17E5DCu) { return; }
    ctx->pc = 0x17E5DCu;
    // 0x17e5dc: 0x3c03002e
    ctx->pc = 0x17e5dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)46 << 16));
    // 0x17e5e0: 0xac621bf8
    ctx->pc = 0x17e5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7160), GPR_U32(ctx, 2));
    // 0x17e5e4: 0x3c03002e
    ctx->pc = 0x17e5e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)46 << 16));
    // 0x17e5e8: 0x3c02002e
    ctx->pc = 0x17e5e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x17e5ec: 0x24761c00
    ctx->pc = 0x17e5ecu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 3), 7168));
    // 0x17e5f0: 0x24571e00
    ctx->pc = 0x17e5f0u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 7680));
    // 0x17e5f4: 0x182d
    ctx->pc = 0x17e5f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e5f8:
    // 0x17e5f8: 0x3415ff80
    ctx->pc = 0x17e5f8u;
    SET_GPR_U32(ctx, 21, OR32(GPR_U32(ctx, 0), 65408));
    // 0x17e5fc: 0x15abbc
    ctx->pc = 0x17e5fcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 14));
    // 0x17e600: 0x14600003
    ctx->pc = 0x17E600u;
    {
        const bool branch_taken_0x17e600 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x17E604u;
        SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 3), 6));
        if (branch_taken_0x17e600) {
            ctx->pc = 0x17E610u;
            goto label_17e610;
        }
    }
    ctx->pc = 0x17E608u;
    // 0x17e608: 0x3c01002c
    ctx->pc = 0x17e608u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x17e60c: 0xdc35c1b8
    ctx->pc = 0x17e60cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 1), 4294951352)));
label_17e610:
    // 0x17e610: 0x380c0
    ctx->pc = 0x17e610u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 3), 3));
    // 0x17e614: 0x60202d
    ctx->pc = 0x17e614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e618: 0xc052e16
    ctx->pc = 0x17E618u;
    SET_GPR_U32(ctx, 31, 0x17E620u);
    ctx->pc = 0x17E61Cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E620u; }
        else if (ctx->pc != 0x17E620u) { ctx->pc = 0x17E620u; }
    }
    if (ctx->pc != 0x17E620u) { return; }
    ctx->pc = 0x17E620u;
    // 0x17e620: 0x2168021
    ctx->pc = 0x17e620u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x17e624: 0x3c01002c
    ctx->pc = 0x17e624u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x17e628: 0xdc25c1c0
    ctx->pc = 0x17e628u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294951360)));
    // 0x17e62c: 0x40202d
    ctx->pc = 0x17e62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e630: 0x2378821
    ctx->pc = 0x17e630u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x17e634: 0xc052cb8
    ctx->pc = 0x17E634u;
    SET_GPR_U32(ctx, 31, 0x17E63Cu);
    ctx->pc = 0x17E638u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E63Cu; }
        else if (ctx->pc != 0x17E63Cu) { ctx->pc = 0x17E63Cu; }
    }
    if (ctx->pc != 0x17E63Cu) { return; }
    ctx->pc = 0x17E63Cu;
    // 0x17e63c: 0x40982d
    ctx->pc = 0x17e63cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17e640:
    // 0x17e640: 0xc052e16
    ctx->pc = 0x17E640u;
    SET_GPR_U32(ctx, 31, 0x17E648u);
    ctx->pc = 0x17E644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E648u; }
        else if (ctx->pc != 0x17E648u) { ctx->pc = 0x17E648u; }
    }
    if (ctx->pc != 0x17E648u) { return; }
    ctx->pc = 0x17E648u;
    // 0x17e648: 0x26520001
    ctx->pc = 0x17e648u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x17e64c: 0x3405ff80
    ctx->pc = 0x17e64cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65408));
    // 0x17e650: 0x52bbc
    ctx->pc = 0x17e650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x17e654: 0xc052c88
    ctx->pc = 0x17E654u;
    SET_GPR_U32(ctx, 31, 0x17E65Cu);
    ctx->pc = 0x17E658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B220u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x14b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E65Cu; }
        else if (ctx->pc != 0x17E65Cu) { ctx->pc = 0x17E65Cu; }
    }
    if (ctx->pc != 0x17E65Cu) { return; }
    ctx->pc = 0x17E65Cu;
    // 0x17e65c: 0x40282d
    ctx->pc = 0x17e65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e660: 0xc052cb8
    ctx->pc = 0x17E660u;
    SET_GPR_U32(ctx, 31, 0x17E668u);
    ctx->pc = 0x17E664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E668u; }
        else if (ctx->pc != 0x17E668u) { ctx->pc = 0x17E668u; }
    }
    if (ctx->pc != 0x17E668u) { return; }
    ctx->pc = 0x17E668u;
    // 0x17e668: 0xc054060
    ctx->pc = 0x17E668u;
    SET_GPR_U32(ctx, 31, 0x17E670u);
    ctx->pc = 0x17E66Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x150180u;
    {
        const uint32_t __entryPc = ctx->pc;
        cos_0x150180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E670u; }
        else if (ctx->pc != 0x17E670u) { ctx->pc = 0x17E670u; }
    }
    if (ctx->pc != 0x17E670u) { return; }
    ctx->pc = 0x17E670u;
    // 0x17e670: 0x40282d
    ctx->pc = 0x17e670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e674: 0xc052cb8
    ctx->pc = 0x17E674u;
    SET_GPR_U32(ctx, 31, 0x17E67Cu);
    ctx->pc = 0x17E678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E67Cu; }
        else if (ctx->pc != 0x17E67Cu) { ctx->pc = 0x17E67Cu; }
    }
    if (ctx->pc != 0x17E67Cu) { return; }
    ctx->pc = 0x17E67Cu;
    // 0x17e67c: 0xfe020000
    ctx->pc = 0x17e67cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x17e680: 0x2a430008
    ctx->pc = 0x17e680u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), 8));
    // 0x17e684: 0xfe220000
    ctx->pc = 0x17e684u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x17e688: 0x26100040
    ctx->pc = 0x17e688u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 64));
    // 0x17e68c: 0x1460ffec
    ctx->pc = 0x17E68Cu;
    {
        const bool branch_taken_0x17e68c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x17E690u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x17e68c) {
            ctx->pc = 0x17E640u;
            goto label_17e640;
        }
    }
    ctx->pc = 0x17E694u;
    // 0x17e694: 0x280182d
    ctx->pc = 0x17e694u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e698: 0x28620008
    ctx->pc = 0x17e698u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 8));
    // 0x17e69c: 0x1440ffd6
    ctx->pc = 0x17E69Cu;
    {
        const bool branch_taken_0x17e69c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17E6A0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x17e69c) {
            ctx->pc = 0x17E5F8u;
            goto label_17e5f8;
        }
    }
    ctx->pc = 0x17E6A4u;
    // 0x17e6a4: 0xdfb70070
    ctx->pc = 0x17e6a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17e6a8: 0xdfb60060
    ctx->pc = 0x17e6a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17e6ac: 0xdfb50050
    ctx->pc = 0x17e6acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17e6b0: 0xdfb40040
    ctx->pc = 0x17e6b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e6b4: 0xdfb30030
    ctx->pc = 0x17e6b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e6b8: 0xdfb20020
    ctx->pc = 0x17e6b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e6bc: 0xdfb10010
    ctx->pc = 0x17e6bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e6c0: 0xdfb00000
    ctx->pc = 0x17e6c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e6c4: 0x3e00008
    ctx->pc = 0x17E6C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E6C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E5F8u: goto label_17e5f8;
            case 0x17E610u: goto label_17e610;
            case 0x17E640u: goto label_17e640;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E6CCu;
}
