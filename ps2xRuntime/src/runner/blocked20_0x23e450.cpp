#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: blocked20
// Address: 0x23e450 - 0x23e55c
void blocked20_0x23e450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23e450u;

    // 0x23e450: 0x27bdffe0
    ctx->pc = 0x23e450u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23e454: 0xffbf0010
    ctx->pc = 0x23e454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23e458: 0xffb00000
    ctx->pc = 0x23e458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23e45c: 0xa0382d
    ctx->pc = 0x23e45cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e460: 0x240303b0
    ctx->pc = 0x23e460u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23e464: 0x831818
    ctx->pc = 0x23e464u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23e468: 0x3c020033
    ctx->pc = 0x23e468u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23e46c: 0x2442dfd0
    ctx->pc = 0x23e46cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23e470: 0x628021
    ctx->pc = 0x23e470u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e474: 0x8e020368
    ctx->pc = 0x23e474u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x23e478: 0x4420001
    ctx->pc = 0x23E478u;
    {
        const bool branch_taken_0x23e478 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23e478) {
            ctx->pc = 0x23E47Cu;
            SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->pc = 0x23E480u;
            goto label_23e480;
        }
    }
    ctx->pc = 0x23E480u;
label_23e480:
    // 0x23e480: 0x28420003
    ctx->pc = 0x23e480u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
    // 0x23e484: 0x10400008
    ctx->pc = 0x23E484u;
    {
        const bool branch_taken_0x23e484 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23E488u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23e484) {
            ctx->pc = 0x23E4A8u;
            goto label_23e4a8;
        }
    }
    ctx->pc = 0x23E48Cu;
    // 0x23e48c: 0x96020378
    ctx->pc = 0x23e48cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
    // 0x23e490: 0x24420001
    ctx->pc = 0x23e490u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23e494: 0xa6020378
    ctx->pc = 0x23e494u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 2));
    // 0x23e498: 0xc08efc2
    ctx->pc = 0x23E498u;
    SET_GPR_U32(ctx, 31, 0x23E4A0u);
    ctx->pc = 0x23E49Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeadEnd_0x23bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E4A0u; }
    }
    if (ctx->pc != 0x23E4A0u) { return; }
    ctx->pc = 0x23E4A0u;
    // 0x23e4a0: 0x10000023
    ctx->pc = 0x23E4A0u;
    {
        const bool branch_taken_0x23e4a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23E4A4u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
        if (branch_taken_0x23e4a0) {
            ctx->pc = 0x23E530u;
            goto label_23e530;
        }
    }
    ctx->pc = 0x23E4A8u;
label_23e4a8:
    // 0x23e4a8: 0xc08efc2
    ctx->pc = 0x23E4A8u;
    SET_GPR_U32(ctx, 31, 0x23E4B0u);
    ctx->pc = 0x23BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeadEnd_0x23bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E4B0u; }
    }
    if (ctx->pc != 0x23E4B0u) { return; }
    ctx->pc = 0x23E4B0u;
    // 0x23e4b0: 0x3c02003c
    ctx->pc = 0x23e4b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x23e4b4: 0xc4401c6c
    ctx->pc = 0x23e4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e4b8: 0x3c014049
    ctx->pc = 0x23e4b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x23e4bc: 0x34210fdb
    ctx->pc = 0x23e4bcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23e4c0: 0x44810800
    ctx->pc = 0x23e4c0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23e4c4: 0x46010080
    ctx->pc = 0x23e4c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23e4c8: 0x46020834
    ctx->pc = 0x23e4c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e4cc: 0x0
    ctx->pc = 0x23e4ccu;
    // NOP
    // 0x23e4d0: 0x45000006
    ctx->pc = 0x23E4D0u;
    {
        const bool branch_taken_0x23e4d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23E4D4u;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
        if (branch_taken_0x23e4d0) {
            ctx->pc = 0x23E4ECu;
            goto label_23e4ec;
        }
    }
    ctx->pc = 0x23E4D8u;
    // 0x23e4d8: 0x3c0140c9
    ctx->pc = 0x23e4d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23e4dc: 0x34210fdb
    ctx->pc = 0x23e4dcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23e4e0: 0x44810000
    ctx->pc = 0x23e4e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23e4e4: 0x1000000d
    ctx->pc = 0x23E4E4u;
    {
        const bool branch_taken_0x23e4e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23E4E8u;
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x23e4e4) {
            ctx->pc = 0x23E51Cu;
            goto label_23e51c;
        }
    }
    ctx->pc = 0x23E4ECu;
label_23e4ec:
    // 0x23e4ec: 0xc6010260
    ctx->pc = 0x23e4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e4f0: 0x3c01c049
    ctx->pc = 0x23e4f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x23e4f4: 0x34210fdb
    ctx->pc = 0x23e4f4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23e4f8: 0x44810000
    ctx->pc = 0x23e4f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23e4fc: 0x46000836
    ctx->pc = 0x23e4fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e500: 0x0
    ctx->pc = 0x23e500u;
    // NOP
    // 0x23e504: 0x45020005
    ctx->pc = 0x23E504u;
    {
        const bool branch_taken_0x23e504 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e504) {
            ctx->pc = 0x23E508u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x23E51Cu;
            goto label_23e51c;
        }
    }
    ctx->pc = 0x23E50Cu;
    // 0x23e50c: 0x3c0140c9
    ctx->pc = 0x23e50cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23e510: 0x34210fdb
    ctx->pc = 0x23e510u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23e514: 0x44810000
    ctx->pc = 0x23e514u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23e518: 0x46000800
    ctx->pc = 0x23e518u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23e51c:
    // 0x23e51c: 0xe6000260
    ctx->pc = 0x23e51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x23e520: 0xe6000258
    ctx->pc = 0x23e520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x23e524: 0xa6000378
    ctx->pc = 0x23e524u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 0));
    // 0x23e528: 0xae000368
    ctx->pc = 0x23e528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 0));
    // 0x23e52c: 0x86020378
    ctx->pc = 0x23e52cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
label_23e530:
    // 0x23e530: 0x28420007
    ctx->pc = 0x23e530u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 7));
    // 0x23e534: 0x14400006
    ctx->pc = 0x23E534u;
    {
        const bool branch_taken_0x23e534 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23E538u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x23e534) {
            ctx->pc = 0x23E550u;
            goto label_23e550;
        }
    }
    ctx->pc = 0x23E53Cu;
    // 0x23e53c: 0x8e020368
    ctx->pc = 0x23e53cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x23e540: 0x21023
    ctx->pc = 0x23e540u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x23e544: 0x21040
    ctx->pc = 0x23e544u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x23e548: 0xae020368
    ctx->pc = 0x23e548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
    // 0x23e54c: 0xa6000378
    ctx->pc = 0x23e54cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 0));
label_23e550:
    // 0x23e550: 0xdfb00000
    ctx->pc = 0x23e550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e554: 0x3e00008
    ctx->pc = 0x23E554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E558u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23E480u: goto label_23e480;
            case 0x23E4A8u: goto label_23e4a8;
            case 0x23E4ECu: goto label_23e4ec;
            case 0x23E51Cu: goto label_23e51c;
            case 0x23E530u: goto label_23e530;
            case 0x23E550u: goto label_23e550;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E55Cu;
}
