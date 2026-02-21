#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MoveCam_flyby_mode
// Address: 0x26d450 - 0x26dff8
void MoveCam_flyby_mode_0x26d450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26d450u;

    // 0x26d450: 0x27bdff40
    ctx->pc = 0x26d450u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x26d454: 0xffbf00a0
    ctx->pc = 0x26d454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x26d458: 0xffb20090
    ctx->pc = 0x26d458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x26d45c: 0xffb10080
    ctx->pc = 0x26d45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x26d460: 0xffb00070
    ctx->pc = 0x26d460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x26d464: 0xe7b400b0
    ctx->pc = 0x26d464u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x26d468: 0x80882d
    ctx->pc = 0x26d468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d46c: 0x240301a0
    ctx->pc = 0x26d46cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26d470: 0x2231818
    ctx->pc = 0x26d470u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26d474: 0x3c020034
    ctx->pc = 0x26d474u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26d478: 0x2442eb60
    ctx->pc = 0x26d478u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26d47c: 0x162002d7
    ctx->pc = 0x26D47Cu;
    {
        const bool branch_taken_0x26d47c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x26D480u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x26d47c) {
            ctx->pc = 0x26DFDCu;
            goto label_26dfdc;
        }
    }
    ctx->pc = 0x26D484u;
    // 0x26d484: 0xae000090
    ctx->pc = 0x26d484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x26d488: 0xae000094
    ctx->pc = 0x26d488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x26d48c: 0xae000098
    ctx->pc = 0x26d48cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x26d490: 0xae0000a0
    ctx->pc = 0x26d490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x26d494: 0xae0000a4
    ctx->pc = 0x26d494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x26d498: 0xae0000a8
    ctx->pc = 0x26d498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x26d49c: 0x8e0200dc
    ctx->pc = 0x26d49cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x26d4a0: 0x28420002
    ctx->pc = 0x26d4a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x26d4a4: 0x144002ce
    ctx->pc = 0x26D4A4u;
    {
        const bool branch_taken_0x26d4a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26D4A8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x26d4a4) {
            ctx->pc = 0x26DFE0u;
            goto label_26dfe0;
        }
    }
    ctx->pc = 0x26D4ACu;
    // 0x26d4ac: 0x3c02003c
    ctx->pc = 0x26d4acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26d4b0: 0x8c433924
    ctx->pc = 0x26d4b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 14628)));
    // 0x26d4b4: 0x50600007
    ctx->pc = 0x26D4B4u;
    {
        const bool branch_taken_0x26d4b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x26d4b4) {
            ctx->pc = 0x26D4B8u;
            SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
            ctx->pc = 0x26D4D4u;
            goto label_26d4d4;
        }
    }
    ctx->pc = 0x26D4BCu;
    // 0x26d4bc: 0x186000a1
    ctx->pc = 0x26D4BCu;
    {
        const bool branch_taken_0x26d4bc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x26D4C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x26d4bc) {
            ctx->pc = 0x26D744u;
            goto label_26d744;
        }
    }
    ctx->pc = 0x26D4C4u;
    // 0x26d4c4: 0x1062004a
    ctx->pc = 0x26D4C4u;
    {
        const bool branch_taken_0x26d4c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x26D4C8u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26d4c4) {
            ctx->pc = 0x26D5F0u;
            goto label_26d5f0;
        }
    }
    ctx->pc = 0x26D4CCu;
    // 0x26d4cc: 0x1000009f
    ctx->pc = 0x26D4CCu;
    {
        const bool branch_taken_0x26d4cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26D4D0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x26d4cc) {
            ctx->pc = 0x26D74Cu;
            goto label_26d74c;
        }
    }
    ctx->pc = 0x26D4D4u;
label_26d4d4:
    // 0x26d4d4: 0x8c62ffbc
    ctx->pc = 0x26d4d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26d4d8: 0x4400005
    ctx->pc = 0x26D4D8u;
    {
        const bool branch_taken_0x26d4d8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26D4DCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26d4d8) {
            ctx->pc = 0x26D4F0u;
            goto label_26d4f0;
        }
    }
    ctx->pc = 0x26D4E0u;
    // 0x26d4e0: 0x44821000
    ctx->pc = 0x26d4e0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x26d4e4: 0x468010a0
    ctx->pc = 0x26d4e4u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x26d4e8: 0x10000008
    ctx->pc = 0x26D4E8u;
    {
        const bool branch_taken_0x26d4e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x26d4e8) {
            ctx->pc = 0x26D50Cu;
            goto label_26d50c;
        }
    }
    ctx->pc = 0x26D4F0u;
label_26d4f0:
    // 0x26d4f0: 0x8c820000
    ctx->pc = 0x26d4f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26d4f4: 0x30430001
    ctx->pc = 0x26d4f4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26d4f8: 0x21042
    ctx->pc = 0x26d4f8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26d4fc: 0x621825
    ctx->pc = 0x26d4fcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26d500: 0x44831000
    ctx->pc = 0x26d500u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x26d504: 0x468010a0
    ctx->pc = 0x26d504u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x26d508: 0x46021080
    ctx->pc = 0x26d508u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_26d50c:
    // 0x26d50c: 0x3c013e4c
    ctx->pc = 0x26d50cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15948 << 16));
    // 0x26d510: 0x3421cccd
    ctx->pc = 0x26d510u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x26d514: 0x44810000
    ctx->pc = 0x26d514u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26d518: 0x46001082
    ctx->pc = 0x26d518u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26d51c: 0xc60100d0
    ctx->pc = 0x26d51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d520: 0xc60000ec
    ctx->pc = 0x26d520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d524: 0x46000841
    ctx->pc = 0x26d524u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26d528: 0x3c013c08
    ctx->pc = 0x26d528u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15368 << 16));
    // 0x26d52c: 0x34218885
    ctx->pc = 0x26d52cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34949));
    // 0x26d530: 0x44810000
    ctx->pc = 0x26d530u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26d534: 0x46000842
    ctx->pc = 0x26d534u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26d538: 0x3c030031
    ctx->pc = 0x26d538u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x26d53c: 0x8c62ffbc
    ctx->pc = 0x26d53cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26d540: 0x4400005
    ctx->pc = 0x26D540u;
    {
        const bool branch_taken_0x26d540 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26D544u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26d540) {
            ctx->pc = 0x26D558u;
            goto label_26d558;
        }
    }
    ctx->pc = 0x26D548u;
    // 0x26d548: 0x44820000
    ctx->pc = 0x26d548u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x26d54c: 0x46800020
    ctx->pc = 0x26d54cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x26d550: 0x10000009
    ctx->pc = 0x26D550u;
    {
        const bool branch_taken_0x26d550 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26D554u;
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x26d550) {
            ctx->pc = 0x26D578u;
            goto label_26d578;
        }
    }
    ctx->pc = 0x26D558u;
label_26d558:
    // 0x26d558: 0x8c820000
    ctx->pc = 0x26d558u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26d55c: 0x30430001
    ctx->pc = 0x26d55cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26d560: 0x21042
    ctx->pc = 0x26d560u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26d564: 0x621825
    ctx->pc = 0x26d564u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26d568: 0x44830000
    ctx->pc = 0x26d568u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x26d56c: 0x46800020
    ctx->pc = 0x26d56cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x26d570: 0x46000000
    ctx->pc = 0x26d570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x26d574: 0x46000842
    ctx->pc = 0x26d574u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_26d578:
    // 0x26d578: 0xc60000d0
    ctx->pc = 0x26d578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d57c: 0x46010001
    ctx->pc = 0x26d57cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26d580: 0xe60000d0
    ctx->pc = 0x26d580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x26d584: 0x3c03003c
    ctx->pc = 0x26d584u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26d588: 0x24020001
    ctx->pc = 0x26d588u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d58c: 0xac6238d4
    ctx->pc = 0x26d58cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14548), GPR_U32(ctx, 2));
    // 0x26d590: 0x46001007
    ctx->pc = 0x26d590u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x26d594: 0xe6000090
    ctx->pc = 0x26d594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x26d598: 0xc6010074
    ctx->pc = 0x26d598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d59c: 0xc60000f0
    ctx->pc = 0x26d59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d5a0: 0x46000834
    ctx->pc = 0x26d5a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d5a4: 0x0
    ctx->pc = 0x26d5a4u;
    // NOP
    // 0x26d5a8: 0x45020006
    ctx->pc = 0x26D5A8u;
    {
        const bool branch_taken_0x26d5a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d5a8) {
            ctx->pc = 0x26D5ACu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26D5C4u;
            goto label_26d5c4;
        }
    }
    ctx->pc = 0x26D5B0u;
    // 0x26d5b0: 0x3c013dcc
    ctx->pc = 0x26d5b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x26d5b4: 0x3421cccd
    ctx->pc = 0x26d5b4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x26d5b8: 0x44810000
    ctx->pc = 0x26d5b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26d5bc: 0x1000000a
    ctx->pc = 0x26D5BCu;
    {
        const bool branch_taken_0x26d5bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26D5C0u;
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x26d5bc) {
            ctx->pc = 0x26D5E8u;
            goto label_26d5e8;
        }
    }
    ctx->pc = 0x26D5C4u;
label_26d5c4:
    // 0x26d5c4: 0x46010034
    ctx->pc = 0x26d5c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d5c8: 0x0
    ctx->pc = 0x26d5c8u;
    // NOP
    // 0x26d5cc: 0x45000052
    ctx->pc = 0x26D5CCu;
    {
        const bool branch_taken_0x26d5cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26D5D0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x26d5cc) {
            ctx->pc = 0x26D718u;
            goto label_26d718;
        }
    }
    ctx->pc = 0x26D5D4u;
    // 0x26d5d4: 0x46001007
    ctx->pc = 0x26d5d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x26d5d8: 0x3c013dcc
    ctx->pc = 0x26d5d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x26d5dc: 0x3421cccd
    ctx->pc = 0x26d5dcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x26d5e0: 0x44810800
    ctx->pc = 0x26d5e0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26d5e4: 0x46010002
    ctx->pc = 0x26d5e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_26d5e8:
    // 0x26d5e8: 0x1000004a
    ctx->pc = 0x26D5E8u;
    {
        const bool branch_taken_0x26d5e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26D5ECu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
        if (branch_taken_0x26d5e8) {
            ctx->pc = 0x26D714u;
            goto label_26d714;
        }
    }
    ctx->pc = 0x26D5F0u;
label_26d5f0:
    // 0x26d5f0: 0x3c030031
    ctx->pc = 0x26d5f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x26d5f4: 0x8c62ffbc
    ctx->pc = 0x26d5f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26d5f8: 0x4400005
    ctx->pc = 0x26D5F8u;
    {
        const bool branch_taken_0x26d5f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26D5FCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26d5f8) {
            ctx->pc = 0x26D610u;
            goto label_26d610;
        }
    }
    ctx->pc = 0x26D600u;
    // 0x26d600: 0x44820800
    ctx->pc = 0x26d600u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x26d604: 0x46800860
    ctx->pc = 0x26d604u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26d608: 0x10000008
    ctx->pc = 0x26D608u;
    {
        const bool branch_taken_0x26d608 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x26d608) {
            ctx->pc = 0x26D62Cu;
            goto label_26d62c;
        }
    }
    ctx->pc = 0x26D610u;
label_26d610:
    // 0x26d610: 0x8c820000
    ctx->pc = 0x26d610u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26d614: 0x30430001
    ctx->pc = 0x26d614u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26d618: 0x21042
    ctx->pc = 0x26d618u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26d61c: 0x621825
    ctx->pc = 0x26d61cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26d620: 0x44830800
    ctx->pc = 0x26d620u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x26d624: 0x46800860
    ctx->pc = 0x26d624u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26d628: 0x46010840
    ctx->pc = 0x26d628u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_26d62c:
    // 0x26d62c: 0x3c013b2b
    ctx->pc = 0x26d62cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15147 << 16));
    // 0x26d630: 0x342192a7
    ctx->pc = 0x26d630u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 37543));
    // 0x26d634: 0x44810000
    ctx->pc = 0x26d634u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26d638: 0x46000842
    ctx->pc = 0x26d638u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26d63c: 0xc60000b4
    ctx->pc = 0x26d63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d640: 0x46000840
    ctx->pc = 0x26d640u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26d644: 0x3c014049
    ctx->pc = 0x26d644u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x26d648: 0x34210fdb
    ctx->pc = 0x26d648u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26d64c: 0x44810000
    ctx->pc = 0x26d64cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26d650: 0x46010034
    ctx->pc = 0x26d650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d654: 0x0
    ctx->pc = 0x26d654u;
    // NOP
    // 0x26d658: 0x45000006
    ctx->pc = 0x26D658u;
    {
        const bool branch_taken_0x26d658 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26D65Cu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
        if (branch_taken_0x26d658) {
            ctx->pc = 0x26D674u;
            goto label_26d674;
        }
    }
    ctx->pc = 0x26D660u;
    // 0x26d660: 0x3c0140c9
    ctx->pc = 0x26d660u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26d664: 0x34210fdb
    ctx->pc = 0x26d664u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26d668: 0x44810000
    ctx->pc = 0x26d668u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26d66c: 0x1000000d
    ctx->pc = 0x26D66Cu;
    {
        const bool branch_taken_0x26d66c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26D670u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x26d66c) {
            ctx->pc = 0x26D6A4u;
            goto label_26d6a4;
        }
    }
    ctx->pc = 0x26D674u;
label_26d674:
    // 0x26d674: 0xc60100b4
    ctx->pc = 0x26d674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d678: 0x3c01c049
    ctx->pc = 0x26d678u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x26d67c: 0x34210fdb
    ctx->pc = 0x26d67cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26d680: 0x44810000
    ctx->pc = 0x26d680u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26d684: 0x46000836
    ctx->pc = 0x26d684u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d688: 0x0
    ctx->pc = 0x26d688u;
    // NOP
    // 0x26d68c: 0x45020005
    ctx->pc = 0x26D68Cu;
    {
        const bool branch_taken_0x26d68c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d68c) {
            ctx->pc = 0x26D690u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26D6A4u;
            goto label_26d6a4;
        }
    }
    ctx->pc = 0x26D694u;
    // 0x26d694: 0x3c0140c9
    ctx->pc = 0x26d694u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26d698: 0x34210fdb
    ctx->pc = 0x26d698u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26d69c: 0x44810000
    ctx->pc = 0x26d69cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26d6a0: 0x46000800
    ctx->pc = 0x26d6a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26d6a4:
    // 0x26d6a4: 0xe60000b4
    ctx->pc = 0x26d6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x26d6a8: 0xafa00040
    ctx->pc = 0x26d6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x26d6ac: 0xafa00044
    ctx->pc = 0x26d6acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x26d6b0: 0xc60000d0
    ctx->pc = 0x26d6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d6b4: 0xe7a00048
    ctx->pc = 0x26d6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26d6b8: 0x3a0202d
    ctx->pc = 0x26d6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d6bc: 0xc0b5ae8
    ctx->pc = 0x26D6BCu;
    SET_GPR_U32(ctx, 31, 0x26D6C4u);
    ctx->pc = 0x26D6C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 176));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D6C4u; }
    }
    if (ctx->pc != 0x26D6C4u) { return; }
    ctx->pc = 0x26D6C4u;
    // 0x26d6c4: 0x27a40040
    ctx->pc = 0x26d6c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x26d6c8: 0x27a50050
    ctx->pc = 0x26d6c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x26d6cc: 0xc0b57a2
    ctx->pc = 0x26D6CCu;
    SET_GPR_U32(ctx, 31, 0x26D6D4u);
    ctx->pc = 0x26D6D0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D6D4u; }
    }
    if (ctx->pc != 0x26D6D4u) { return; }
    ctx->pc = 0x26D6D4u;
    // 0x26d6d4: 0xc6000070
    ctx->pc = 0x26d6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d6d8: 0xc7a10050
    ctx->pc = 0x26d6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d6dc: 0x46010000
    ctx->pc = 0x26d6dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26d6e0: 0xe6000140
    ctx->pc = 0x26d6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
    // 0x26d6e4: 0xc6000074
    ctx->pc = 0x26d6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d6e8: 0xc7a10054
    ctx->pc = 0x26d6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d6ec: 0x46010000
    ctx->pc = 0x26d6ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26d6f0: 0xe6000144
    ctx->pc = 0x26d6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x26d6f4: 0xc6000078
    ctx->pc = 0x26d6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d6f8: 0xc7a10058
    ctx->pc = 0x26d6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d6fc: 0x46010000
    ctx->pc = 0x26d6fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26d700: 0xe6000148
    ctx->pc = 0x26d700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
    // 0x26d704: 0x26040070
    ctx->pc = 0x26d704u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 112));
    // 0x26d708: 0x26050140
    ctx->pc = 0x26d708u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 320));
    // 0x26d70c: 0xc099c08
    ctx->pc = 0x26D70Cu;
    SET_GPR_U32(ctx, 31, 0x26D714u);
    ctx->pc = 0x26D710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x267020u;
    {
        const uint32_t __entryPc = ctx->pc;
        fix_radius_0x267020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D714u; }
    }
    if (ctx->pc != 0x26D714u) { return; }
    ctx->pc = 0x26D714u;
label_26d714:
    // 0x26d714: 0x3c04003c
    ctx->pc = 0x26d714u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_26d718:
    // 0x26d718: 0x3c030031
    ctx->pc = 0x26d718u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x26d71c: 0x8c823928
    ctx->pc = 0x26d71cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 14632)));
    // 0x26d720: 0x8c65ffbc
    ctx->pc = 0x26d720u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26d724: 0x451023
    ctx->pc = 0x26d724u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x26d728: 0x1c40022c
    ctx->pc = 0x26D728u;
    {
        const bool branch_taken_0x26d728 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x26D72Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 14632), GPR_U32(ctx, 2));
        if (branch_taken_0x26d728) {
            ctx->pc = 0x26DFDCu;
            goto label_26dfdc;
        }
    }
    ctx->pc = 0x26D730u;
    // 0x26d730: 0x3c030035
    ctx->pc = 0x26d730u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x26d734: 0x8c62a2d4
    ctx->pc = 0x26d734u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294943444)));
    // 0x26d738: 0x451021
    ctx->pc = 0x26d738u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x26d73c: 0x10000227
    ctx->pc = 0x26D73Cu;
    {
        const bool branch_taken_0x26d73c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26D740u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294943444), GPR_U32(ctx, 2));
        if (branch_taken_0x26d73c) {
            ctx->pc = 0x26DFDCu;
            goto label_26dfdc;
        }
    }
    ctx->pc = 0x26D744u;
label_26d744:
    // 0x26d744: 0x902d
    ctx->pc = 0x26d744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d748: 0x3c030031
    ctx->pc = 0x26d748u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_26d74c:
    // 0x26d74c: 0x8c62ffbc
    ctx->pc = 0x26d74cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26d750: 0x4400005
    ctx->pc = 0x26D750u;
    {
        const bool branch_taken_0x26d750 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26D754u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26d750) {
            ctx->pc = 0x26D768u;
            goto label_26d768;
        }
    }
    ctx->pc = 0x26D758u;
    // 0x26d758: 0x4482a000
    ctx->pc = 0x26d758u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 2);
    // 0x26d75c: 0x4680a520
    ctx->pc = 0x26d75cu;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
    // 0x26d760: 0x10000008
    ctx->pc = 0x26D760u;
    {
        const bool branch_taken_0x26d760 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x26d760) {
            ctx->pc = 0x26D784u;
            goto label_26d784;
        }
    }
    ctx->pc = 0x26D768u;
label_26d768:
    // 0x26d768: 0x8c820000
    ctx->pc = 0x26d768u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26d76c: 0x30430001
    ctx->pc = 0x26d76cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26d770: 0x21042
    ctx->pc = 0x26d770u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26d774: 0x621825
    ctx->pc = 0x26d774u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26d778: 0x4483a000
    ctx->pc = 0x26d778u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 3);
    // 0x26d77c: 0x4680a520
    ctx->pc = 0x26d77cu;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
    // 0x26d780: 0x4614a500
    ctx->pc = 0x26d780u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_26d784:
    // 0x26d784: 0x3c013e4c
    ctx->pc = 0x26d784u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15948 << 16));
    // 0x26d788: 0x3421cccd
    ctx->pc = 0x26d788u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x26d78c: 0x44810000
    ctx->pc = 0x26d78cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26d790: 0x4600a502
    ctx->pc = 0x26d790u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x26d794: 0xc60000b0
    ctx->pc = 0x26d794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d798: 0x46000007
    ctx->pc = 0x26d798u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x26d79c: 0xe60000b0
    ctx->pc = 0x26d79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x26d7a0: 0xc09b436
    ctx->pc = 0x26D7A0u;
    SET_GPR_U32(ctx, 31, 0x26D7A8u);
    ctx->pc = 0x26D7A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26D0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        att_rotate_camera_0x26d0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D7A8u; }
    }
    if (ctx->pc != 0x26D7A8u) { return; }
    ctx->pc = 0x26D7A8u;
    // 0x26d7a8: 0xc60000b0
    ctx->pc = 0x26d7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d7ac: 0x46000007
    ctx->pc = 0x26d7acu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x26d7b0: 0xe60000b0
    ctx->pc = 0x26d7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x26d7b4: 0xc09b1ea
    ctx->pc = 0x26D7B4u;
    SET_GPR_U32(ctx, 31, 0x26D7BCu);
    ctx->pc = 0x26D7B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26C7A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        att_dest_pyr_0x26c7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D7BCu; }
    }
    if (ctx->pc != 0x26D7BCu) { return; }
    ctx->pc = 0x26D7BCu;
    // 0x26d7bc: 0x3c020034
    ctx->pc = 0x26d7bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26d7c0: 0x3c030034
    ctx->pc = 0x26d7c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26d7c4: 0x8c42f928
    ctx->pc = 0x26d7c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965544)));
    // 0x26d7c8: 0x8c64f92c
    ctx->pc = 0x26d7c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4294965548)));
    // 0x26d7cc: 0x1044002a
    ctx->pc = 0x26D7CCu;
    {
        const bool branch_taken_0x26d7cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x26D7D0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        if (branch_taken_0x26d7cc) {
            ctx->pc = 0x26D878u;
            goto label_26d878;
        }
    }
    ctx->pc = 0x26D7D4u;
    // 0x26d7d4: 0x24634b70
    ctx->pc = 0x26d7d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 19312));
    // 0x26d7d8: 0x21180
    ctx->pc = 0x26d7d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x26d7dc: 0x431021
    ctx->pc = 0x26d7dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26d7e0: 0xc4460010
    ctx->pc = 0x26d7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x26d7e4: 0xc6020070
    ctx->pc = 0x26d7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26d7e8: 0x46023181
    ctx->pc = 0x26d7e8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x26d7ec: 0xc4450014
    ctx->pc = 0x26d7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x26d7f0: 0xc6030074
    ctx->pc = 0x26d7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26d7f4: 0x46032941
    ctx->pc = 0x26d7f4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x26d7f8: 0xc4440018
    ctx->pc = 0x26d7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26d7fc: 0xc6000078
    ctx->pc = 0x26d7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d800: 0x46002101
    ctx->pc = 0x26d800u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x26d804: 0x3c02003c
    ctx->pc = 0x26d804u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26d808: 0xc4473968
    ctx->pc = 0x26d808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x26d80c: 0x46073182
    ctx->pc = 0x26d80cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x26d810: 0x46072942
    ctx->pc = 0x26d810u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x26d814: 0x46072102
    ctx->pc = 0x26d814u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x26d818: 0x41180
    ctx->pc = 0x26d818u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 6));
    // 0x26d81c: 0x431021
    ctx->pc = 0x26d81cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26d820: 0xc4410010
    ctx->pc = 0x26d820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d824: 0x46020841
    ctx->pc = 0x26d824u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x26d828: 0xc4420014
    ctx->pc = 0x26d828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26d82c: 0x46031081
    ctx->pc = 0x26d82cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x26d830: 0xc4430018
    ctx->pc = 0x26d830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26d834: 0x460018c1
    ctx->pc = 0x26d834u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x26d838: 0x3c013f80
    ctx->pc = 0x26d838u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x26d83c: 0x44810000
    ctx->pc = 0x26d83cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26d840: 0x46070001
    ctx->pc = 0x26d840u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x26d844: 0x46010042
    ctx->pc = 0x26d844u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26d848: 0xe7a10040
    ctx->pc = 0x26d848u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x26d84c: 0x46020082
    ctx->pc = 0x26d84cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x26d850: 0xe7a20044
    ctx->pc = 0x26d850u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x26d854: 0x46030002
    ctx->pc = 0x26d854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x26d858: 0xe7a00048
    ctx->pc = 0x26d858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26d85c: 0x46013180
    ctx->pc = 0x26d85cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x26d860: 0xe7a60050
    ctx->pc = 0x26d860u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x26d864: 0x46022940
    ctx->pc = 0x26d864u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x26d868: 0xe7a50054
    ctx->pc = 0x26d868u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x26d86c: 0x46002100
    ctx->pc = 0x26d86cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x26d870: 0x1000000a
    ctx->pc = 0x26D870u;
    {
        const bool branch_taken_0x26d870 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26D874u;
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        if (branch_taken_0x26d870) {
            ctx->pc = 0x26D89Cu;
            goto label_26d89c;
        }
    }
    ctx->pc = 0x26D878u;
label_26d878:
    // 0x26d878: 0xafa00050
    ctx->pc = 0x26d878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x26d87c: 0xafa00054
    ctx->pc = 0x26d87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x26d880: 0xafa00058
    ctx->pc = 0x26d880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x26d884: 0x3c040035
    ctx->pc = 0x26d884u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x26d888: 0x3c030031
    ctx->pc = 0x26d888u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x26d88c: 0x8c82a2d4
    ctx->pc = 0x26d88cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294943444)));
    // 0x26d890: 0x8c63ffbc
    ctx->pc = 0x26d890u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26d894: 0x431021
    ctx->pc = 0x26d894u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26d898: 0xac82a2d4
    ctx->pc = 0x26d898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294943444), GPR_U32(ctx, 2));
label_26d89c:
    // 0x26d89c: 0xc7ac0050
    ctx->pc = 0x26d89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26d8a0: 0x460c6002
    ctx->pc = 0x26d8a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x26d8a4: 0xc7a10054
    ctx->pc = 0x26d8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d8a8: 0x460108c2
    ctx->pc = 0x26d8a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x26d8ac: 0x46030000
    ctx->pc = 0x26d8acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x26d8b0: 0xc7a10058
    ctx->pc = 0x26d8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d8b4: 0x46010842
    ctx->pc = 0x26d8b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x26d8b8: 0x46010000
    ctx->pc = 0x26d8b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26d8bc: 0x0
    ctx->pc = 0x26d8bcu;
    // NOP
    // 0x26d8c0: 0x0
    ctx->pc = 0x26d8c0u;
    // NOP
    // 0x26d8c4: 0x46000084
    ctx->pc = 0x26d8c4u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x26d8c8: 0x46021032
    ctx->pc = 0x26d8c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d8cc: 0x45010006
    ctx->pc = 0x26D8CCu;
    {
        const bool branch_taken_0x26d8cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d8cc) {
            ctx->pc = 0x26D8E8u;
            goto label_26d8e8;
        }
    }
    ctx->pc = 0x26D8D4u;
    // 0x26d8d4: 0x460c6302
    ctx->pc = 0x26d8d4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x26d8d8: 0x46036300
    ctx->pc = 0x26d8d8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
    // 0x26d8dc: 0xc0ba284
    ctx->pc = 0x26D8DCu;
    SET_GPR_U32(ctx, 31, 0x26D8E4u);
    ctx->pc = 0x26D8E0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D8E4u; }
    }
    if (ctx->pc != 0x26D8E4u) { return; }
    ctx->pc = 0x26D8E4u;
    // 0x26d8e4: 0x46000086
    ctx->pc = 0x26d8e4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_26d8e8:
    // 0x26d8e8: 0x3c014080
    ctx->pc = 0x26d8e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x26d8ec: 0x44810000
    ctx->pc = 0x26d8ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26d8f0: 0x46020036
    ctx->pc = 0x26d8f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d8f4: 0x0
    ctx->pc = 0x26d8f4u;
    // NOP
    // 0x26d8f8: 0x45010007
    ctx->pc = 0x26D8F8u;
    {
        const bool branch_taken_0x26d8f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26D8FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26d8f8) {
            ctx->pc = 0x26D918u;
            goto label_26d918;
        }
    }
    ctx->pc = 0x26D900u;
    // 0x26d900: 0x3c020034
    ctx->pc = 0x26d900u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26d904: 0x3c030034
    ctx->pc = 0x26d904u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26d908: 0x8c44f928
    ctx->pc = 0x26d908u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294965544)));
    // 0x26d90c: 0x8c62f92c
    ctx->pc = 0x26d90cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294965548)));
    // 0x26d910: 0x10820163
    ctx->pc = 0x26D910u;
    {
        const bool branch_taken_0x26d910 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x26D914u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26d910) {
            ctx->pc = 0x26DEA0u;
            goto label_26dea0;
        }
    }
    ctx->pc = 0x26D918u;
label_26d918:
    // 0x26d918: 0x3c03003c
    ctx->pc = 0x26d918u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26d91c: 0xc4413934
    ctx->pc = 0x26d91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d920: 0xc4603950
    ctx->pc = 0x26d920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d924: 0x46000834
    ctx->pc = 0x26d924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d928: 0x0
    ctx->pc = 0x26d928u;
    // NOP
    // 0x26d92c: 0x4500002e
    ctx->pc = 0x26D92Cu;
    {
        const bool branch_taken_0x26d92c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26D930u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26d92c) {
            ctx->pc = 0x26D9E8u;
            goto label_26d9e8;
        }
    }
    ctx->pc = 0x26D934u;
    // 0x26d934: 0xc441392c
    ctx->pc = 0x26d934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d938: 0x3c013c0e
    ctx->pc = 0x26d938u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15374 << 16));
    // 0x26d93c: 0x3421fa36
    ctx->pc = 0x26d93cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 64054));
    // 0x26d940: 0x44810000
    ctx->pc = 0x26d940u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26d944: 0x46000834
    ctx->pc = 0x26d944u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d948: 0x0
    ctx->pc = 0x26d948u;
    // NOP
    // 0x26d94c: 0x45020007
    ctx->pc = 0x26D94Cu;
    {
        const bool branch_taken_0x26d94c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d94c) {
            ctx->pc = 0x26D950u;
            SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
            ctx->pc = 0x26D96Cu;
            goto label_26d96c;
        }
    }
    ctx->pc = 0x26D954u;
    // 0x26d954: 0x3c013a64
    ctx->pc = 0x26d954u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14948 << 16));
    // 0x26d958: 0x3421c389
    ctx->pc = 0x26d958u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 50057));
    // 0x26d95c: 0x44810000
    ctx->pc = 0x26d95cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26d960: 0x46000800
    ctx->pc = 0x26d960u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26d964: 0xe440392c
    ctx->pc = 0x26d964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14636), bits); }
    // 0x26d968: 0x3c02003c
    ctx->pc = 0x26d968u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_26d96c:
    // 0x26d96c: 0x24453934
    ctx->pc = 0x26d96cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 14644));
    // 0x26d970: 0xa0382d
    ctx->pc = 0x26d970u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d974: 0x3c02003c
    ctx->pc = 0x26d974u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26d978: 0x2446392c
    ctx->pc = 0x26d978u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 14636));
    // 0x26d97c: 0x3c030031
    ctx->pc = 0x26d97cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x26d980: 0x8c62ffbc
    ctx->pc = 0x26d980u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26d984: 0x4400005
    ctx->pc = 0x26D984u;
    {
        const bool branch_taken_0x26d984 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26D988u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26d984) {
            ctx->pc = 0x26D99Cu;
            goto label_26d99c;
        }
    }
    ctx->pc = 0x26D98Cu;
    // 0x26d98c: 0x44820800
    ctx->pc = 0x26d98cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x26d990: 0x46800860
    ctx->pc = 0x26d990u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26d994: 0x10000009
    ctx->pc = 0x26D994u;
    {
        const bool branch_taken_0x26d994 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26D998u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x26d994) {
            ctx->pc = 0x26D9BCu;
            goto label_26d9bc;
        }
    }
    ctx->pc = 0x26D99Cu;
label_26d99c:
    // 0x26d99c: 0x8c820000
    ctx->pc = 0x26d99cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26d9a0: 0x30430001
    ctx->pc = 0x26d9a0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26d9a4: 0x21042
    ctx->pc = 0x26d9a4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26d9a8: 0x621825
    ctx->pc = 0x26d9a8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26d9ac: 0x44830800
    ctx->pc = 0x26d9acu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x26d9b0: 0x46800860
    ctx->pc = 0x26d9b0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26d9b4: 0x46010840
    ctx->pc = 0x26d9b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x26d9b8: 0xc4c00000
    ctx->pc = 0x26d9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d9bc:
    // 0x26d9bc: 0x46000802
    ctx->pc = 0x26d9bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26d9c0: 0xc4e10000
    ctx->pc = 0x26d9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d9c4: 0x46010000
    ctx->pc = 0x26d9c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26d9c8: 0xe4a00000
    ctx->pc = 0x26d9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x26d9cc: 0x3c02003c
    ctx->pc = 0x26d9ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26d9d0: 0x3c03003c
    ctx->pc = 0x26d9d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26d9d4: 0xc4413934
    ctx->pc = 0x26d9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d9d8: 0xc4603950
    ctx->pc = 0x26d9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d9dc: 0x46010036
    ctx->pc = 0x26d9dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d9e0: 0x10000034
    ctx->pc = 0x26D9E0u;
    {
        const bool branch_taken_0x26d9e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x26d9e0) {
            ctx->pc = 0x26DAB4u;
            goto label_26dab4;
        }
    }
    ctx->pc = 0x26D9E8u;
label_26d9e8:
    // 0x26d9e8: 0x3c02003c
    ctx->pc = 0x26d9e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26d9ec: 0x3c03003c
    ctx->pc = 0x26d9ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26d9f0: 0xc4413934
    ctx->pc = 0x26d9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d9f4: 0xc4603950
    ctx->pc = 0x26d9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d9f8: 0x46010034
    ctx->pc = 0x26d9f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d9fc: 0x0
    ctx->pc = 0x26d9fcu;
    // NOP
    // 0x26da00: 0x4500002e
    ctx->pc = 0x26DA00u;
    {
        const bool branch_taken_0x26da00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26DA04u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26da00) {
            ctx->pc = 0x26DABCu;
            goto label_26dabc;
        }
    }
    ctx->pc = 0x26DA08u;
    // 0x26da08: 0xc441392c
    ctx->pc = 0x26da08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26da0c: 0x3c01bc0e
    ctx->pc = 0x26da0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48142 << 16));
    // 0x26da10: 0x3421fa36
    ctx->pc = 0x26da10u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 64054));
    // 0x26da14: 0x44810000
    ctx->pc = 0x26da14u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26da18: 0x46010034
    ctx->pc = 0x26da18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26da1c: 0x0
    ctx->pc = 0x26da1cu;
    // NOP
    // 0x26da20: 0x45020007
    ctx->pc = 0x26DA20u;
    {
        const bool branch_taken_0x26da20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26da20) {
            ctx->pc = 0x26DA24u;
            SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
            ctx->pc = 0x26DA40u;
            goto label_26da40;
        }
    }
    ctx->pc = 0x26DA28u;
    // 0x26da28: 0x3c013a64
    ctx->pc = 0x26da28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14948 << 16));
    // 0x26da2c: 0x3421c389
    ctx->pc = 0x26da2cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 50057));
    // 0x26da30: 0x44810000
    ctx->pc = 0x26da30u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26da34: 0x46000801
    ctx->pc = 0x26da34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26da38: 0xe440392c
    ctx->pc = 0x26da38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14636), bits); }
    // 0x26da3c: 0x3c02003c
    ctx->pc = 0x26da3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_26da40:
    // 0x26da40: 0x24453934
    ctx->pc = 0x26da40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 14644));
    // 0x26da44: 0xa0382d
    ctx->pc = 0x26da44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26da48: 0x3c02003c
    ctx->pc = 0x26da48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26da4c: 0x2446392c
    ctx->pc = 0x26da4cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 14636));
    // 0x26da50: 0x3c030031
    ctx->pc = 0x26da50u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x26da54: 0x8c62ffbc
    ctx->pc = 0x26da54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26da58: 0x4400005
    ctx->pc = 0x26DA58u;
    {
        const bool branch_taken_0x26da58 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26DA5Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26da58) {
            ctx->pc = 0x26DA70u;
            goto label_26da70;
        }
    }
    ctx->pc = 0x26DA60u;
    // 0x26da60: 0x44820800
    ctx->pc = 0x26da60u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x26da64: 0x46800860
    ctx->pc = 0x26da64u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26da68: 0x10000009
    ctx->pc = 0x26DA68u;
    {
        const bool branch_taken_0x26da68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26DA6Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x26da68) {
            ctx->pc = 0x26DA90u;
            goto label_26da90;
        }
    }
    ctx->pc = 0x26DA70u;
label_26da70:
    // 0x26da70: 0x8c820000
    ctx->pc = 0x26da70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26da74: 0x30430001
    ctx->pc = 0x26da74u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26da78: 0x21042
    ctx->pc = 0x26da78u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26da7c: 0x621825
    ctx->pc = 0x26da7cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26da80: 0x44830800
    ctx->pc = 0x26da80u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x26da84: 0x46800860
    ctx->pc = 0x26da84u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26da88: 0x46010840
    ctx->pc = 0x26da88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x26da8c: 0xc4c00000
    ctx->pc = 0x26da8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26da90:
    // 0x26da90: 0x46000802
    ctx->pc = 0x26da90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26da94: 0xc4e10000
    ctx->pc = 0x26da94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26da98: 0x46010000
    ctx->pc = 0x26da98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26da9c: 0xe4a00000
    ctx->pc = 0x26da9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x26daa0: 0x3c02003c
    ctx->pc = 0x26daa0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26daa4: 0x3c03003c
    ctx->pc = 0x26daa4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26daa8: 0xc4413934
    ctx->pc = 0x26daa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26daac: 0xc4603950
    ctx->pc = 0x26daacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26dab0: 0x46000836
    ctx->pc = 0x26dab0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26dab4:
    // 0x26dab4: 0x45000002
    ctx->pc = 0x26DAB4u;
    {
        const bool branch_taken_0x26dab4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dab4) {
            ctx->pc = 0x26DAC0u;
            goto label_26dac0;
        }
    }
    ctx->pc = 0x26DABCu;
label_26dabc:
    // 0x26dabc: 0x24120001
    ctx->pc = 0x26dabcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
label_26dac0:
    // 0x26dac0: 0x12400014
    ctx->pc = 0x26DAC0u;
    {
        const bool branch_taken_0x26dac0 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x26DAC4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26dac0) {
            ctx->pc = 0x26DB14u;
            goto label_26db14;
        }
    }
    ctx->pc = 0x26DAC8u;
    // 0x26dac8: 0xc441392c
    ctx->pc = 0x26dac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dacc: 0x44800000
    ctx->pc = 0x26daccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x26dad0: 0x46010034
    ctx->pc = 0x26dad0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dad4: 0x45000006
    ctx->pc = 0x26DAD4u;
    {
        const bool branch_taken_0x26dad4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dad4) {
            ctx->pc = 0x26DAF0u;
            goto label_26daf0;
        }
    }
    ctx->pc = 0x26DADCu;
    // 0x26dadc: 0x3c013a64
    ctx->pc = 0x26dadcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)14948 << 16));
    // 0x26dae0: 0x3421c389
    ctx->pc = 0x26dae0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 50057));
    // 0x26dae4: 0x44810000
    ctx->pc = 0x26dae4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26dae8: 0x10000009
    ctx->pc = 0x26DAE8u;
    {
        const bool branch_taken_0x26dae8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26DAECu;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x26dae8) {
            ctx->pc = 0x26DB10u;
            goto label_26db10;
        }
    }
    ctx->pc = 0x26DAF0u;
label_26daf0:
    // 0x26daf0: 0x46000834
    ctx->pc = 0x26daf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26daf4: 0x0
    ctx->pc = 0x26daf4u;
    // NOP
    // 0x26daf8: 0x45020007
    ctx->pc = 0x26DAF8u;
    {
        const bool branch_taken_0x26daf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26daf8) {
            ctx->pc = 0x26DAFCu;
            SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
            ctx->pc = 0x26DB18u;
            goto label_26db18;
        }
    }
    ctx->pc = 0x26DB00u;
    // 0x26db00: 0x3c013a64
    ctx->pc = 0x26db00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14948 << 16));
    // 0x26db04: 0x3421c389
    ctx->pc = 0x26db04u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 50057));
    // 0x26db08: 0x44810000
    ctx->pc = 0x26db08u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26db0c: 0x46000800
    ctx->pc = 0x26db0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26db10:
    // 0x26db10: 0xe440392c
    ctx->pc = 0x26db10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14636), bits); }
label_26db14:
    // 0x26db14: 0x3c02003c
    ctx->pc = 0x26db14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_26db18:
    // 0x26db18: 0x3c03003c
    ctx->pc = 0x26db18u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26db1c: 0xc4413954
    ctx->pc = 0x26db1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26db20: 0xc4603938
    ctx->pc = 0x26db20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26db24: 0x46000881
    ctx->pc = 0x26db24u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26db28: 0x3c014049
    ctx->pc = 0x26db28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x26db2c: 0x34210fdb
    ctx->pc = 0x26db2cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26db30: 0x44810000
    ctx->pc = 0x26db30u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26db34: 0x46020034
    ctx->pc = 0x26db34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26db38: 0x0
    ctx->pc = 0x26db38u;
    // NOP
    // 0x26db3c: 0x45000006
    ctx->pc = 0x26DB3Cu;
    {
        const bool branch_taken_0x26db3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26DB40u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26db3c) {
            ctx->pc = 0x26DB58u;
            goto label_26db58;
        }
    }
    ctx->pc = 0x26DB44u;
    // 0x26db44: 0x3c0140c9
    ctx->pc = 0x26db44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26db48: 0x34210fdb
    ctx->pc = 0x26db48u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26db4c: 0x44810000
    ctx->pc = 0x26db4cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26db50: 0x1000000c
    ctx->pc = 0x26DB50u;
    {
        const bool branch_taken_0x26db50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26DB54u;
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x26db50) {
            ctx->pc = 0x26DB84u;
            goto label_26db84;
        }
    }
    ctx->pc = 0x26DB58u;
label_26db58:
    // 0x26db58: 0x3c01c049
    ctx->pc = 0x26db58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x26db5c: 0x34210fdb
    ctx->pc = 0x26db5cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26db60: 0x44810000
    ctx->pc = 0x26db60u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26db64: 0x46001036
    ctx->pc = 0x26db64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26db68: 0x0
    ctx->pc = 0x26db68u;
    // NOP
    // 0x26db6c: 0x45000005
    ctx->pc = 0x26DB6Cu;
    {
        const bool branch_taken_0x26db6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26DB70u;
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        if (branch_taken_0x26db6c) {
            ctx->pc = 0x26DB84u;
            goto label_26db84;
        }
    }
    ctx->pc = 0x26DB74u;
    // 0x26db74: 0x3c0140c9
    ctx->pc = 0x26db74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26db78: 0x34210fdb
    ctx->pc = 0x26db78u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26db7c: 0x44810000
    ctx->pc = 0x26db7cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26db80: 0x46001040
    ctx->pc = 0x26db80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_26db84:
    // 0x26db84: 0x46000886
    ctx->pc = 0x26db84u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x26db88: 0x3c02003c
    ctx->pc = 0x26db88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26db8c: 0x24453930
    ctx->pc = 0x26db8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 14640));
    // 0x26db90: 0x3c030031
    ctx->pc = 0x26db90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x26db94: 0x8c62ffbc
    ctx->pc = 0x26db94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26db98: 0x4400005
    ctx->pc = 0x26DB98u;
    {
        const bool branch_taken_0x26db98 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26DB9Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26db98) {
            ctx->pc = 0x26DBB0u;
            goto label_26dbb0;
        }
    }
    ctx->pc = 0x26DBA0u;
    // 0x26dba0: 0x44820800
    ctx->pc = 0x26dba0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x26dba4: 0x46800860
    ctx->pc = 0x26dba4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26dba8: 0x10000009
    ctx->pc = 0x26DBA8u;
    {
        const bool branch_taken_0x26dba8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26DBACu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x26dba8) {
            ctx->pc = 0x26DBD0u;
            goto label_26dbd0;
        }
    }
    ctx->pc = 0x26DBB0u;
label_26dbb0:
    // 0x26dbb0: 0x8c820000
    ctx->pc = 0x26dbb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26dbb4: 0x30430001
    ctx->pc = 0x26dbb4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26dbb8: 0x21042
    ctx->pc = 0x26dbb8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26dbbc: 0x621825
    ctx->pc = 0x26dbbcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26dbc0: 0x44830800
    ctx->pc = 0x26dbc0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x26dbc4: 0x46800860
    ctx->pc = 0x26dbc4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26dbc8: 0x46010840
    ctx->pc = 0x26dbc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x26dbcc: 0xc4a00000
    ctx->pc = 0x26dbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26dbd0:
    // 0x26dbd0: 0x46000842
    ctx->pc = 0x26dbd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26dbd4: 0x44800000
    ctx->pc = 0x26dbd4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x26dbd8: 0x46020034
    ctx->pc = 0x26dbd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dbdc: 0x0
    ctx->pc = 0x26dbdcu;
    // NOP
    // 0x26dbe0: 0x45000014
    ctx->pc = 0x26DBE0u;
    {
        const bool branch_taken_0x26dbe0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26DBE4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26dbe0) {
            ctx->pc = 0x26DC34u;
            goto label_26dc34;
        }
    }
    ctx->pc = 0x26DBE8u;
    // 0x26dbe8: 0xc4433930
    ctx->pc = 0x26dbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26dbec: 0x3c013c0e
    ctx->pc = 0x26dbecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15374 << 16));
    // 0x26dbf0: 0x3421fa36
    ctx->pc = 0x26dbf0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 64054));
    // 0x26dbf4: 0x44810000
    ctx->pc = 0x26dbf4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26dbf8: 0x46001834
    ctx->pc = 0x26dbf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dbfc: 0x45000006
    ctx->pc = 0x26DBFCu;
    {
        const bool branch_taken_0x26dbfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dbfc) {
            ctx->pc = 0x26DC18u;
            goto label_26dc18;
        }
    }
    ctx->pc = 0x26DC04u;
    // 0x26dc04: 0x3c013a64
    ctx->pc = 0x26dc04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14948 << 16));
    // 0x26dc08: 0x3421c389
    ctx->pc = 0x26dc08u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 50057));
    // 0x26dc0c: 0x44810000
    ctx->pc = 0x26dc0cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26dc10: 0x46001800
    ctx->pc = 0x26dc10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x26dc14: 0xe4403930
    ctx->pc = 0x26dc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14640), bits); }
label_26dc18:
    // 0x26dc18: 0x44800000
    ctx->pc = 0x26dc18u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x26dc1c: 0x46010036
    ctx->pc = 0x26dc1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dc20: 0x45000030
    ctx->pc = 0x26DC20u;
    {
        const bool branch_taken_0x26dc20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dc20) {
            ctx->pc = 0x26DCE4u;
            goto label_26dce4;
        }
    }
    ctx->pc = 0x26DC28u;
    // 0x26dc28: 0x46011036
    ctx->pc = 0x26dc28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dc2c: 0x10000016
    ctx->pc = 0x26DC2Cu;
    {
        const bool branch_taken_0x26dc2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x26dc2c) {
            ctx->pc = 0x26DC88u;
            goto label_26dc88;
        }
    }
    ctx->pc = 0x26DC34u;
label_26dc34:
    // 0x26dc34: 0x46001034
    ctx->pc = 0x26dc34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dc38: 0x0
    ctx->pc = 0x26dc38u;
    // NOP
    // 0x26dc3c: 0x45000016
    ctx->pc = 0x26DC3Cu;
    {
        const bool branch_taken_0x26dc3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26DC40u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        if (branch_taken_0x26dc3c) {
            ctx->pc = 0x26DC98u;
            goto label_26dc98;
        }
    }
    ctx->pc = 0x26DC44u;
    // 0x26dc44: 0x3c01bc0e
    ctx->pc = 0x26dc44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48142 << 16));
    // 0x26dc48: 0x3421fa36
    ctx->pc = 0x26dc48u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 64054));
    // 0x26dc4c: 0x44810000
    ctx->pc = 0x26dc4cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26dc50: 0x46030034
    ctx->pc = 0x26dc50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dc54: 0x45000006
    ctx->pc = 0x26DC54u;
    {
        const bool branch_taken_0x26dc54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dc54) {
            ctx->pc = 0x26DC70u;
            goto label_26dc70;
        }
    }
    ctx->pc = 0x26DC5Cu;
    // 0x26dc5c: 0x3c013a64
    ctx->pc = 0x26dc5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)14948 << 16));
    // 0x26dc60: 0x3421c389
    ctx->pc = 0x26dc60u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 50057));
    // 0x26dc64: 0x44810000
    ctx->pc = 0x26dc64u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26dc68: 0x46001801
    ctx->pc = 0x26dc68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x26dc6c: 0xe4403930
    ctx->pc = 0x26dc6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14640), bits); }
label_26dc70:
    // 0x26dc70: 0x44800000
    ctx->pc = 0x26dc70u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x26dc74: 0x46000836
    ctx->pc = 0x26dc74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dc78: 0x4500001a
    ctx->pc = 0x26DC78u;
    {
        const bool branch_taken_0x26dc78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dc78) {
            ctx->pc = 0x26DCE4u;
            goto label_26dce4;
        }
    }
    ctx->pc = 0x26DC80u;
    // 0x26dc80: 0x46020836
    ctx->pc = 0x26dc80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dc84: 0x0
    ctx->pc = 0x26dc84u;
    // NOP
label_26dc88:
    // 0x26dc88: 0x45030016
    ctx->pc = 0x26DC88u;
    {
        const bool branch_taken_0x26dc88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dc88) {
            ctx->pc = 0x26DC8Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x26DCE4u;
            goto label_26dce4;
        }
    }
    ctx->pc = 0x26DC90u;
    // 0x26dc90: 0x10000014
    ctx->pc = 0x26DC90u;
    {
        const bool branch_taken_0x26dc90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x26dc90) {
            ctx->pc = 0x26DCE4u;
            goto label_26dce4;
        }
    }
    ctx->pc = 0x26DC98u;
label_26dc98:
    // 0x26dc98: 0x3c02003c
    ctx->pc = 0x26dc98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26dc9c: 0xc4423930
    ctx->pc = 0x26dc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26dca0: 0x44800000
    ctx->pc = 0x26dca0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x26dca4: 0x46020034
    ctx->pc = 0x26dca4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dca8: 0x45000006
    ctx->pc = 0x26DCA8u;
    {
        const bool branch_taken_0x26dca8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dca8) {
            ctx->pc = 0x26DCC4u;
            goto label_26dcc4;
        }
    }
    ctx->pc = 0x26DCB0u;
    // 0x26dcb0: 0x3c013a64
    ctx->pc = 0x26dcb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14948 << 16));
    // 0x26dcb4: 0x3421c389
    ctx->pc = 0x26dcb4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 50057));
    // 0x26dcb8: 0x44810000
    ctx->pc = 0x26dcb8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26dcbc: 0x10000008
    ctx->pc = 0x26DCBCu;
    {
        const bool branch_taken_0x26dcbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26DCC0u;
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x26dcbc) {
            ctx->pc = 0x26DCE0u;
            goto label_26dce0;
        }
    }
    ctx->pc = 0x26DCC4u;
label_26dcc4:
    // 0x26dcc4: 0x46001034
    ctx->pc = 0x26dcc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dcc8: 0x45000006
    ctx->pc = 0x26DCC8u;
    {
        const bool branch_taken_0x26dcc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dcc8) {
            ctx->pc = 0x26DCE4u;
            goto label_26dce4;
        }
    }
    ctx->pc = 0x26DCD0u;
    // 0x26dcd0: 0x3c013a64
    ctx->pc = 0x26dcd0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14948 << 16));
    // 0x26dcd4: 0x3421c389
    ctx->pc = 0x26dcd4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 50057));
    // 0x26dcd8: 0x44810000
    ctx->pc = 0x26dcd8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26dcdc: 0x46001000
    ctx->pc = 0x26dcdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_26dce0:
    // 0x26dce0: 0xe4403930
    ctx->pc = 0x26dce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14640), bits); }
label_26dce4:
    // 0x26dce4: 0x12400014
    ctx->pc = 0x26DCE4u;
    {
        const bool branch_taken_0x26dce4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x26DCE8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26dce4) {
            ctx->pc = 0x26DD38u;
            goto label_26dd38;
        }
    }
    ctx->pc = 0x26DCECu;
    // 0x26dcec: 0xc4423930
    ctx->pc = 0x26dcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26dcf0: 0x44800000
    ctx->pc = 0x26dcf0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x26dcf4: 0x46020034
    ctx->pc = 0x26dcf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dcf8: 0x45000006
    ctx->pc = 0x26DCF8u;
    {
        const bool branch_taken_0x26dcf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dcf8) {
            ctx->pc = 0x26DD14u;
            goto label_26dd14;
        }
    }
    ctx->pc = 0x26DD00u;
    // 0x26dd00: 0x3c013a64
    ctx->pc = 0x26dd00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14948 << 16));
    // 0x26dd04: 0x3421c389
    ctx->pc = 0x26dd04u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 50057));
    // 0x26dd08: 0x44810000
    ctx->pc = 0x26dd08u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26dd0c: 0x10000009
    ctx->pc = 0x26DD0Cu;
    {
        const bool branch_taken_0x26dd0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26DD10u;
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x26dd0c) {
            ctx->pc = 0x26DD34u;
            goto label_26dd34;
        }
    }
    ctx->pc = 0x26DD14u;
label_26dd14:
    // 0x26dd14: 0x46001034
    ctx->pc = 0x26dd14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dd18: 0x0
    ctx->pc = 0x26dd18u;
    // NOP
    // 0x26dd1c: 0x45020007
    ctx->pc = 0x26DD1Cu;
    {
        const bool branch_taken_0x26dd1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dd1c) {
            ctx->pc = 0x26DD20u;
            SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
            ctx->pc = 0x26DD3Cu;
            goto label_26dd3c;
        }
    }
    ctx->pc = 0x26DD24u;
    // 0x26dd24: 0x3c013a64
    ctx->pc = 0x26dd24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14948 << 16));
    // 0x26dd28: 0x3421c389
    ctx->pc = 0x26dd28u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 50057));
    // 0x26dd2c: 0x44810000
    ctx->pc = 0x26dd2cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26dd30: 0x46001000
    ctx->pc = 0x26dd30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_26dd34:
    // 0x26dd34: 0xe4403930
    ctx->pc = 0x26dd34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14640), bits); }
label_26dd38:
    // 0x26dd38: 0x3c02003c
    ctx->pc = 0x26dd38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_26dd3c:
    // 0x26dd3c: 0xc4403938
    ctx->pc = 0x26dd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26dd40: 0x46000840
    ctx->pc = 0x26dd40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26dd44: 0xe4413938
    ctx->pc = 0x26dd44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14648), bits); }
    // 0x26dd48: 0x3c014049
    ctx->pc = 0x26dd48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x26dd4c: 0x34210fdb
    ctx->pc = 0x26dd4cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26dd50: 0x44810000
    ctx->pc = 0x26dd50u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26dd54: 0x46010034
    ctx->pc = 0x26dd54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dd58: 0x0
    ctx->pc = 0x26dd58u;
    // NOP
    // 0x26dd5c: 0x45000006
    ctx->pc = 0x26DD5Cu;
    {
        const bool branch_taken_0x26dd5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26DD60u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 14648));
        if (branch_taken_0x26dd5c) {
            ctx->pc = 0x26DD78u;
            goto label_26dd78;
        }
    }
    ctx->pc = 0x26DD64u;
    // 0x26dd64: 0x3c0140c9
    ctx->pc = 0x26dd64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26dd68: 0x34210fdb
    ctx->pc = 0x26dd68u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26dd6c: 0x44810000
    ctx->pc = 0x26dd6cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26dd70: 0x1000000e
    ctx->pc = 0x26DD70u;
    {
        const bool branch_taken_0x26dd70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26DD74u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x26dd70) {
            ctx->pc = 0x26DDACu;
            goto label_26ddac;
        }
    }
    ctx->pc = 0x26DD78u;
label_26dd78:
    // 0x26dd78: 0x3c02003c
    ctx->pc = 0x26dd78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26dd7c: 0xc4413938
    ctx->pc = 0x26dd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dd80: 0x3c01c049
    ctx->pc = 0x26dd80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x26dd84: 0x34210fdb
    ctx->pc = 0x26dd84u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26dd88: 0x44810000
    ctx->pc = 0x26dd88u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26dd8c: 0x46000836
    ctx->pc = 0x26dd8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dd90: 0x0
    ctx->pc = 0x26dd90u;
    // NOP
    // 0x26dd94: 0x45020005
    ctx->pc = 0x26DD94u;
    {
        const bool branch_taken_0x26dd94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dd94) {
            ctx->pc = 0x26DD98u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26DDACu;
            goto label_26ddac;
        }
    }
    ctx->pc = 0x26DD9Cu;
    // 0x26dd9c: 0x3c0140c9
    ctx->pc = 0x26dd9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26dda0: 0x34210fdb
    ctx->pc = 0x26dda0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26dda4: 0x44810000
    ctx->pc = 0x26dda4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26dda8: 0x46000800
    ctx->pc = 0x26dda8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26ddac:
    // 0x26ddac: 0xe4600000
    ctx->pc = 0x26ddacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x26ddb0: 0x3c02003c
    ctx->pc = 0x26ddb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26ddb4: 0xc4403934
    ctx->pc = 0x26ddb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ddb8: 0xe7a00060
    ctx->pc = 0x26ddb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x26ddbc: 0x3c02003c
    ctx->pc = 0x26ddbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26ddc0: 0xc4413938
    ctx->pc = 0x26ddc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ddc4: 0x3c014049
    ctx->pc = 0x26ddc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x26ddc8: 0x34210fdb
    ctx->pc = 0x26ddc8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26ddcc: 0x44810000
    ctx->pc = 0x26ddccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26ddd0: 0x46000840
    ctx->pc = 0x26ddd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ddd4: 0x46010034
    ctx->pc = 0x26ddd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ddd8: 0x0
    ctx->pc = 0x26ddd8u;
    // NOP
    // 0x26dddc: 0x45020006
    ctx->pc = 0x26DDDCu;
    {
        const bool branch_taken_0x26dddc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dddc) {
            ctx->pc = 0x26DDE0u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x26DDF8u;
            goto label_26ddf8;
        }
    }
    ctx->pc = 0x26DDE4u;
    // 0x26dde4: 0x3c0140c9
    ctx->pc = 0x26dde4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26dde8: 0x34210fdb
    ctx->pc = 0x26dde8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26ddec: 0x44810000
    ctx->pc = 0x26ddecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26ddf0: 0x10000013
    ctx->pc = 0x26DDF0u;
    {
        const bool branch_taken_0x26ddf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26DDF4u;
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x26ddf0) {
            ctx->pc = 0x26DE40u;
            goto label_26de40;
        }
    }
    ctx->pc = 0x26DDF8u;
label_26ddf8:
    // 0x26ddf8: 0x46000840
    ctx->pc = 0x26ddf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ddfc: 0x3c01c049
    ctx->pc = 0x26ddfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x26de00: 0x34210fdb
    ctx->pc = 0x26de00u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26de04: 0x44810000
    ctx->pc = 0x26de04u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26de08: 0x46000836
    ctx->pc = 0x26de08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26de0c: 0x0
    ctx->pc = 0x26de0cu;
    // NOP
    // 0x26de10: 0x45000006
    ctx->pc = 0x26DE10u;
    {
        const bool branch_taken_0x26de10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26DE14u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26de10) {
            ctx->pc = 0x26DE2Cu;
            goto label_26de2c;
        }
    }
    ctx->pc = 0x26DE18u;
    // 0x26de18: 0x3c0140c9
    ctx->pc = 0x26de18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26de1c: 0x34210fdb
    ctx->pc = 0x26de1cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26de20: 0x44810000
    ctx->pc = 0x26de20u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26de24: 0x10000006
    ctx->pc = 0x26DE24u;
    {
        const bool branch_taken_0x26de24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26DE28u;
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x26de24) {
            ctx->pc = 0x26DE40u;
            goto label_26de40;
        }
    }
    ctx->pc = 0x26DE2Cu;
label_26de2c:
    // 0x26de2c: 0xc4413938
    ctx->pc = 0x26de2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26de30: 0x3c014049
    ctx->pc = 0x26de30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x26de34: 0x34210fdb
    ctx->pc = 0x26de34u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26de38: 0x44810000
    ctx->pc = 0x26de38u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26de3c: 0x46000840
    ctx->pc = 0x26de3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26de40:
    // 0x26de40: 0xe7a10064
    ctx->pc = 0x26de40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x26de44: 0xafa00068
    ctx->pc = 0x26de44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x26de48: 0x3a0202d
    ctx->pc = 0x26de48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26de4c: 0xc0b5ae8
    ctx->pc = 0x26DE4Cu;
    SET_GPR_U32(ctx, 31, 0x26DE54u);
    ctx->pc = 0x26DE50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE54u; }
    }
    if (ctx->pc != 0x26DE54u) { return; }
    ctx->pc = 0x26DE54u;
    // 0x26de54: 0xafa00040
    ctx->pc = 0x26de54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x26de58: 0xafa00044
    ctx->pc = 0x26de58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x26de5c: 0xe7b40048
    ctx->pc = 0x26de5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26de60: 0x27a40040
    ctx->pc = 0x26de60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x26de64: 0x27a50050
    ctx->pc = 0x26de64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x26de68: 0xc0b57a2
    ctx->pc = 0x26DE68u;
    SET_GPR_U32(ctx, 31, 0x26DE70u);
    ctx->pc = 0x26DE6Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE70u; }
    }
    if (ctx->pc != 0x26DE70u) { return; }
    ctx->pc = 0x26DE70u;
    // 0x26de70: 0xc6000070
    ctx->pc = 0x26de70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26de74: 0xc7a10050
    ctx->pc = 0x26de74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26de78: 0x46010000
    ctx->pc = 0x26de78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26de7c: 0xe6000070
    ctx->pc = 0x26de7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x26de80: 0xc6000074
    ctx->pc = 0x26de80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26de84: 0xc7a10054
    ctx->pc = 0x26de84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26de88: 0x46010000
    ctx->pc = 0x26de88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26de8c: 0xe6000074
    ctx->pc = 0x26de8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x26de90: 0xc6000078
    ctx->pc = 0x26de90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26de94: 0xc7a10058
    ctx->pc = 0x26de94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26de98: 0x46010000
    ctx->pc = 0x26de98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26de9c: 0xe6000078
    ctx->pc = 0x26de9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_26dea0:
    // 0x26dea0: 0xae0000c0
    ctx->pc = 0x26dea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x26dea4: 0xae0000c4
    ctx->pc = 0x26dea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x26dea8: 0xae0000c8
    ctx->pc = 0x26dea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x26deac: 0x3c020034
    ctx->pc = 0x26deacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26deb0: 0x3c03003c
    ctx->pc = 0x26deb0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26deb4: 0xc441f8f8
    ctx->pc = 0x26deb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26deb8: 0xc46038f0
    ctx->pc = 0x26deb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26debc: 0x46000841
    ctx->pc = 0x26debcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26dec0: 0x3c02003c
    ctx->pc = 0x26dec0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26dec4: 0x2445395c
    ctx->pc = 0x26dec4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 14684));
    // 0x26dec8: 0x3c030031
    ctx->pc = 0x26dec8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x26decc: 0x8c62ffbc
    ctx->pc = 0x26deccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26ded0: 0x4400005
    ctx->pc = 0x26DED0u;
    {
        const bool branch_taken_0x26ded0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26DED4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26ded0) {
            ctx->pc = 0x26DEE8u;
            goto label_26dee8;
        }
    }
    ctx->pc = 0x26DED8u;
    // 0x26ded8: 0x44821000
    ctx->pc = 0x26ded8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x26dedc: 0x468010a0
    ctx->pc = 0x26dedcu;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x26dee0: 0x10000009
    ctx->pc = 0x26DEE0u;
    {
        const bool branch_taken_0x26dee0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26DEE4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x26dee0) {
            ctx->pc = 0x26DF08u;
            goto label_26df08;
        }
    }
    ctx->pc = 0x26DEE8u;
label_26dee8:
    // 0x26dee8: 0x8c820000
    ctx->pc = 0x26dee8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26deec: 0x30430001
    ctx->pc = 0x26deecu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26def0: 0x21042
    ctx->pc = 0x26def0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26def4: 0x621825
    ctx->pc = 0x26def4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26def8: 0x44831000
    ctx->pc = 0x26def8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x26defc: 0x468010a0
    ctx->pc = 0x26defcu;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x26df00: 0x46021080
    ctx->pc = 0x26df00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x26df04: 0xc4a00000
    ctx->pc = 0x26df04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26df08:
    // 0x26df08: 0x46001082
    ctx->pc = 0x26df08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26df0c: 0x44800000
    ctx->pc = 0x26df0cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x26df10: 0x46010034
    ctx->pc = 0x26df10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26df14: 0x0
    ctx->pc = 0x26df14u;
    // NOP
    // 0x26df18: 0x45000009
    ctx->pc = 0x26DF18u;
    {
        const bool branch_taken_0x26df18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26DF1Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x26df18) {
            ctx->pc = 0x26DF40u;
            goto label_26df40;
        }
    }
    ctx->pc = 0x26DF20u;
    // 0x26df20: 0xc46038f0
    ctx->pc = 0x26df20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26df24: 0x46001000
    ctx->pc = 0x26df24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x26df28: 0xe46038f0
    ctx->pc = 0x26df28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 14576), bits); }
    // 0x26df2c: 0x3c020034
    ctx->pc = 0x26df2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26df30: 0xc441f8f8
    ctx->pc = 0x26df30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26df34: 0x46000836
    ctx->pc = 0x26df34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26df38: 0x10000008
    ctx->pc = 0x26DF38u;
    {
        const bool branch_taken_0x26df38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x26df38) {
            ctx->pc = 0x26DF5Cu;
            goto label_26df5c;
        }
    }
    ctx->pc = 0x26DF40u;
label_26df40:
    // 0x26df40: 0xc46038f0
    ctx->pc = 0x26df40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26df44: 0x46020001
    ctx->pc = 0x26df44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x26df48: 0xe46038f0
    ctx->pc = 0x26df48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 14576), bits); }
    // 0x26df4c: 0x3c020034
    ctx->pc = 0x26df4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26df50: 0xc441f8f8
    ctx->pc = 0x26df50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26df54: 0x46010036
    ctx->pc = 0x26df54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26df58: 0x0
    ctx->pc = 0x26df58u;
    // NOP
label_26df5c:
    // 0x26df5c: 0x45030001
    ctx->pc = 0x26DF5Cu;
    {
        const bool branch_taken_0x26df5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26df5c) {
            ctx->pc = 0x26DF60u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 14576), bits); }
            ctx->pc = 0x26DF64u;
            goto label_26df64;
        }
    }
    ctx->pc = 0x26DF64u;
label_26df64:
    // 0x26df64: 0x3c02003c
    ctx->pc = 0x26df64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26df68: 0xc44038f0
    ctx->pc = 0x26df68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26df6c: 0xe60000b0
    ctx->pc = 0x26df6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x26df70: 0x3a0202d
    ctx->pc = 0x26df70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26df74: 0xc0b5ae8
    ctx->pc = 0x26DF74u;
    SET_GPR_U32(ctx, 31, 0x26DF7Cu);
    ctx->pc = 0x26DF78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 176));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF7Cu; }
    }
    if (ctx->pc != 0x26DF7Cu) { return; }
    ctx->pc = 0x26DF7Cu;
    // 0x26df7c: 0xafa00040
    ctx->pc = 0x26df7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x26df80: 0xafa00044
    ctx->pc = 0x26df80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x26df84: 0xc60000d0
    ctx->pc = 0x26df84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26df88: 0xe7a00048
    ctx->pc = 0x26df88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26df8c: 0x27a40040
    ctx->pc = 0x26df8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x26df90: 0x27a50050
    ctx->pc = 0x26df90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x26df94: 0xc0b57a2
    ctx->pc = 0x26DF94u;
    SET_GPR_U32(ctx, 31, 0x26DF9Cu);
    ctx->pc = 0x26DF98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF9Cu; }
    }
    if (ctx->pc != 0x26DF9Cu) { return; }
    ctx->pc = 0x26DF9Cu;
    // 0x26df9c: 0xc6000070
    ctx->pc = 0x26df9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26dfa0: 0xc7a10050
    ctx->pc = 0x26dfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dfa4: 0x46010000
    ctx->pc = 0x26dfa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26dfa8: 0xe6000140
    ctx->pc = 0x26dfa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
    // 0x26dfac: 0xc6000074
    ctx->pc = 0x26dfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26dfb0: 0xc7a10054
    ctx->pc = 0x26dfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dfb4: 0x46010000
    ctx->pc = 0x26dfb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26dfb8: 0xe6000144
    ctx->pc = 0x26dfb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x26dfbc: 0xc6000078
    ctx->pc = 0x26dfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26dfc0: 0xc7a10058
    ctx->pc = 0x26dfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dfc4: 0x46010000
    ctx->pc = 0x26dfc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26dfc8: 0xe6000148
    ctx->pc = 0x26dfc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
    // 0x26dfcc: 0x26040070
    ctx->pc = 0x26dfccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 112));
    // 0x26dfd0: 0x26050140
    ctx->pc = 0x26dfd0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 320));
    // 0x26dfd4: 0xc099c08
    ctx->pc = 0x26DFD4u;
    SET_GPR_U32(ctx, 31, 0x26DFDCu);
    ctx->pc = 0x26DFD8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x267020u;
    {
        const uint32_t __entryPc = ctx->pc;
        fix_radius_0x267020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DFDCu; }
    }
    if (ctx->pc != 0x26DFDCu) { return; }
    ctx->pc = 0x26DFDCu;
label_26dfdc:
    // 0x26dfdc: 0xdfbf00a0
    ctx->pc = 0x26dfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_26dfe0:
    // 0x26dfe0: 0xdfb20090
    ctx->pc = 0x26dfe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26dfe4: 0xdfb10080
    ctx->pc = 0x26dfe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26dfe8: 0xdfb00070
    ctx->pc = 0x26dfe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26dfec: 0xc7b400b0
    ctx->pc = 0x26dfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26dff0: 0x3e00008
    ctx->pc = 0x26DFF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26DFF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26D4D4u: goto label_26d4d4;
            case 0x26D4F0u: goto label_26d4f0;
            case 0x26D50Cu: goto label_26d50c;
            case 0x26D558u: goto label_26d558;
            case 0x26D578u: goto label_26d578;
            case 0x26D5C4u: goto label_26d5c4;
            case 0x26D5E8u: goto label_26d5e8;
            case 0x26D5F0u: goto label_26d5f0;
            case 0x26D610u: goto label_26d610;
            case 0x26D62Cu: goto label_26d62c;
            case 0x26D674u: goto label_26d674;
            case 0x26D6A4u: goto label_26d6a4;
            case 0x26D714u: goto label_26d714;
            case 0x26D718u: goto label_26d718;
            case 0x26D744u: goto label_26d744;
            case 0x26D74Cu: goto label_26d74c;
            case 0x26D768u: goto label_26d768;
            case 0x26D784u: goto label_26d784;
            case 0x26D878u: goto label_26d878;
            case 0x26D89Cu: goto label_26d89c;
            case 0x26D8E8u: goto label_26d8e8;
            case 0x26D918u: goto label_26d918;
            case 0x26D96Cu: goto label_26d96c;
            case 0x26D99Cu: goto label_26d99c;
            case 0x26D9BCu: goto label_26d9bc;
            case 0x26D9E8u: goto label_26d9e8;
            case 0x26DA40u: goto label_26da40;
            case 0x26DA70u: goto label_26da70;
            case 0x26DA90u: goto label_26da90;
            case 0x26DAB4u: goto label_26dab4;
            case 0x26DABCu: goto label_26dabc;
            case 0x26DAC0u: goto label_26dac0;
            case 0x26DAF0u: goto label_26daf0;
            case 0x26DB10u: goto label_26db10;
            case 0x26DB14u: goto label_26db14;
            case 0x26DB18u: goto label_26db18;
            case 0x26DB58u: goto label_26db58;
            case 0x26DB84u: goto label_26db84;
            case 0x26DBB0u: goto label_26dbb0;
            case 0x26DBD0u: goto label_26dbd0;
            case 0x26DC18u: goto label_26dc18;
            case 0x26DC34u: goto label_26dc34;
            case 0x26DC70u: goto label_26dc70;
            case 0x26DC88u: goto label_26dc88;
            case 0x26DC98u: goto label_26dc98;
            case 0x26DCC4u: goto label_26dcc4;
            case 0x26DCE0u: goto label_26dce0;
            case 0x26DCE4u: goto label_26dce4;
            case 0x26DD14u: goto label_26dd14;
            case 0x26DD34u: goto label_26dd34;
            case 0x26DD38u: goto label_26dd38;
            case 0x26DD3Cu: goto label_26dd3c;
            case 0x26DD78u: goto label_26dd78;
            case 0x26DDACu: goto label_26ddac;
            case 0x26DDF8u: goto label_26ddf8;
            case 0x26DE2Cu: goto label_26de2c;
            case 0x26DE40u: goto label_26de40;
            case 0x26DEA0u: goto label_26dea0;
            case 0x26DEE8u: goto label_26dee8;
            case 0x26DF08u: goto label_26df08;
            case 0x26DF40u: goto label_26df40;
            case 0x26DF5Cu: goto label_26df5c;
            case 0x26DF64u: goto label_26df64;
            case 0x26DFDCu: goto label_26dfdc;
            case 0x26DFE0u: goto label_26dfe0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26DFF8u;
}
