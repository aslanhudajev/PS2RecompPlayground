#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: NextDynGrid
// Address: 0x21f930 - 0x21fc1c
void NextDynGrid_0x21f930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21f930u;

    // 0x21f930: 0x27bdfff0
    ctx->pc = 0x21f930u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f934: 0xffbf0000
    ctx->pc = 0x21f934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21f938: 0x8c8b0000
    ctx->pc = 0x21f938u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21f93c: 0x44800000
    ctx->pc = 0x21f93cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21f940: 0x46006032
    ctx->pc = 0x21f940u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f944: 0x0
    ctx->pc = 0x21f944u;
    // NOP
    // 0x21f948: 0x45000015
    ctx->pc = 0x21F948u;
    {
        const bool branch_taken_0x21f948 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21F94Cu;
        SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x21f948) {
            ctx->pc = 0x21F9A0u;
            goto label_21f9a0;
        }
    }
    ctx->pc = 0x21F950u;
    // 0x21f950: 0x460d0036
    ctx->pc = 0x21f950u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f954: 0x0
    ctx->pc = 0x21f954u;
    // NOP
    // 0x21f958: 0x45000004
    ctx->pc = 0x21F958u;
    {
        const bool branch_taken_0x21f958 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21F95Cu;
        SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x21f958) {
            ctx->pc = 0x21F96Cu;
            goto label_21f96c;
        }
    }
    ctx->pc = 0x21F960u;
    // 0x21f960: 0x254a0001
    ctx->pc = 0x21f960u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x21f964: 0x10000004
    ctx->pc = 0x21F964u;
    {
        const bool branch_taken_0x21f964 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F968u;
        ctx->f[4] = FPU_MOV_S(ctx->f[15]);
        if (branch_taken_0x21f964) {
            ctx->pc = 0x21F978u;
            goto label_21f978;
        }
    }
    ctx->pc = 0x21F96Cu;
label_21f96c:
    // 0x21f96c: 0x254affff
    ctx->pc = 0x21f96cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x21f970: 0x602d
    ctx->pc = 0x21f970u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f974: 0x46007907
    ctx->pc = 0x21f974u;
    ctx->f[4] = FPU_NEG_S(ctx->f[15]);
label_21f978:
    // 0x21f978: 0x3c030032
    ctx->pc = 0x21f978u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x21f97c: 0x25620001
    ctx->pc = 0x21f97cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 11), 1));
    // 0x21f980: 0x44820800
    ctx->pc = 0x21f980u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x21f984: 0x46800860
    ctx->pc = 0x21f984u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x21f988: 0x3c020032
    ctx->pc = 0x21f988u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21f98c: 0xc440fd48
    ctx->pc = 0x21f98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f990: 0x46000842
    ctx->pc = 0x21f990u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f994: 0xc460fa10
    ctx->pc = 0x21f994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f998: 0x10000018
    ctx->pc = 0x21F998u;
    {
        const bool branch_taken_0x21f998 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F99Cu;
        ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x21f998) {
            ctx->pc = 0x21F9FCu;
            goto label_21f9fc;
        }
    }
    ctx->pc = 0x21F9A0u;
label_21f9a0:
    // 0x21f9a0: 0x460e0036
    ctx->pc = 0x21f9a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f9a4: 0x0
    ctx->pc = 0x21f9a4u;
    // NOP
    // 0x21f9a8: 0x45000004
    ctx->pc = 0x21F9A8u;
    {
        const bool branch_taken_0x21f9a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21F9ACu;
        SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x21f9a8) {
            ctx->pc = 0x21F9BCu;
            goto label_21f9bc;
        }
    }
    ctx->pc = 0x21F9B0u;
    // 0x21f9b0: 0x254a0001
    ctx->pc = 0x21f9b0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x21f9b4: 0x10000004
    ctx->pc = 0x21F9B4u;
    {
        const bool branch_taken_0x21f9b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F9B8u;
        ctx->f[4] = FPU_MOV_S(ctx->f[15]);
        if (branch_taken_0x21f9b4) {
            ctx->pc = 0x21F9C8u;
            goto label_21f9c8;
        }
    }
    ctx->pc = 0x21F9BCu;
label_21f9bc:
    // 0x21f9bc: 0x254affff
    ctx->pc = 0x21f9bcu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x21f9c0: 0x602d
    ctx->pc = 0x21f9c0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f9c4: 0x46007907
    ctx->pc = 0x21f9c4u;
    ctx->f[4] = FPU_NEG_S(ctx->f[15]);
label_21f9c8:
    // 0x21f9c8: 0x3c030032
    ctx->pc = 0x21f9c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x21f9cc: 0x25620001
    ctx->pc = 0x21f9ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 11), 1));
    // 0x21f9d0: 0x44820800
    ctx->pc = 0x21f9d0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x21f9d4: 0x46800860
    ctx->pc = 0x21f9d4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x21f9d8: 0x3c020032
    ctx->pc = 0x21f9d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21f9dc: 0xc440fd48
    ctx->pc = 0x21f9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f9e0: 0x46000842
    ctx->pc = 0x21f9e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f9e4: 0xc460fa10
    ctx->pc = 0x21f9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f9e8: 0x460008c0
    ctx->pc = 0x21f9e8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21f9ec: 0x44860000
    ctx->pc = 0x21f9ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 6);
    // 0x21f9f0: 0x46800020
    ctx->pc = 0x21f9f0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21f9f4: 0x46001b41
    ctx->pc = 0x21f9f4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x21f9f8: 0x460e6b42
    ctx->pc = 0x21f9f8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[14]);
label_21f9fc:
    // 0x21f9fc: 0x540002e
    ctx->pc = 0x21F9FCu;
    {
        const bool branch_taken_0x21f9fc = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x21FA00u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21f9fc) {
            ctx->pc = 0x21FAB8u;
            goto label_21fab8;
        }
    }
    ctx->pc = 0x21FA04u;
    // 0x21fa04: 0x8c42d5fc
    ctx->pc = 0x21fa04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956540)));
    // 0x21fa08: 0x142102a
    ctx->pc = 0x21fa08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), GPR_S32(ctx, 2)));
    // 0x21fa0c: 0x1040002a
    ctx->pc = 0x21FA0Cu;
    {
        const bool branch_taken_0x21fa0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21fa0c) {
            ctx->pc = 0x21FAB8u;
            goto label_21fab8;
        }
    }
    ctx->pc = 0x21FA14u;
    // 0x21fa14: 0x44881000
    ctx->pc = 0x21fa14u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 8);
    // 0x21fa18: 0x468010a0
    ctx->pc = 0x21fa18u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x21fa1c: 0x460d1080
    ctx->pc = 0x21fa1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[13]);
    // 0x21fa20: 0x46042000
    ctx->pc = 0x21fa20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x21fa24: 0x11800014
    ctx->pc = 0x21FA24u;
    {
        const bool branch_taken_0x21fa24 = (GPR_U32(ctx, 12) == GPR_U32(ctx, 0));
        ctx->pc = 0x21FA28u;
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x21fa24) {
            ctx->pc = 0x21FA78u;
            goto label_21fa78;
        }
    }
    ctx->pc = 0x21FA2Cu;
    // 0x21fa2c: 0x44890000
    ctx->pc = 0x21fa2cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 9);
    // 0x21fa30: 0x46800020
    ctx->pc = 0x21fa30u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21fa34: 0x46020034
    ctx->pc = 0x21fa34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21fa38: 0x0
    ctx->pc = 0x21fa38u;
    // NOP
    // 0x21fa3c: 0x45030001
    ctx->pc = 0x21FA3Cu;
    {
        const bool branch_taken_0x21fa3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21fa3c) {
            ctx->pc = 0x21FA40u;
            ctx->f[2] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x21FA44u;
            goto label_21fa44;
        }
    }
    ctx->pc = 0x21FA44u;
label_21fa44:
    // 0x21fa44: 0x3c020032
    ctx->pc = 0x21fa44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21fa48: 0xc440fa18
    ctx->pc = 0x21fa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21fa4c: 0x46001001
    ctx->pc = 0x21fa4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x21fa50: 0x3c020032
    ctx->pc = 0x21fa50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21fa54: 0xc441fd4c
    ctx->pc = 0x21fa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21fa58: 0x46010002
    ctx->pc = 0x21fa58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21fa5c: 0x46000064
    ctx->pc = 0x21fa5cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x21fa60: 0x44020800
    ctx->pc = 0x21fa60u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x21fa64: 0x4a102a
    ctx->pc = 0x21fa64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 10)));
label_21fa68:
    // 0x21fa68: 0x14400013
    ctx->pc = 0x21FA68u;
    {
        const bool branch_taken_0x21fa68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21fa68) {
            ctx->pc = 0x21FAB8u;
            goto label_21fab8;
        }
    }
    ctx->pc = 0x21FA70u;
    // 0x21fa70: 0x10000066
    ctx->pc = 0x21FA70u;
    {
        const bool branch_taken_0x21fa70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21FA74u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
        if (branch_taken_0x21fa70) {
            ctx->pc = 0x21FC0Cu;
            goto label_21fc0c;
        }
    }
    ctx->pc = 0x21FA78u;
label_21fa78:
    // 0x21fa78: 0x44890000
    ctx->pc = 0x21fa78u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 9);
    // 0x21fa7c: 0x46800020
    ctx->pc = 0x21fa7cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21fa80: 0x46001034
    ctx->pc = 0x21fa80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21fa84: 0x0
    ctx->pc = 0x21fa84u;
    // NOP
    // 0x21fa88: 0x45030001
    ctx->pc = 0x21FA88u;
    {
        const bool branch_taken_0x21fa88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21fa88) {
            ctx->pc = 0x21FA8Cu;
            ctx->f[2] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x21FA90u;
            goto label_21fa90;
        }
    }
    ctx->pc = 0x21FA90u;
label_21fa90:
    // 0x21fa90: 0x3c020032
    ctx->pc = 0x21fa90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21fa94: 0xc440fa18
    ctx->pc = 0x21fa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21fa98: 0x46001001
    ctx->pc = 0x21fa98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x21fa9c: 0x3c020032
    ctx->pc = 0x21fa9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21faa0: 0xc441fd4c
    ctx->pc = 0x21faa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21faa4: 0x46010002
    ctx->pc = 0x21faa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21faa8: 0x46000064
    ctx->pc = 0x21faa8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x21faac: 0x44020800
    ctx->pc = 0x21faacu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x21fab0: 0x1000ffed
    ctx->pc = 0x21FAB0u;
    {
        const bool branch_taken_0x21fab0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21FAB4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), GPR_S32(ctx, 2)));
        if (branch_taken_0x21fab0) {
            ctx->pc = 0x21FA68u;
            goto label_21fa68;
        }
    }
    ctx->pc = 0x21FAB8u;
label_21fab8:
    // 0x21fab8: 0x44870000
    ctx->pc = 0x21fab8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 7);
    // 0x21fabc: 0x46800020
    ctx->pc = 0x21fabcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21fac0: 0x46030034
    ctx->pc = 0x21fac0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21fac4: 0x0
    ctx->pc = 0x21fac4u;
    // NOP
    // 0x21fac8: 0x45010051
    ctx->pc = 0x21FAC8u;
    {
        const bool branch_taken_0x21fac8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21FACCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21fac8) {
            ctx->pc = 0x21FC10u;
            goto label_21fc10;
        }
    }
    ctx->pc = 0x21FAD0u;
    // 0x21fad0: 0x256b0001
    ctx->pc = 0x21fad0u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 1));
    // 0x21fad4: 0x3c02003c
    ctx->pc = 0x21fad4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21fad8: 0x8c42d5f8
    ctx->pc = 0x21fad8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956536)));
    // 0x21fadc: 0x162102a
    ctx->pc = 0x21fadcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 11), GPR_S32(ctx, 2)));
    // 0x21fae0: 0x5040004b
    ctx->pc = 0x21FAE0u;
    {
        const bool branch_taken_0x21fae0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21fae0) {
            ctx->pc = 0x21FAE4u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x21FC10u;
            goto label_21fc10;
        }
    }
    ctx->pc = 0x21FAE8u;
    // 0x21fae8: 0x44800000
    ctx->pc = 0x21fae8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21faec: 0x46006032
    ctx->pc = 0x21faecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21faf0: 0x45010019
    ctx->pc = 0x21FAF0u;
    {
        const bool branch_taken_0x21faf0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21faf0) {
            ctx->pc = 0x21FB58u;
            goto label_21fb58;
        }
    }
    ctx->pc = 0x21FAF8u;
    // 0x21faf8: 0x44860000
    ctx->pc = 0x21faf8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 6);
    // 0x21fafc: 0x46800020
    ctx->pc = 0x21fafcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21fb00: 0x46001801
    ctx->pc = 0x21fb00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x21fb04: 0x460f7840
    ctx->pc = 0x21fb04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[15], ctx->f[15]);
    // 0x21fb08: 0x46010034
    ctx->pc = 0x21fb08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21fb0c: 0x0
    ctx->pc = 0x21fb0cu;
    // NOP
    // 0x21fb10: 0x45010011
    ctx->pc = 0x21FB10u;
    {
        const bool branch_taken_0x21fb10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21FB14u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21fb10) {
            ctx->pc = 0x21FB58u;
            goto label_21fb58;
        }
    }
    ctx->pc = 0x21FB18u;
    // 0x21fb18: 0xc440fd48
    ctx->pc = 0x21fb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21fb1c: 0x460018c0
    ctx->pc = 0x21fb1cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x21fb20: 0x44860000
    ctx->pc = 0x21fb20u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 6);
    // 0x21fb24: 0x46800020
    ctx->pc = 0x21fb24u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21fb28: 0x460f7840
    ctx->pc = 0x21fb28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[15], ctx->f[15]);
    // 0x21fb2c: 0x46010000
    ctx->pc = 0x21fb2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21fb30: 0x46001841
    ctx->pc = 0x21fb30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x21fb34: 0x44800000
    ctx->pc = 0x21fb34u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21fb38: 0x46010034
    ctx->pc = 0x21fb38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21fb3c: 0x45000006
    ctx->pc = 0x21FB3Cu;
    {
        const bool branch_taken_0x21fb3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21fb3c) {
            ctx->pc = 0x21FB58u;
            goto label_21fb58;
        }
    }
    ctx->pc = 0x21FB44u;
    // 0x21fb44: 0x44881000
    ctx->pc = 0x21fb44u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 8);
    // 0x21fb48: 0x468010a0
    ctx->pc = 0x21fb48u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x21fb4c: 0x460e0802
    ctx->pc = 0x21fb4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x21fb50: 0x10000003
    ctx->pc = 0x21FB50u;
    {
        const bool branch_taken_0x21fb50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21FB54u;
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x21fb50) {
            ctx->pc = 0x21FB60u;
            goto label_21fb60;
        }
    }
    ctx->pc = 0x21FB58u;
label_21fb58:
    // 0x21fb58: 0x44881000
    ctx->pc = 0x21fb58u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 8);
    // 0x21fb5c: 0x468010a0
    ctx->pc = 0x21fb5cu;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
label_21fb60:
    // 0x21fb60: 0x11800009
    ctx->pc = 0x21FB60u;
    {
        const bool branch_taken_0x21fb60 = (GPR_U32(ctx, 12) == GPR_U32(ctx, 0));
        if (branch_taken_0x21fb60) {
            ctx->pc = 0x21FB88u;
            goto label_21fb88;
        }
    }
    ctx->pc = 0x21FB68u;
    // 0x21fb68: 0x44890000
    ctx->pc = 0x21fb68u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 9);
    // 0x21fb6c: 0x46800020
    ctx->pc = 0x21fb6cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21fb70: 0x46020034
    ctx->pc = 0x21fb70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21fb74: 0x0
    ctx->pc = 0x21fb74u;
    // NOP
    // 0x21fb78: 0x45010009
    ctx->pc = 0x21FB78u;
    {
        const bool branch_taken_0x21fb78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21FB7Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21fb78) {
            ctx->pc = 0x21FBA0u;
            goto label_21fba0;
        }
    }
    ctx->pc = 0x21FB80u;
    // 0x21fb80: 0x1000000b
    ctx->pc = 0x21FB80u;
    {
        const bool branch_taken_0x21fb80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21FB84u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x21fb80) {
            ctx->pc = 0x21FBB0u;
            goto label_21fbb0;
        }
    }
    ctx->pc = 0x21FB88u;
label_21fb88:
    // 0x21fb88: 0x44890000
    ctx->pc = 0x21fb88u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 9);
    // 0x21fb8c: 0x46800020
    ctx->pc = 0x21fb8cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21fb90: 0x46001034
    ctx->pc = 0x21fb90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21fb94: 0x0
    ctx->pc = 0x21fb94u;
    // NOP
    // 0x21fb98: 0x45000004
    ctx->pc = 0x21FB98u;
    {
        const bool branch_taken_0x21fb98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21FB9Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21fb98) {
            ctx->pc = 0x21FBACu;
            goto label_21fbac;
        }
    }
    ctx->pc = 0x21FBA0u;
label_21fba0:
    // 0x21fba0: 0x44891000
    ctx->pc = 0x21fba0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 9);
    // 0x21fba4: 0x468010a0
    ctx->pc = 0x21fba4u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x21fba8: 0x3c020032
    ctx->pc = 0x21fba8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_21fbac:
    // 0x21fbac: 0xc440fa18
    ctx->pc = 0x21fbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fbb0:
    // 0x21fbb0: 0x46001001
    ctx->pc = 0x21fbb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x21fbb4: 0x3c020032
    ctx->pc = 0x21fbb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21fbb8: 0xc441fd4c
    ctx->pc = 0x21fbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21fbbc: 0x46010002
    ctx->pc = 0x21fbbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21fbc0: 0x46000064
    ctx->pc = 0x21fbc0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x21fbc4: 0x440a0800
    ctx->pc = 0x21fbc4u;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[1]);
    // 0x21fbc8: 0x3c02003c
    ctx->pc = 0x21fbc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21fbcc: 0x8c42d5fc
    ctx->pc = 0x21fbccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956540)));
    // 0x21fbd0: 0x142102a
    ctx->pc = 0x21fbd0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), GPR_S32(ctx, 2)));
    // 0x21fbd4: 0x1040000e
    ctx->pc = 0x21FBD4u;
    {
        const bool branch_taken_0x21fbd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21FBD8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21fbd4) {
            ctx->pc = 0x21FC10u;
            goto label_21fc10;
        }
    }
    ctx->pc = 0x21FBDCu;
    // 0x21fbdc: 0x5430003
    ctx->pc = 0x21FBDCu;
    {
        const bool branch_taken_0x21fbdc = (GPR_S32(ctx, 10) >= 0);
        if (branch_taken_0x21fbdc) {
            ctx->pc = 0x21FBE0u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 11));
            ctx->pc = 0x21FBECu;
            goto label_21fbec;
        }
    }
    ctx->pc = 0x21FBE4u;
    // 0x21fbe4: 0x1000000b
    ctx->pc = 0x21FBE4u;
    {
        const bool branch_taken_0x21fbe4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21FBE8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x21fbe4) {
            ctx->pc = 0x21FC14u;
            goto label_21fc14;
        }
    }
    ctx->pc = 0x21FBECu;
label_21fbec:
    // 0x21fbec: 0x5600003
    ctx->pc = 0x21FBECu;
    {
        const bool branch_taken_0x21fbec = (GPR_S32(ctx, 11) < 0);
        ctx->pc = 0x21FBF0u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
        if (branch_taken_0x21fbec) {
            ctx->pc = 0x21FBFCu;
            goto label_21fbfc;
        }
    }
    ctx->pc = 0x21FBF4u;
    // 0x21fbf4: 0x5410006
    ctx->pc = 0x21FBF4u;
    {
        const bool branch_taken_0x21fbf4 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x21FBF8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x21fbf4) {
            ctx->pc = 0x21FC10u;
            goto label_21fc10;
        }
    }
    ctx->pc = 0x21FBFCu;
label_21fbfc:
    // 0x21fbfc: 0x3c04003a
    ctx->pc = 0x21fbfcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x21fc00: 0x248464f0
    ctx->pc = 0x21fc00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25840));
    // 0x21fc04: 0xc0b49a6
    ctx->pc = 0x21FC04u;
    SET_GPR_U32(ctx, 31, 0x21FC0Cu);
    ctx->pc = 0x21FC08u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC0Cu; }
    }
    if (ctx->pc != 0x21FC0Cu) { return; }
    ctx->pc = 0x21FC0Cu;
label_21fc0c:
    // 0x21fc0c: 0x24020001
    ctx->pc = 0x21fc0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_21fc10:
    // 0x21fc10: 0xdfbf0000
    ctx->pc = 0x21fc10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21fc14:
    // 0x21fc14: 0x3e00008
    ctx->pc = 0x21FC14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FC18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F96Cu: goto label_21f96c;
            case 0x21F978u: goto label_21f978;
            case 0x21F9A0u: goto label_21f9a0;
            case 0x21F9BCu: goto label_21f9bc;
            case 0x21F9C8u: goto label_21f9c8;
            case 0x21F9FCu: goto label_21f9fc;
            case 0x21FA44u: goto label_21fa44;
            case 0x21FA68u: goto label_21fa68;
            case 0x21FA78u: goto label_21fa78;
            case 0x21FA90u: goto label_21fa90;
            case 0x21FAB8u: goto label_21fab8;
            case 0x21FB58u: goto label_21fb58;
            case 0x21FB60u: goto label_21fb60;
            case 0x21FB88u: goto label_21fb88;
            case 0x21FBA0u: goto label_21fba0;
            case 0x21FBACu: goto label_21fbac;
            case 0x21FBB0u: goto label_21fbb0;
            case 0x21FBECu: goto label_21fbec;
            case 0x21FBFCu: goto label_21fbfc;
            case 0x21FC0Cu: goto label_21fc0c;
            case 0x21FC10u: goto label_21fc10;
            case 0x21FC14u: goto label_21fc14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21FC1Cu;
}
