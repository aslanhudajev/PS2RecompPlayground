#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: HealthMeterUpdate
// Address: 0x29e3f0 - 0x29e8a0
void HealthMeterUpdate_0x29e3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29e3f0u;

    // 0x29e3f0: 0x27bdffa0
    ctx->pc = 0x29e3f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29e3f4: 0xffbf0050
    ctx->pc = 0x29e3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29e3f8: 0xffb40040
    ctx->pc = 0x29e3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29e3fc: 0xffb30030
    ctx->pc = 0x29e3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29e400: 0xffb20020
    ctx->pc = 0x29e400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29e404: 0xffb10010
    ctx->pc = 0x29e404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29e408: 0xffb00000
    ctx->pc = 0x29e408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29e40c: 0x44800000
    ctx->pc = 0x29e40cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29e410: 0x46006034
    ctx->pc = 0x29e410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e414: 0x0
    ctx->pc = 0x29e414u;
    // NOP
    // 0x29e418: 0x45000002
    ctx->pc = 0x29E418u;
    {
        const bool branch_taken_0x29e418 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29E41Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29e418) {
            ctx->pc = 0x29E424u;
            goto label_29e424;
        }
    }
    ctx->pc = 0x29E420u;
    // 0x29e420: 0x46000306
    ctx->pc = 0x29e420u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_29e424:
    // 0x29e424: 0x3c02003c
    ctx->pc = 0x29e424u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29e428: 0x244241c8
    ctx->pc = 0x29e428u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16840));
    // 0x29e42c: 0x121880
    ctx->pc = 0x29e42cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 2));
    // 0x29e430: 0x621821
    ctx->pc = 0x29e430u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e434: 0xc4600000
    ctx->pc = 0x29e434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e438: 0x46006034
    ctx->pc = 0x29e438u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e43c: 0x0
    ctx->pc = 0x29e43cu;
    // NOP
    // 0x29e440: 0x45000016
    ctx->pc = 0x29E440u;
    {
        const bool branch_taken_0x29e440 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29E444u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29e440) {
            ctx->pc = 0x29E49Cu;
            goto label_29e49c;
        }
    }
    ctx->pc = 0x29E448u;
    // 0x29e448: 0x3c020031
    ctx->pc = 0x29e448u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x29e44c: 0x8c42ffbc
    ctx->pc = 0x29e44cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x29e450: 0x21840
    ctx->pc = 0x29e450u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x29e454: 0x621821
    ctx->pc = 0x29e454u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e458: 0x4600005
    ctx->pc = 0x29E458u;
    {
        const bool branch_taken_0x29e458 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x29E45Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29e458) {
            ctx->pc = 0x29E470u;
            goto label_29e470;
        }
    }
    ctx->pc = 0x29E460u;
    // 0x29e460: 0x44830800
    ctx->pc = 0x29e460u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x29e464: 0x46800860
    ctx->pc = 0x29e464u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x29e468: 0x10000008
    ctx->pc = 0x29E468u;
    {
        const bool branch_taken_0x29e468 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29E46Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x29e468) {
            ctx->pc = 0x29E48Cu;
            goto label_29e48c;
        }
    }
    ctx->pc = 0x29E470u;
label_29e470:
    // 0x29e470: 0x30620001
    ctx->pc = 0x29e470u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x29e474: 0x31842
    ctx->pc = 0x29e474u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x29e478: 0x431025
    ctx->pc = 0x29e478u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e47c: 0x44820800
    ctx->pc = 0x29e47cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x29e480: 0x46800860
    ctx->pc = 0x29e480u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x29e484: 0x46010840
    ctx->pc = 0x29e484u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x29e488: 0xc4a00000
    ctx->pc = 0x29e488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29e48c:
    // 0x29e48c: 0x46010001
    ctx->pc = 0x29e48cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29e490: 0x460c0034
    ctx->pc = 0x29e490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e494: 0x1000001f
    ctx->pc = 0x29E494u;
    {
        const bool branch_taken_0x29e494 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29E498u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        if (branch_taken_0x29e494) {
            ctx->pc = 0x29E514u;
            goto label_29e514;
        }
    }
    ctx->pc = 0x29E49Cu;
label_29e49c:
    // 0x29e49c: 0x3c02003c
    ctx->pc = 0x29e49cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29e4a0: 0x244241c8
    ctx->pc = 0x29e4a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16840));
    // 0x29e4a4: 0x121880
    ctx->pc = 0x29e4a4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 2));
    // 0x29e4a8: 0x621821
    ctx->pc = 0x29e4a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e4ac: 0xc4600000
    ctx->pc = 0x29e4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e4b0: 0x460c0034
    ctx->pc = 0x29e4b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e4b4: 0x0
    ctx->pc = 0x29e4b4u;
    // NOP
    // 0x29e4b8: 0x4500001c
    ctx->pc = 0x29E4B8u;
    {
        const bool branch_taken_0x29e4b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29E4BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29e4b8) {
            ctx->pc = 0x29E52Cu;
            goto label_29e52c;
        }
    }
    ctx->pc = 0x29E4C0u;
    // 0x29e4c0: 0x3c020031
    ctx->pc = 0x29e4c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x29e4c4: 0x8c42ffbc
    ctx->pc = 0x29e4c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x29e4c8: 0x21840
    ctx->pc = 0x29e4c8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x29e4cc: 0x621821
    ctx->pc = 0x29e4ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e4d0: 0x4600005
    ctx->pc = 0x29E4D0u;
    {
        const bool branch_taken_0x29e4d0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x29E4D4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29e4d0) {
            ctx->pc = 0x29E4E8u;
            goto label_29e4e8;
        }
    }
    ctx->pc = 0x29E4D8u;
    // 0x29e4d8: 0x44830800
    ctx->pc = 0x29e4d8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x29e4dc: 0x46800860
    ctx->pc = 0x29e4dcu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x29e4e0: 0x10000008
    ctx->pc = 0x29E4E0u;
    {
        const bool branch_taken_0x29e4e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29E4E4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x29e4e0) {
            ctx->pc = 0x29E504u;
            goto label_29e504;
        }
    }
    ctx->pc = 0x29E4E8u;
label_29e4e8:
    // 0x29e4e8: 0x30620001
    ctx->pc = 0x29e4e8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x29e4ec: 0x31842
    ctx->pc = 0x29e4ecu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x29e4f0: 0x431025
    ctx->pc = 0x29e4f0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e4f4: 0x44820800
    ctx->pc = 0x29e4f4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x29e4f8: 0x46800860
    ctx->pc = 0x29e4f8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x29e4fc: 0x46010840
    ctx->pc = 0x29e4fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x29e500: 0xc4a00000
    ctx->pc = 0x29e500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29e504:
    // 0x29e504: 0x46000800
    ctx->pc = 0x29e504u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29e508: 0xe4800000
    ctx->pc = 0x29e508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x29e50c: 0x46006034
    ctx->pc = 0x29e50cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e510: 0x0
    ctx->pc = 0x29e510u;
    // NOP
label_29e514:
    // 0x29e514: 0x45000005
    ctx->pc = 0x29E514u;
    {
        const bool branch_taken_0x29e514 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29E518u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x29e514) {
            ctx->pc = 0x29E52Cu;
            goto label_29e52c;
        }
    }
    ctx->pc = 0x29E51Cu;
    // 0x29e51c: 0x246341c8
    ctx->pc = 0x29e51cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16840));
    // 0x29e520: 0x121080
    ctx->pc = 0x29e520u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
    // 0x29e524: 0x431021
    ctx->pc = 0x29e524u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e528: 0xe44c0000
    ctx->pc = 0x29e528u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_29e52c:
    // 0x29e52c: 0x3c02003c
    ctx->pc = 0x29e52cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29e530: 0x244241e8
    ctx->pc = 0x29e530u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16872));
    // 0x29e534: 0x122080
    ctx->pc = 0x29e534u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 18), 2));
    // 0x29e538: 0x821021
    ctx->pc = 0x29e538u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29e53c: 0x8c460000
    ctx->pc = 0x29e53cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29e540: 0x3c02003c
    ctx->pc = 0x29e540u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29e544: 0x244241f8
    ctx->pc = 0x29e544u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16888));
    // 0x29e548: 0x821021
    ctx->pc = 0x29e548u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29e54c: 0x8c470000
    ctx->pc = 0x29e54cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29e550: 0x3c02003c
    ctx->pc = 0x29e550u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29e554: 0x244241b8
    ctx->pc = 0x29e554u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16824));
    // 0x29e558: 0x821021
    ctx->pc = 0x29e558u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29e55c: 0x8c430000
    ctx->pc = 0x29e55cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29e560: 0x24020002
    ctx->pc = 0x29e560u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x29e564: 0x1462006c
    ctx->pc = 0x29E564u;
    {
        const bool branch_taken_0x29e564 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x29E568u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x29e564) {
            ctx->pc = 0x29E718u;
            goto label_29e718;
        }
    }
    ctx->pc = 0x29E56Cu;
    // 0x29e56c: 0x244541a0
    ctx->pc = 0x29e56cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 16800));
    // 0x29e570: 0x1218c0
    ctx->pc = 0x29e570u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 3));
    // 0x29e574: 0x651021
    ctx->pc = 0x29e574u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29e578: 0x8c420000
    ctx->pc = 0x29e578u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29e57c: 0x104000c0
    ctx->pc = 0x29E57Cu;
    {
        const bool branch_taken_0x29e57c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29E580u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        if (branch_taken_0x29e57c) {
            ctx->pc = 0x29E880u;
            goto label_29e880;
        }
    }
    ctx->pc = 0x29E584u;
    // 0x29e584: 0x8c420004
    ctx->pc = 0x29e584u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29e588: 0x104000bd
    ctx->pc = 0x29E588u;
    {
        const bool branch_taken_0x29e588 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29E58Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x29e588) {
            ctx->pc = 0x29E880u;
            goto label_29e880;
        }
    }
    ctx->pc = 0x29E590u;
    // 0x29e590: 0x246341c8
    ctx->pc = 0x29e590u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16840));
    // 0x29e594: 0x831821
    ctx->pc = 0x29e594u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29e598: 0x3c02003c
    ctx->pc = 0x29e598u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29e59c: 0x244241d8
    ctx->pc = 0x29e59cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16856));
    // 0x29e5a0: 0x821021
    ctx->pc = 0x29e5a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29e5a4: 0xc4600000
    ctx->pc = 0x29e5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e5a8: 0xc4410000
    ctx->pc = 0x29e5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e5ac: 0x0
    ctx->pc = 0x29e5acu;
    // NOP
    // 0x29e5b0: 0x0
    ctx->pc = 0x29e5b0u;
    // NOP
    // 0x29e5b4: 0x46010003
    ctx->pc = 0x29e5b4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x29e5b8: 0x46000080
    ctx->pc = 0x29e5b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x29e5bc: 0x3c013f80
    ctx->pc = 0x29e5bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29e5c0: 0x44810000
    ctx->pc = 0x29e5c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29e5c4: 0x46020036
    ctx->pc = 0x29e5c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e5c8: 0x0
    ctx->pc = 0x29e5c8u;
    // NOP
    // 0x29e5cc: 0x4501000d
    ctx->pc = 0x29E5CCu;
    {
        const bool branch_taken_0x29e5cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29E5D0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x29e5cc) {
            ctx->pc = 0x29E604u;
            goto label_29e604;
        }
    }
    ctx->pc = 0x29E5D4u;
    // 0x29e5d4: 0x44860000
    ctx->pc = 0x29e5d4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 6);
    // 0x29e5d8: 0x46800020
    ctx->pc = 0x29e5d8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x29e5dc: 0x24020100
    ctx->pc = 0x29e5dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
    // 0x29e5e0: 0x461023
    ctx->pc = 0x29e5e0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x29e5e4: 0x44820800
    ctx->pc = 0x29e5e4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x29e5e8: 0x46800860
    ctx->pc = 0x29e5e8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x29e5ec: 0x46011042
    ctx->pc = 0x29e5ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x29e5f0: 0x46010000
    ctx->pc = 0x29e5f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29e5f4: 0x46000064
    ctx->pc = 0x29e5f4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x29e5f8: 0x44130800
    ctx->pc = 0x29e5f8u;
    SET_GPR_U32(ctx, 19, *(uint32_t*)&ctx->f[1]);
    // 0x29e5fc: 0x3c013f80
    ctx->pc = 0x29e5fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29e600: 0x44810000
    ctx->pc = 0x29e600u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_29e604:
    // 0x29e604: 0x46001081
    ctx->pc = 0x29e604u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x29e608: 0x44800000
    ctx->pc = 0x29e608u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29e60c: 0x46001036
    ctx->pc = 0x29e60cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e610: 0x0
    ctx->pc = 0x29e610u;
    // NOP
    // 0x29e614: 0x45010008
    ctx->pc = 0x29E614u;
    {
        const bool branch_taken_0x29e614 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29E618u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29e614) {
            ctx->pc = 0x29E638u;
            goto label_29e638;
        }
    }
    ctx->pc = 0x29E61Cu;
    // 0x29e61c: 0x24020100
    ctx->pc = 0x29e61cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
    // 0x29e620: 0x471023
    ctx->pc = 0x29e620u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29e624: 0x44820000
    ctx->pc = 0x29e624u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x29e628: 0x46800020
    ctx->pc = 0x29e628u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x29e62c: 0x46001002
    ctx->pc = 0x29e62cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29e630: 0x46000064
    ctx->pc = 0x29e630u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x29e634: 0x44110800
    ctx->pc = 0x29e634u;
    SET_GPR_U32(ctx, 17, *(uint32_t*)&ctx->f[1]);
label_29e638:
    // 0x29e638: 0x3c02003c
    ctx->pc = 0x29e638u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29e63c: 0x244241a0
    ctx->pc = 0x29e63cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16800));
    // 0x29e640: 0x1218c0
    ctx->pc = 0x29e640u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 3));
    // 0x29e644: 0x628021
    ctx->pc = 0x29e644u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e648: 0x8e040000
    ctx->pc = 0x29e648u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29e64c: 0x260282d
    ctx->pc = 0x29e64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e650: 0xc0b0cf6
    ctx->pc = 0x29E650u;
    SET_GPR_U32(ctx, 31, 0x29E658u);
    ctx->pc = 0x29E654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E658u; }
    }
    if (ctx->pc != 0x29E658u) { return; }
    ctx->pc = 0x29E658u;
    // 0x29e658: 0x661000b
    ctx->pc = 0x29E658u;
    {
        const bool branch_taken_0x29e658 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x29E65Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x29e658) {
            ctx->pc = 0x29E688u;
            goto label_29e688;
        }
    }
    ctx->pc = 0x29E660u;
    // 0x29e660: 0x8e040000
    ctx->pc = 0x29e660u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29e664: 0x3c01bf80
    ctx->pc = 0x29e664u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x29e668: 0x44816000
    ctx->pc = 0x29e668u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x29e66c: 0x3c013f80
    ctx->pc = 0x29e66cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29e670: 0x44816800
    ctx->pc = 0x29e670u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x29e674: 0x46006386
    ctx->pc = 0x29e674u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x29e678: 0xc0b0e6a
    ctx->pc = 0x29E678u;
    SET_GPR_U32(ctx, 31, 0x29E680u);
    ctx->pc = 0x29E67Cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2C39A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetCrop_0x2c39a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E680u; }
    }
    if (ctx->pc != 0x29E680u) { return; }
    ctx->pc = 0x29E680u;
    // 0x29e680: 0x10000010
    ctx->pc = 0x29E680u;
    {
        const bool branch_taken_0x29e680 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29E684u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x29e680) {
            ctx->pc = 0x29E6C4u;
            goto label_29e6c4;
        }
    }
    ctx->pc = 0x29E688u;
label_29e688:
    // 0x29e688: 0x244241a0
    ctx->pc = 0x29e688u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16800));
    // 0x29e68c: 0x1218c0
    ctx->pc = 0x29e68cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 3));
    // 0x29e690: 0x621821
    ctx->pc = 0x29e690u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e694: 0x44930000
    ctx->pc = 0x29e694u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 19);
    // 0x29e698: 0x46800020
    ctx->pc = 0x29e698u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x29e69c: 0x3c013b80
    ctx->pc = 0x29e69cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x29e6a0: 0x44816800
    ctx->pc = 0x29e6a0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x29e6a4: 0x8c640000
    ctx->pc = 0x29e6a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29e6a8: 0x3c01bf80
    ctx->pc = 0x29e6a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x29e6ac: 0x44816000
    ctx->pc = 0x29e6acu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x29e6b0: 0x460d0342
    ctx->pc = 0x29e6b0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x29e6b4: 0x46006386
    ctx->pc = 0x29e6b4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x29e6b8: 0xc0b0e6a
    ctx->pc = 0x29E6B8u;
    SET_GPR_U32(ctx, 31, 0x29E6C0u);
    ctx->pc = 0x29E6BCu;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2C39A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetCrop_0x2c39a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E6C0u; }
    }
    if (ctx->pc != 0x29E6C0u) { return; }
    ctx->pc = 0x29E6C0u;
    // 0x29e6c0: 0x3c02003c
    ctx->pc = 0x29e6c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_29e6c4:
    // 0x29e6c4: 0x244241a0
    ctx->pc = 0x29e6c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16800));
    // 0x29e6c8: 0x1280c0
    ctx->pc = 0x29e6c8u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 3));
    // 0x29e6cc: 0x24420004
    ctx->pc = 0x29e6ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e6d0: 0x2028021
    ctx->pc = 0x29e6d0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29e6d4: 0x8e040000
    ctx->pc = 0x29e6d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29e6d8: 0x220282d
    ctx->pc = 0x29e6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e6dc: 0xc0b0cf6
    ctx->pc = 0x29E6DCu;
    SET_GPR_U32(ctx, 31, 0x29E6E4u);
    ctx->pc = 0x29E6E0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E6E4u; }
    }
    if (ctx->pc != 0x29E6E4u) { return; }
    ctx->pc = 0x29E6E4u;
    // 0x29e6e4: 0x44910000
    ctx->pc = 0x29e6e4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 17);
    // 0x29e6e8: 0x46800020
    ctx->pc = 0x29e6e8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x29e6ec: 0x3c013b80
    ctx->pc = 0x29e6ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x29e6f0: 0x44816800
    ctx->pc = 0x29e6f0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x29e6f4: 0x8e040000
    ctx->pc = 0x29e6f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29e6f8: 0x3c01bf80
    ctx->pc = 0x29e6f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x29e6fc: 0x44816000
    ctx->pc = 0x29e6fcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x29e700: 0x460d0342
    ctx->pc = 0x29e700u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x29e704: 0x46006386
    ctx->pc = 0x29e704u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x29e708: 0xc0b0e6a
    ctx->pc = 0x29E708u;
    SET_GPR_U32(ctx, 31, 0x29E710u);
    ctx->pc = 0x29E70Cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2C39A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetCrop_0x2c39a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E710u; }
    }
    if (ctx->pc != 0x29E710u) { return; }
    ctx->pc = 0x29E710u;
    // 0x29e710: 0x10000033
    ctx->pc = 0x29E710u;
    {
        const bool branch_taken_0x29e710 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29E714u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x29e710) {
            ctx->pc = 0x29E7E0u;
            goto label_29e7e0;
        }
    }
    ctx->pc = 0x29E718u;
label_29e718:
    // 0x29e718: 0x244241a0
    ctx->pc = 0x29e718u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16800));
    // 0x29e71c: 0x1218c0
    ctx->pc = 0x29e71cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 3));
    // 0x29e720: 0x621821
    ctx->pc = 0x29e720u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e724: 0x8c620000
    ctx->pc = 0x29e724u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29e728: 0x10400055
    ctx->pc = 0x29E728u;
    {
        const bool branch_taken_0x29e728 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29E72Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x29e728) {
            ctx->pc = 0x29E880u;
            goto label_29e880;
        }
    }
    ctx->pc = 0x29E730u;
    // 0x29e730: 0x246341c8
    ctx->pc = 0x29e730u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16840));
    // 0x29e734: 0x122080
    ctx->pc = 0x29e734u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 18), 2));
    // 0x29e738: 0x831821
    ctx->pc = 0x29e738u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29e73c: 0x3c02003c
    ctx->pc = 0x29e73cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29e740: 0x244241d8
    ctx->pc = 0x29e740u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16856));
    // 0x29e744: 0x822021
    ctx->pc = 0x29e744u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29e748: 0xc4610000
    ctx->pc = 0x29e748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e74c: 0xc4800000
    ctx->pc = 0x29e74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e750: 0x0
    ctx->pc = 0x29e750u;
    // NOP
    // 0x29e754: 0x0
    ctx->pc = 0x29e754u;
    // NOP
    // 0x29e758: 0x46000883
    ctx->pc = 0x29e758u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
    // 0x29e75c: 0x44800000
    ctx->pc = 0x29e75cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29e760: 0x46001036
    ctx->pc = 0x29e760u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e764: 0x0
    ctx->pc = 0x29e764u;
    // NOP
    // 0x29e768: 0x45010009
    ctx->pc = 0x29E768u;
    {
        const bool branch_taken_0x29e768 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29E76Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29e768) {
            ctx->pc = 0x29E790u;
            goto label_29e790;
        }
    }
    ctx->pc = 0x29E770u;
    // 0x29e770: 0xc71021
    ctx->pc = 0x29e770u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29e774: 0x24030100
    ctx->pc = 0x29e774u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 256));
    // 0x29e778: 0x621823
    ctx->pc = 0x29e778u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e77c: 0x44830000
    ctx->pc = 0x29e77cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x29e780: 0x46800020
    ctx->pc = 0x29e780u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x29e784: 0x46001002
    ctx->pc = 0x29e784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29e788: 0x46000064
    ctx->pc = 0x29e788u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x29e78c: 0x44110800
    ctx->pc = 0x29e78cu;
    SET_GPR_U32(ctx, 17, *(uint32_t*)&ctx->f[1]);
label_29e790:
    // 0x29e790: 0x3c02003c
    ctx->pc = 0x29e790u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29e794: 0x244241a0
    ctx->pc = 0x29e794u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16800));
    // 0x29e798: 0x1280c0
    ctx->pc = 0x29e798u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 3));
    // 0x29e79c: 0x2028021
    ctx->pc = 0x29e79cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29e7a0: 0x8e040000
    ctx->pc = 0x29e7a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29e7a4: 0x220282d
    ctx->pc = 0x29e7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e7a8: 0xc0b0cf6
    ctx->pc = 0x29E7A8u;
    SET_GPR_U32(ctx, 31, 0x29E7B0u);
    ctx->pc = 0x29E7ACu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E7B0u; }
    }
    if (ctx->pc != 0x29E7B0u) { return; }
    ctx->pc = 0x29E7B0u;
    // 0x29e7b0: 0x44910000
    ctx->pc = 0x29e7b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 17);
    // 0x29e7b4: 0x46800020
    ctx->pc = 0x29e7b4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x29e7b8: 0x3c013b80
    ctx->pc = 0x29e7b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x29e7bc: 0x44816800
    ctx->pc = 0x29e7bcu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x29e7c0: 0x8e040000
    ctx->pc = 0x29e7c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29e7c4: 0x3c01bf80
    ctx->pc = 0x29e7c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x29e7c8: 0x44816000
    ctx->pc = 0x29e7c8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x29e7cc: 0x460d0342
    ctx->pc = 0x29e7ccu;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x29e7d0: 0x46006386
    ctx->pc = 0x29e7d0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x29e7d4: 0xc0b0e6a
    ctx->pc = 0x29E7D4u;
    SET_GPR_U32(ctx, 31, 0x29E7DCu);
    ctx->pc = 0x29E7D8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2C39A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetCrop_0x2c39a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E7DCu; }
    }
    if (ctx->pc != 0x29E7DCu) { return; }
    ctx->pc = 0x29E7DCu;
    // 0x29e7dc: 0x3c02003c
    ctx->pc = 0x29e7dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_29e7e0:
    // 0x29e7e0: 0x244241b8
    ctx->pc = 0x29e7e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16824));
    // 0x29e7e4: 0x121880
    ctx->pc = 0x29e7e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 2));
    // 0x29e7e8: 0x621821
    ctx->pc = 0x29e7e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e7ec: 0x8c620000
    ctx->pc = 0x29e7ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29e7f0: 0x18400023
    ctx->pc = 0x29E7F0u;
    {
        const bool branch_taken_0x29e7f0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29E7F4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29e7f0) {
            ctx->pc = 0x29E880u;
            goto label_29e880;
        }
    }
    ctx->pc = 0x29E7F8u;
    // 0x29e7f8: 0x3c02003c
    ctx->pc = 0x29e7f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29e7fc: 0x24534188
    ctx->pc = 0x29e7fcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 16776));
    // 0x29e800: 0x1288c0
    ctx->pc = 0x29e800u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 18), 3));
    // 0x29e804: 0x3c140036
    ctx->pc = 0x29e804u;
    SET_GPR_U32(ctx, 20, ((uint32_t)54 << 16));
    // 0x29e808: 0x3c02003c
    ctx->pc = 0x29e808u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29e80c: 0x244241b8
    ctx->pc = 0x29e80cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16824));
    // 0x29e810: 0x121880
    ctx->pc = 0x29e810u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 2));
    // 0x29e814: 0x629021
    ctx->pc = 0x29e814u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e818: 0x101080
    ctx->pc = 0x29e818u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x29e81c: 0x0
    ctx->pc = 0x29e81cu;
    // NOP
label_29e820:
    // 0x29e820: 0x511021
    ctx->pc = 0x29e820u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x29e824: 0x531021
    ctx->pc = 0x29e824u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x29e828: 0x8c440000
    ctx->pc = 0x29e828u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29e82c: 0x1080000f
    ctx->pc = 0x29E82Cu;
    {
        const bool branch_taken_0x29e82c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x29E830u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294957360)));
        if (branch_taken_0x29e82c) {
            ctx->pc = 0x29E86Cu;
            goto label_29e86c;
        }
    }
    ctx->pc = 0x29E834u;
    // 0x29e834: 0x84420b4c
    ctx->pc = 0x29e834u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2892)));
    // 0x29e838: 0x18400006
    ctx->pc = 0x29E838u;
    {
        const bool branch_taken_0x29e838 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29E83Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x29e838) {
            ctx->pc = 0x29E854u;
            goto label_29e854;
        }
    }
    ctx->pc = 0x29E840u;
    // 0x29e840: 0x3c05ff80
    ctx->pc = 0x29e840u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65408 << 16));
    // 0x29e844: 0xc0b0f40
    ctx->pc = 0x29E844u;
    SET_GPR_U32(ctx, 31, 0x29E84Cu);
    ctx->pc = 0x29E848u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 33023));
    ctx->pc = 0x2C3D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetColor_0x2c3d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E84Cu; }
    }
    if (ctx->pc != 0x29E84Cu) { return; }
    ctx->pc = 0x29E84Cu;
    // 0x29e84c: 0x10000008
    ctx->pc = 0x29E84Cu;
    {
        const bool branch_taken_0x29e84c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29E850u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x29e84c) {
            ctx->pc = 0x29E870u;
            goto label_29e870;
        }
    }
    ctx->pc = 0x29E854u;
label_29e854:
    // 0x29e854: 0x511021
    ctx->pc = 0x29e854u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x29e858: 0x531021
    ctx->pc = 0x29e858u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x29e85c: 0x8c440000
    ctx->pc = 0x29e85cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29e860: 0x3c05ffff
    ctx->pc = 0x29e860u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
    // 0x29e864: 0xc0b0f40
    ctx->pc = 0x29E864u;
    SET_GPR_U32(ctx, 31, 0x29E86Cu);
    ctx->pc = 0x29E868u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    ctx->pc = 0x2C3D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetColor_0x2c3d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E86Cu; }
    }
    if (ctx->pc != 0x29E86Cu) { return; }
    ctx->pc = 0x29E86Cu;
label_29e86c:
    // 0x29e86c: 0x26100001
    ctx->pc = 0x29e86cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_29e870:
    // 0x29e870: 0x8e420000
    ctx->pc = 0x29e870u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29e874: 0x202102a
    ctx->pc = 0x29e874u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x29e878: 0x1440ffe9
    ctx->pc = 0x29E878u;
    {
        const bool branch_taken_0x29e878 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29E87Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x29e878) {
            ctx->pc = 0x29E820u;
            goto label_29e820;
        }
    }
    ctx->pc = 0x29E880u;
label_29e880:
    // 0x29e880: 0xdfbf0050
    ctx->pc = 0x29e880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e884: 0xdfb40040
    ctx->pc = 0x29e884u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29e888: 0xdfb30030
    ctx->pc = 0x29e888u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29e88c: 0xdfb20020
    ctx->pc = 0x29e88cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e890: 0xdfb10010
    ctx->pc = 0x29e890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e894: 0xdfb00000
    ctx->pc = 0x29e894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e898: 0x3e00008
    ctx->pc = 0x29E898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E89Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29E424u: goto label_29e424;
            case 0x29E470u: goto label_29e470;
            case 0x29E48Cu: goto label_29e48c;
            case 0x29E49Cu: goto label_29e49c;
            case 0x29E4E8u: goto label_29e4e8;
            case 0x29E504u: goto label_29e504;
            case 0x29E514u: goto label_29e514;
            case 0x29E52Cu: goto label_29e52c;
            case 0x29E604u: goto label_29e604;
            case 0x29E638u: goto label_29e638;
            case 0x29E688u: goto label_29e688;
            case 0x29E6C4u: goto label_29e6c4;
            case 0x29E718u: goto label_29e718;
            case 0x29E790u: goto label_29e790;
            case 0x29E7E0u: goto label_29e7e0;
            case 0x29E820u: goto label_29e820;
            case 0x29E854u: goto label_29e854;
            case 0x29E86Cu: goto label_29e86c;
            case 0x29E870u: goto label_29e870;
            case 0x29E880u: goto label_29e880;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29E8A0u;
}
