#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: st2KanKemu__14TrnKomono2TaskFv
// Address: 0x2218c0 - 0x2219a0
void st2KanKemu__14TrnKomono2TaskFv_0x2218c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("st2KanKemu__14TrnKomono2TaskFv");


    ctx->pc = 0x2218c0u;

    // 0x2218c0: 0x27bdfff0
    ctx->pc = 0x2218c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2218c4: 0x7fbf0000
    ctx->pc = 0x2218c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2218c8: 0x8f858c48
    ctx->pc = 0x2218c8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x2218cc: 0x24020198
    ctx->pc = 0x2218ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 408));
    // 0x2218d0: 0x8ca40004
    ctx->pc = 0x2218d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2218d4: 0x41840
    ctx->pc = 0x2218d4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x2218d8: 0x641821
    ctx->pc = 0x2218d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2218dc: 0x31880
    ctx->pc = 0x2218dcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2218e0: 0x641821
    ctx->pc = 0x2218e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2218e4: 0x31900
    ctx->pc = 0x2218e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2218e8: 0x652021
    ctx->pc = 0x2218e8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2218ec: 0x848300d0
    ctx->pc = 0x2218ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x2218f0: 0x14620019
    ctx->pc = 0x2218F0u;
    {
        const bool branch_taken_0x2218f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2218f0) {
            ctx->pc = 0x221958u;
            goto label_221958;
        }
    }
    ctx->pc = 0x2218F8u;
    // 0x2218f8: 0xc48100c0
    ctx->pc = 0x2218f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2218fc: 0x3c0243f0
    ctx->pc = 0x2218fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17392 << 16));
    // 0x221900: 0x44820000
    ctx->pc = 0x221900u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x221904: 0x0
    ctx->pc = 0x221904u;
    // NOP
    // 0x221908: 0x46010036
    ctx->pc = 0x221908u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22190c: 0x0
    ctx->pc = 0x22190cu;
    // NOP
    // 0x221910: 0x4502000d
    ctx->pc = 0x221910u;
    {
        const bool branch_taken_0x221910 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x221910) {
            ctx->pc = 0x221914u;
            SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->pc = 0x221948u;
            goto label_221948;
        }
    }
    ctx->pc = 0x221918u;
    // 0x221918: 0x3442999a
    ctx->pc = 0x221918u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x22191c: 0x44820000
    ctx->pc = 0x22191cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x221920: 0x0
    ctx->pc = 0x221920u;
    // NOP
    // 0x221924: 0x46000834
    ctx->pc = 0x221924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221928: 0x0
    ctx->pc = 0x221928u;
    // NOP
    // 0x22192c: 0x45010003
    ctx->pc = 0x22192Cu;
    {
        const bool branch_taken_0x22192c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x221930u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x22192c) {
            ctx->pc = 0x22193Cu;
            goto label_22193c;
        }
    }
    ctx->pc = 0x221934u;
    // 0x221934: 0x10000003
    ctx->pc = 0x221934u;
    {
        const bool branch_taken_0x221934 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x221934) {
            ctx->pc = 0x221944u;
            goto label_221944;
        }
    }
    ctx->pc = 0x22193Cu;
label_22193c:
    // 0x22193c: 0x10000002
    ctx->pc = 0x22193Cu;
    {
        const bool branch_taken_0x22193c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x22193c) {
            ctx->pc = 0x221948u;
            goto label_221948;
        }
    }
    ctx->pc = 0x221944u;
label_221944:
    // 0x221944: 0x70001628
    ctx->pc = 0x221944u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_221948:
    // 0x221948: 0x10400003
    ctx->pc = 0x221948u;
    {
        const bool branch_taken_0x221948 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x221948) {
            ctx->pc = 0x221958u;
            goto label_221958;
        }
    }
    ctx->pc = 0x221950u;
    // 0x221950: 0xc06898c
    ctx->pc = 0x221950u;
    SET_GPR_U32(ctx, 31, 0x221958u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221958u; }
        else if (ctx->pc != 0x221958u) { ctx->pc = 0x221958u; }
    }
    if (ctx->pc != 0x221958u) { return; }
    ctx->pc = 0x221958u;
label_221958:
    // 0x221958: 0x3c020050
    ctx->pc = 0x221958u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x22195c: 0xc07ce18
    ctx->pc = 0x22195Cu;
    SET_GPR_U32(ctx, 31, 0x221964u);
    ctx->pc = 0x221960u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221964u; }
        else if (ctx->pc != 0x221964u) { ctx->pc = 0x221964u; }
    }
    if (ctx->pc != 0x221964u) { return; }
    ctx->pc = 0x221964u;
    // 0x221964: 0x1c400009
    ctx->pc = 0x221964u;
    {
        const bool branch_taken_0x221964 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x221968u;
        SET_GPR_U32(ctx, 2, ((uint32_t)194 << 16));
        if (branch_taken_0x221964) {
            ctx->pc = 0x22198Cu;
            goto label_22198c;
        }
    }
    ctx->pc = 0x22196Cu;
    // 0x22196c: 0x3c02bb03
    ctx->pc = 0x22196cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)47875 << 16));
    // 0x221970: 0x3442126f
    ctx->pc = 0x221970u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4719));
    // 0x221974: 0x44826000
    ctx->pc = 0x221974u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x221978: 0x44806800
    ctx->pc = 0x221978u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x22197c: 0x3c0200c2
    ctx->pc = 0x22197cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)194 << 16));
    // 0x221980: 0xc24af3c
    ctx->pc = 0x221980u;
    SET_GPR_U32(ctx, 31, 0x221988u);
    ctx->pc = 0x221984u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 10));
    ctx->pc = 0x92BCF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MorphUV__Fiff_0x92bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221988u; }
        else if (ctx->pc != 0x221988u) { ctx->pc = 0x221988u; }
    }
    if (ctx->pc != 0x221988u) { return; }
    ctx->pc = 0x221988u;
    // 0x221988: 0x3c0200c2
    ctx->pc = 0x221988u;
    SET_GPR_U32(ctx, 2, ((uint32_t)194 << 16));
label_22198c:
    // 0x22198c: 0xc0853ac
    ctx->pc = 0x22198Cu;
    SET_GPR_U32(ctx, 31, 0x221994u);
    ctx->pc = 0x221990u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 10));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221994u; }
        else if (ctx->pc != 0x221994u) { ctx->pc = 0x221994u; }
    }
    if (ctx->pc != 0x221994u) { return; }
    ctx->pc = 0x221994u;
    // 0x221994: 0x7bbf0000
    ctx->pc = 0x221994u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221998: 0x3e00008
    ctx->pc = 0x221998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22199Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22193Cu: goto label_22193c;
            case 0x221944u: goto label_221944;
            case 0x221948u: goto label_221948;
            case 0x221958u: goto label_221958;
            case 0x22198Cu: goto label_22198c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2219A0u;
}
