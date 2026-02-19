#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoAnimateTree
// Address: 0x212940 - 0x212a58
void DoAnimateTree_0x212940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x212940u;

    // 0x212940: 0x27bdffb0
    ctx->pc = 0x212940u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x212944: 0xffbf0040
    ctx->pc = 0x212944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x212948: 0xffb30030
    ctx->pc = 0x212948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21294c: 0xffb20020
    ctx->pc = 0x21294cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x212950: 0xffb10010
    ctx->pc = 0x212950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x212954: 0xffb00000
    ctx->pc = 0x212954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212958: 0x100982d
    ctx->pc = 0x212958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21295c: 0x24900004
    ctx->pc = 0x21295cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 4));
    // 0x212960: 0x10800005
    ctx->pc = 0x212960u;
    {
        const bool branch_taken_0x212960 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x212964u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x212960) {
            ctx->pc = 0x212978u;
            goto label_212978;
        }
    }
    ctx->pc = 0x212968u;
    // 0x212968: 0x12200034
    ctx->pc = 0x212968u;
    {
        const bool branch_taken_0x212968 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x21296Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x212968) {
            ctx->pc = 0x212A3Cu;
            goto label_212a3c;
        }
    }
    ctx->pc = 0x212970u;
    // 0x212970: 0x16000003
    ctx->pc = 0x212970u;
    {
        const bool branch_taken_0x212970 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x212970) {
            ctx->pc = 0x212980u;
            goto label_212980;
        }
    }
    ctx->pc = 0x212978u;
label_212978:
    // 0x212978: 0x10000030
    ctx->pc = 0x212978u;
    {
        const bool branch_taken_0x212978 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21297Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x212978) {
            ctx->pc = 0x212A3Cu;
            goto label_212a3c;
        }
    }
    ctx->pc = 0x212980u;
label_212980:
    // 0x212980: 0xc08412e
    ctx->pc = 0x212980u;
    SET_GPR_U32(ctx, 31, 0x212988u);
    ctx->pc = 0x212984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2104B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateTree_0x2104b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212988u; }
    }
    if (ctx->pc != 0x212988u) { return; }
    ctx->pc = 0x212988u;
    // 0x212988: 0x40902d
    ctx->pc = 0x212988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21298c: 0x32420008
    ctx->pc = 0x21298cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 8));
    // 0x212990: 0x10400004
    ctx->pc = 0x212990u;
    {
        const bool branch_taken_0x212990 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x212994u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x212990) {
            ctx->pc = 0x2129A4u;
            goto label_2129a4;
        }
    }
    ctx->pc = 0x212998u;
    // 0x212998: 0x8e240008
    ctx->pc = 0x212998u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x21299c: 0xc0849a0
    ctx->pc = 0x21299Cu;
    SET_GPR_U32(ctx, 31, 0x2129A4u);
    ctx->pc = 0x2129A0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212680u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimFixPos_0x212680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2129A4u; }
    }
    if (ctx->pc != 0x2129A4u) { return; }
    ctx->pc = 0x2129A4u;
label_2129a4:
    // 0x2129a4: 0x1a600025
    ctx->pc = 0x2129A4u;
    {
        const bool branch_taken_0x2129a4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2129A8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2129a4) {
            ctx->pc = 0x212A3Cu;
            goto label_212a3c;
        }
    }
    ctx->pc = 0x2129ACu;
    // 0x2129ac: 0x8e040000
    ctx->pc = 0x2129acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2129b0: 0x10800022
    ctx->pc = 0x2129B0u;
    {
        const bool branch_taken_0x2129b0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2129B4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x2129b0) {
            ctx->pc = 0x212A3Cu;
            goto label_212a3c;
        }
    }
    ctx->pc = 0x2129B8u;
    // 0x2129b8: 0x8602000e
    ctx->pc = 0x2129b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2129bc: 0x432818
    ctx->pc = 0x2129bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2129c0: 0xa41021
    ctx->pc = 0x2129c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2129c4: 0x9442002a
    ctx->pc = 0x2129c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x2129c8: 0x30420001
    ctx->pc = 0x2129c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2129cc: 0x1040000a
    ctx->pc = 0x2129CCu;
    {
        const bool branch_taken_0x2129cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2129D0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2129cc) {
            ctx->pc = 0x2129F8u;
            goto label_2129f8;
        }
    }
    ctx->pc = 0x2129D4u;
    // 0x2129d4: 0x86060010
    ctx->pc = 0x2129d4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2129d8: 0x3c013f00
    ctx->pc = 0x2129d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2129dc: 0x44810800
    ctx->pc = 0x2129dcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2129e0: 0x46010000
    ctx->pc = 0x2129e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2129e4: 0x46000064
    ctx->pc = 0x2129e4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2129e8: 0x44020800
    ctx->pc = 0x2129e8u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2129ec: 0xc23023
    ctx->pc = 0x2129ecu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2129f0: 0x10000006
    ctx->pc = 0x2129F0u;
    {
        const bool branch_taken_0x2129f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2129F4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
        if (branch_taken_0x2129f0) {
            ctx->pc = 0x212A0Cu;
            goto label_212a0c;
        }
    }
    ctx->pc = 0x2129F8u;
label_2129f8:
    // 0x2129f8: 0x3c013f00
    ctx->pc = 0x2129f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2129fc: 0x44810800
    ctx->pc = 0x2129fcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x212a00: 0x46010000
    ctx->pc = 0x212a00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x212a04: 0x46000064
    ctx->pc = 0x212a04u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x212a08: 0x44060800
    ctx->pc = 0x212a08u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
label_212a0c:
    // 0x212a0c: 0x8605000e
    ctx->pc = 0x212a0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x212a10: 0x24020030
    ctx->pc = 0x212a10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x212a14: 0xa22818
    ctx->pc = 0x212a14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x212a18: 0x8e020000
    ctx->pc = 0x212a18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x212a1c: 0x8e240000
    ctx->pc = 0x212a1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x212a20: 0xc084c90
    ctx->pc = 0x212A20u;
    SET_GPR_U32(ctx, 31, 0x212A28u);
    ctx->pc = 0x212A24u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->pc = 0x213240u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoSeqTexMods_0x213240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A28u; }
    }
    if (ctx->pc != 0x212A28u) { return; }
    ctx->pc = 0x212A28u;
    // 0x212a28: 0x220202d
    ctx->pc = 0x212a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a2c: 0x200282d
    ctx->pc = 0x212a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a30: 0xc0849d6
    ctx->pc = 0x212A30u;
    SET_GPR_U32(ctx, 31, 0x212A38u);
    ctx->pc = 0x212A34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212758u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateNode_0x212758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A38u; }
    }
    if (ctx->pc != 0x212A38u) { return; }
    ctx->pc = 0x212A38u;
    // 0x212a38: 0x240102d
    ctx->pc = 0x212a38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_212a3c:
    // 0x212a3c: 0xdfbf0040
    ctx->pc = 0x212a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x212a40: 0xdfb30030
    ctx->pc = 0x212a40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212a44: 0xdfb20020
    ctx->pc = 0x212a44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212a48: 0xdfb10010
    ctx->pc = 0x212a48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212a4c: 0xdfb00000
    ctx->pc = 0x212a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212a50: 0x3e00008
    ctx->pc = 0x212A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212A54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212978u: goto label_212978;
            case 0x212980u: goto label_212980;
            case 0x2129A4u: goto label_2129a4;
            case 0x2129F8u: goto label_2129f8;
            case 0x212A0Cu: goto label_212a0c;
            case 0x212A3Cu: goto label_212a3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x212A58u;
}
