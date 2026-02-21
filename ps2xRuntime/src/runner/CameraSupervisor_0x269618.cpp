#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CameraSupervisor
// Address: 0x269618 - 0x269d7c
void CameraSupervisor_0x269618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x269618u;

    // 0x269618: 0x27bdff60
    ctx->pc = 0x269618u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x26961c: 0xffbf0060
    ctx->pc = 0x26961cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x269620: 0xffb30050
    ctx->pc = 0x269620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x269624: 0xffb20040
    ctx->pc = 0x269624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x269628: 0xffb10030
    ctx->pc = 0x269628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x26962c: 0xffb00020
    ctx->pc = 0x26962cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x269630: 0xe7b90098
    ctx->pc = 0x269630u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x269634: 0xe7b80090
    ctx->pc = 0x269634u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x269638: 0xe7b70088
    ctx->pc = 0x269638u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x26963c: 0xe7b60080
    ctx->pc = 0x26963cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x269640: 0xe7b50078
    ctx->pc = 0x269640u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x269644: 0xe7b40070
    ctx->pc = 0x269644u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x269648: 0x80882d
    ctx->pc = 0x269648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26964c: 0x240301a0
    ctx->pc = 0x26964cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x269650: 0x2231818
    ctx->pc = 0x269650u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x269654: 0x3c020034
    ctx->pc = 0x269654u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269658: 0x2442eb60
    ctx->pc = 0x269658u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26965c: 0x628021
    ctx->pc = 0x26965cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x269660: 0x3c020034
    ctx->pc = 0x269660u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269664: 0x8c53fa04
    ctx->pc = 0x269664u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 4294965764)));
    // 0x269668: 0x3c01447a
    ctx->pc = 0x269668u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17530 << 16));
    // 0x26966c: 0x4481b000
    ctx->pc = 0x26966cu;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
    // 0x269670: 0x3c01c47a
    ctx->pc = 0x269670u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50298 << 16));
    // 0x269674: 0x4481a800
    ctx->pc = 0x269674u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x269678: 0x4600ae06
    ctx->pc = 0x269678u;
    ctx->f[24] = FPU_MOV_S(ctx->f[21]);
    // 0x26967c: 0x4600b5c6
    ctx->pc = 0x26967cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[22]);
    // 0x269680: 0x4480a000
    ctx->pc = 0x269680u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x269684: 0xc0aa372
    ctx->pc = 0x269684u;
    SET_GPR_U32(ctx, 31, 0x26968Cu);
    ctx->pc = 0x269688u;
    ctx->f[25] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2A8DC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBScreenHeight_0x2a8dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26968Cu; }
    }
    if (ctx->pc != 0x26968Cu) { return; }
    ctx->pc = 0x26968Cu;
    // 0x26968c: 0xc0aa36c
    ctx->pc = 0x26968Cu;
    SET_GPR_U32(ctx, 31, 0x269694u);
    ctx->pc = 0x269690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A8DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBScreenWidth_0x2a8db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269694u; }
    }
    if (ctx->pc != 0x269694u) { return; }
    ctx->pc = 0x269694u;
    // 0x269694: 0x40282d
    ctx->pc = 0x269694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269698: 0x3c020034
    ctx->pc = 0x269698u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26969c: 0x8c42e7c8
    ctx->pc = 0x26969cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x2696a0: 0x104001aa
    ctx->pc = 0x2696A0u;
    {
        const bool branch_taken_0x2696a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2696A4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x2696a0) {
            ctx->pc = 0x269D4Cu;
            goto label_269d4c;
        }
    }
    ctx->pc = 0x2696A8u;
    // 0x2696a8: 0x162001a8
    ctx->pc = 0x2696A8u;
    {
        const bool branch_taken_0x2696a8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x2696ACu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 96)));
        if (branch_taken_0x2696a8) {
            ctx->pc = 0x269D4Cu;
            goto label_269d4c;
        }
    }
    ctx->pc = 0x2696B0u;
    // 0x2696b0: 0x3c020034
    ctx->pc = 0x2696b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2696b4: 0x8c42f520
    ctx->pc = 0x2696b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294964512)));
    // 0x2696b8: 0x544001a5
    ctx->pc = 0x2696B8u;
    {
        const bool branch_taken_0x2696b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2696b8) {
            ctx->pc = 0x2696BCu;
            SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->pc = 0x269D50u;
            goto label_269d50;
        }
    }
    ctx->pc = 0x2696C0u;
    // 0x2696c0: 0x8e0300f8
    ctx->pc = 0x2696c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x2696c4: 0x24020003
    ctx->pc = 0x2696c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2696c8: 0x546201a1
    ctx->pc = 0x2696C8u;
    {
        const bool branch_taken_0x2696c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2696c8) {
            ctx->pc = 0x2696CCu;
            SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->pc = 0x269D50u;
            goto label_269d50;
        }
    }
    ctx->pc = 0x2696D0u;
    // 0x2696d0: 0x3c020036
    ctx->pc = 0x2696d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2696d4: 0x8c43d934
    ctx->pc = 0x2696d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x2696d8: 0x463019d
    ctx->pc = 0x2696D8u;
    {
        const bool branch_taken_0x2696d8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2696d8) {
            ctx->pc = 0x2696DCu;
            SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->pc = 0x269D50u;
            goto label_269d50;
        }
    }
    ctx->pc = 0x2696E0u;
    // 0x2696e0: 0x24020022
    ctx->pc = 0x2696e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 34));
    // 0x2696e4: 0x10620199
    ctx->pc = 0x2696E4u;
    {
        const bool branch_taken_0x2696e4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2696E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2696e4) {
            ctx->pc = 0x269D4Cu;
            goto label_269d4c;
        }
    }
    ctx->pc = 0x2696ECu;
    // 0x2696ec: 0xe7b40000
    ctx->pc = 0x2696ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2696f0: 0xe7b40004
    ctx->pc = 0x2696f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2696f4: 0xe7b40008
    ctx->pc = 0x2696f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2696f8: 0xc440fa14
    ctx->pc = 0x2696f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2696fc: 0x46140032
    ctx->pc = 0x2696fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269700: 0x0
    ctx->pc = 0x269700u;
    // NOP
    // 0x269704: 0x45000006
    ctx->pc = 0x269704u;
    {
        const bool branch_taken_0x269704 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x269708u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x269704) {
            ctx->pc = 0x269720u;
            goto label_269720;
        }
    }
    ctx->pc = 0x26970Cu;
    // 0x26970c: 0xc440fa18
    ctx->pc = 0x26970cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269710: 0x46140032
    ctx->pc = 0x269710u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269714: 0x0
    ctx->pc = 0x269714u;
    // NOP
    // 0x269718: 0x4501000b
    ctx->pc = 0x269718u;
    {
        const bool branch_taken_0x269718 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26971Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x269718) {
            ctx->pc = 0x269748u;
            goto label_269748;
        }
    }
    ctx->pc = 0x269720u;
label_269720:
    // 0x269720: 0x3c030034
    ctx->pc = 0x269720u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x269724: 0x24020001
    ctx->pc = 0x269724u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x269728: 0xac62fa04
    ctx->pc = 0x269728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965764), GPR_U32(ctx, 2));
    // 0x26972c: 0x3c040034
    ctx->pc = 0x26972cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x269730: 0x3c030031
    ctx->pc = 0x269730u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x269734: 0x8c82fa1c
    ctx->pc = 0x269734u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294965788)));
    // 0x269738: 0x8c63ffbc
    ctx->pc = 0x269738u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26973c: 0x431021
    ctx->pc = 0x26973cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269740: 0x10000007
    ctx->pc = 0x269740u;
    {
        const bool branch_taken_0x269740 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x269744u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294965788), GPR_U32(ctx, 2));
        if (branch_taken_0x269740) {
            ctx->pc = 0x269760u;
            goto label_269760;
        }
    }
    ctx->pc = 0x269748u;
label_269748:
    // 0x269748: 0xac40fa04
    ctx->pc = 0x269748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965764), GPR_U32(ctx, 0));
    // 0x26974c: 0x3c020034
    ctx->pc = 0x26974cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269750: 0xac40fa1c
    ctx->pc = 0x269750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965788), GPR_U32(ctx, 0));
    // 0x269754: 0x3c020034
    ctx->pc = 0x269754u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269758: 0xc4c00030
    ctx->pc = 0x269758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26975c: 0xe440f904
    ctx->pc = 0x26975cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965508), bits); }
label_269760:
    // 0x269760: 0x3c020034
    ctx->pc = 0x269760u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269764: 0x8c42f8fc
    ctx->pc = 0x269764u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965500)));
    // 0x269768: 0x18400053
    ctx->pc = 0x269768u;
    {
        const bool branch_taken_0x269768 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26976Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x269768) {
            ctx->pc = 0x2698B8u;
            goto label_2698b8;
        }
    }
    ctx->pc = 0x269770u;
    // 0x269770: 0x202d
    ctx->pc = 0x269770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269774: 0x2443f530
    ctx->pc = 0x269774u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294964528));
label_269778:
    // 0x269778: 0x8c620000
    ctx->pc = 0x269778u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26977c: 0x50400016
    ctx->pc = 0x26977Cu;
    {
        const bool branch_taken_0x26977c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x26977c) {
            ctx->pc = 0x269780u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x2697D8u;
            goto label_2697d8;
        }
    }
    ctx->pc = 0x269784u;
    // 0x269784: 0xc4600030
    ctx->pc = 0x269784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269788: 0x46160034
    ctx->pc = 0x269788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26978c: 0x0
    ctx->pc = 0x26978cu;
    // NOP
    // 0x269790: 0x45030002
    ctx->pc = 0x269790u;
    {
        const bool branch_taken_0x269790 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x269790) {
            ctx->pc = 0x269794u;
            ctx->f[22] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x26979Cu;
            goto label_26979c;
        }
    }
    ctx->pc = 0x269798u;
    // 0x269798: 0xc4600030
    ctx->pc = 0x269798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26979c:
    // 0x26979c: 0x4600c034
    ctx->pc = 0x26979cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2697a0: 0x0
    ctx->pc = 0x2697a0u;
    // NOP
    // 0x2697a4: 0x45030001
    ctx->pc = 0x2697A4u;
    {
        const bool branch_taken_0x2697a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2697a4) {
            ctx->pc = 0x2697A8u;
            ctx->f[24] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x2697ACu;
            goto label_2697ac;
        }
    }
    ctx->pc = 0x2697ACu;
label_2697ac:
    // 0x2697ac: 0xc4600034
    ctx->pc = 0x2697acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2697b0: 0x4600a834
    ctx->pc = 0x2697b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2697b4: 0x0
    ctx->pc = 0x2697b4u;
    // NOP
    // 0x2697b8: 0x45030001
    ctx->pc = 0x2697B8u;
    {
        const bool branch_taken_0x2697b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2697b8) {
            ctx->pc = 0x2697BCu;
            ctx->f[21] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x2697C0u;
            goto label_2697c0;
        }
    }
    ctx->pc = 0x2697C0u;
label_2697c0:
    // 0x2697c0: 0xc460003c
    ctx->pc = 0x2697c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2697c4: 0x46170034
    ctx->pc = 0x2697c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2697c8: 0x0
    ctx->pc = 0x2697c8u;
    // NOP
    // 0x2697cc: 0x45030001
    ctx->pc = 0x2697CCu;
    {
        const bool branch_taken_0x2697cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2697cc) {
            ctx->pc = 0x2697D0u;
            ctx->f[23] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x2697D4u;
            goto label_2697d4;
        }
    }
    ctx->pc = 0x2697D4u;
label_2697d4:
    // 0x2697d4: 0x24840001
    ctx->pc = 0x2697d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_2697d8:
    // 0x2697d8: 0x2882000f
    ctx->pc = 0x2697d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 15));
    // 0x2697dc: 0x1440ffe6
    ctx->pc = 0x2697DCu;
    {
        const bool branch_taken_0x2697dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2697E0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 64));
        if (branch_taken_0x2697dc) {
            ctx->pc = 0x269778u;
            goto label_269778;
        }
    }
    ctx->pc = 0x2697E4u;
    // 0x2697e4: 0x3c020034
    ctx->pc = 0x2697e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2697e8: 0x8c43f8fc
    ctx->pc = 0x2697e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965500)));
    // 0x2697ec: 0x24020001
    ctx->pc = 0x2697ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2697f0: 0x50620001
    ctx->pc = 0x2697F0u;
    {
        const bool branch_taken_0x2697f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2697f0) {
            ctx->pc = 0x2697F4u;
            ctx->f[23] = FPU_MOV_S(ctx->f[21]);
            ctx->pc = 0x2697F8u;
            goto label_2697f8;
        }
    }
    ctx->pc = 0x2697F8u;
label_2697f8:
    // 0x2697f8: 0x4618b040
    ctx->pc = 0x2697f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[24]);
    // 0x2697fc: 0x3c013f00
    ctx->pc = 0x2697fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x269800: 0x44810000
    ctx->pc = 0x269800u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x269804: 0x46000842
    ctx->pc = 0x269804u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x269808: 0x4617a880
    ctx->pc = 0x269808u;
    ctx->f[2] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
    // 0x26980c: 0x46001082
    ctx->pc = 0x26980cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x269810: 0x517c2
    ctx->pc = 0x269810u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 31));
    // 0x269814: 0xa21021
    ctx->pc = 0x269814u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x269818: 0x21043
    ctx->pc = 0x269818u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x26981c: 0x44820000
    ctx->pc = 0x26981cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x269820: 0x46800020
    ctx->pc = 0x269820u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x269824: 0x46000e41
    ctx->pc = 0x269824u;
    ctx->f[25] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x269828: 0x2642ffc0
    ctx->pc = 0x269828u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 4294967232));
    // 0x26982c: 0x21fc2
    ctx->pc = 0x26982cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x269830: 0x431021
    ctx->pc = 0x269830u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269834: 0x21043
    ctx->pc = 0x269834u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x269838: 0x2421023
    ctx->pc = 0x269838u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x26983c: 0x44820000
    ctx->pc = 0x26983cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x269840: 0x46800020
    ctx->pc = 0x269840u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x269844: 0x3c020034
    ctx->pc = 0x269844u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269848: 0x8c42f8fc
    ctx->pc = 0x269848u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965500)));
    // 0x26984c: 0x1840001a
    ctx->pc = 0x26984Cu;
    {
        const bool branch_taken_0x26984c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x269850u;
        ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x26984c) {
            ctx->pc = 0x2698B8u;
            goto label_2698b8;
        }
    }
    ctx->pc = 0x269854u;
    // 0x269854: 0xc60100d0
    ctx->pc = 0x269854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269858: 0xc4c00030
    ctx->pc = 0x269858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26985c: 0x46000836
    ctx->pc = 0x26985cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269860: 0x0
    ctx->pc = 0x269860u;
    // NOP
    // 0x269864: 0x45010014
    ctx->pc = 0x269864u;
    {
        const bool branch_taken_0x269864 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x269868u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x269864) {
            ctx->pc = 0x2698B8u;
            goto label_2698b8;
        }
    }
    ctx->pc = 0x26986Cu;
    // 0x26986c: 0x8c42f934
    ctx->pc = 0x26986cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965556)));
    // 0x269870: 0x14400009
    ctx->pc = 0x269870u;
    {
        const bool branch_taken_0x269870 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x269874u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x269870) {
            ctx->pc = 0x269898u;
            goto label_269898;
        }
    }
    ctx->pc = 0x269878u;
    // 0x269878: 0x3c020034
    ctx->pc = 0x269878u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26987c: 0x8c42f940
    ctx->pc = 0x26987cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965568)));
    // 0x269880: 0x10400004
    ctx->pc = 0x269880u;
    {
        const bool branch_taken_0x269880 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x269884u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x269880) {
            ctx->pc = 0x269894u;
            goto label_269894;
        }
    }
    ctx->pc = 0x269888u;
    // 0x269888: 0x8c42fa04
    ctx->pc = 0x269888u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965764)));
    // 0x26988c: 0x1040000a
    ctx->pc = 0x26988Cu;
    {
        const bool branch_taken_0x26988c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x26988c) {
            ctx->pc = 0x2698B8u;
            goto label_2698b8;
        }
    }
    ctx->pc = 0x269894u;
label_269894:
    // 0x269894: 0x3c020034
    ctx->pc = 0x269894u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_269898:
    // 0x269898: 0xc441f9fc
    ctx->pc = 0x269898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26989c: 0x3c013f19
    ctx->pc = 0x26989cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16153 << 16));
    // 0x2698a0: 0x3421999a
    ctx->pc = 0x2698a0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x2698a4: 0x44810000
    ctx->pc = 0x2698a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2698a8: 0x46000834
    ctx->pc = 0x2698a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2698ac: 0x0
    ctx->pc = 0x2698acu;
    // NOP
    // 0x2698b0: 0x45020018
    ctx->pc = 0x2698B0u;
    {
        const bool branch_taken_0x2698b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2698b0) {
            ctx->pc = 0x2698B4u;
            ctx->f[1] = FPU_ABS_S(ctx->f[25]);
            ctx->pc = 0x269914u;
            goto label_269914;
        }
    }
    ctx->pc = 0x2698B8u;
label_2698b8:
    // 0x2698b8: 0x3c0140c0
    ctx->pc = 0x2698b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16576 << 16));
    // 0x2698bc: 0x44810000
    ctx->pc = 0x2698bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2698c0: 0x46190036
    ctx->pc = 0x2698c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2698c4: 0x45000008
    ctx->pc = 0x2698C4u;
    {
        const bool branch_taken_0x2698c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2698c4) {
            ctx->pc = 0x2698E8u;
            goto label_2698e8;
        }
    }
    ctx->pc = 0x2698CCu;
    // 0x2698cc: 0x3c013ca3
    ctx->pc = 0x2698ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15523 << 16));
    // 0x2698d0: 0x3421d70a
    ctx->pc = 0x2698d0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x2698d4: 0x44816000
    ctx->pc = 0x2698d4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2698d8: 0xc09a410
    ctx->pc = 0x2698D8u;
    SET_GPR_U32(ctx, 31, 0x2698E0u);
    ctx->pc = 0x269040u;
    {
        const uint32_t __entryPc = ctx->pc;
        DecHorz_0x269040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2698E0u; }
    }
    if (ctx->pc != 0x2698E0u) { return; }
    ctx->pc = 0x2698E0u;
    // 0x2698e0: 0x3c0140c0
    ctx->pc = 0x2698e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16576 << 16));
    // 0x2698e4: 0x44810000
    ctx->pc = 0x2698e4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2698e8:
    // 0x2698e8: 0x46140036
    ctx->pc = 0x2698e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2698ec: 0x0
    ctx->pc = 0x2698ecu;
    // NOP
    // 0x2698f0: 0x45000076
    ctx->pc = 0x2698F0u;
    {
        const bool branch_taken_0x2698f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2698F4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2698f0) {
            ctx->pc = 0x269ACCu;
            goto label_269acc;
        }
    }
    ctx->pc = 0x2698F8u;
    // 0x2698f8: 0x3c013ca3
    ctx->pc = 0x2698f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15523 << 16));
    // 0x2698fc: 0x3421d70a
    ctx->pc = 0x2698fcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x269900: 0x44816000
    ctx->pc = 0x269900u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x269904: 0xc09a474
    ctx->pc = 0x269904u;
    SET_GPR_U32(ctx, 31, 0x26990Cu);
    ctx->pc = 0x2691D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DecVert_0x2691d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26990Cu; }
    }
    if (ctx->pc != 0x26990Cu) { return; }
    ctx->pc = 0x26990Cu;
    // 0x26990c: 0x1000006f
    ctx->pc = 0x26990Cu;
    {
        const bool branch_taken_0x26990c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x269910u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26990c) {
            ctx->pc = 0x269ACCu;
            goto label_269acc;
        }
    }
    ctx->pc = 0x269914u;
label_269914:
    // 0x269914: 0x3c014180
    ctx->pc = 0x269914u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16768 << 16));
    // 0x269918: 0x44810000
    ctx->pc = 0x269918u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26991c: 0x46010036
    ctx->pc = 0x26991cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269920: 0x0
    ctx->pc = 0x269920u;
    // NOP
    // 0x269924: 0x45000006
    ctx->pc = 0x269924u;
    {
        const bool branch_taken_0x269924 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x269928u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x269924) {
            ctx->pc = 0x269940u;
            goto label_269940;
        }
    }
    ctx->pc = 0x26992Cu;
    // 0x26992c: 0xc441fa14
    ctx->pc = 0x26992cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269930: 0x44800000
    ctx->pc = 0x269930u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x269934: 0x46000832
    ctx->pc = 0x269934u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269938: 0x4501000f
    ctx->pc = 0x269938u;
    {
        const bool branch_taken_0x269938 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x269938) {
            ctx->pc = 0x269978u;
            goto label_269978;
        }
    }
    ctx->pc = 0x269940u;
label_269940:
    // 0x269940: 0x4600c845
    ctx->pc = 0x269940u;
    ctx->f[1] = FPU_ABS_S(ctx->f[25]);
    // 0x269944: 0x3c0140c0
    ctx->pc = 0x269944u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16576 << 16));
    // 0x269948: 0x44810000
    ctx->pc = 0x269948u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26994c: 0x46010036
    ctx->pc = 0x26994cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269950: 0x0
    ctx->pc = 0x269950u;
    // NOP
    // 0x269954: 0x4500001a
    ctx->pc = 0x269954u;
    {
        const bool branch_taken_0x269954 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x269958u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x269954) {
            ctx->pc = 0x2699C0u;
            goto label_2699c0;
        }
    }
    ctx->pc = 0x26995Cu;
    // 0x26995c: 0xc441fa14
    ctx->pc = 0x26995cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269960: 0x44800000
    ctx->pc = 0x269960u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x269964: 0x46000832
    ctx->pc = 0x269964u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269968: 0x0
    ctx->pc = 0x269968u;
    // NOP
    // 0x26996c: 0x45030014
    ctx->pc = 0x26996Cu;
    {
        const bool branch_taken_0x26996c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26996c) {
            ctx->pc = 0x269970u;
            ctx->f[1] = FPU_ABS_S(ctx->f[25]);
            ctx->pc = 0x2699C0u;
            goto label_2699c0;
        }
    }
    ctx->pc = 0x269974u;
    // 0x269974: 0x44800000
    ctx->pc = 0x269974u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_269978:
    // 0x269978: 0x46190036
    ctx->pc = 0x269978u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26997c: 0x0
    ctx->pc = 0x26997cu;
    // NOP
    // 0x269980: 0x45000008
    ctx->pc = 0x269980u;
    {
        const bool branch_taken_0x269980 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x269984u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x269980) {
            ctx->pc = 0x2699A4u;
            goto label_2699a4;
        }
    }
    ctx->pc = 0x269988u;
    // 0x269988: 0xc440fa14
    ctx->pc = 0x269988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26998c: 0x3c013ca3
    ctx->pc = 0x26998cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15523 << 16));
    // 0x269990: 0x3421d70a
    ctx->pc = 0x269990u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x269994: 0x44810800
    ctx->pc = 0x269994u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x269998: 0x46010000
    ctx->pc = 0x269998u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26999c: 0x10000013
    ctx->pc = 0x26999Cu;
    {
        const bool branch_taken_0x26999c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2699A0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965780), bits); }
        if (branch_taken_0x26999c) {
            ctx->pc = 0x2699ECu;
            goto label_2699ec;
        }
    }
    ctx->pc = 0x2699A4u;
label_2699a4:
    // 0x2699a4: 0xc440fa14
    ctx->pc = 0x2699a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2699a8: 0x3c013ca3
    ctx->pc = 0x2699a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15523 << 16));
    // 0x2699ac: 0x3421d70a
    ctx->pc = 0x2699acu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x2699b0: 0x44810800
    ctx->pc = 0x2699b0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2699b4: 0x46010001
    ctx->pc = 0x2699b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2699b8: 0x1000000c
    ctx->pc = 0x2699B8u;
    {
        const bool branch_taken_0x2699b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2699BCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965780), bits); }
        if (branch_taken_0x2699b8) {
            ctx->pc = 0x2699ECu;
            goto label_2699ec;
        }
    }
    ctx->pc = 0x2699C0u;
label_2699c0:
    // 0x2699c0: 0x3c014080
    ctx->pc = 0x2699c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x2699c4: 0x44810000
    ctx->pc = 0x2699c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2699c8: 0x46000834
    ctx->pc = 0x2699c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2699cc: 0x0
    ctx->pc = 0x2699ccu;
    // NOP
    // 0x2699d0: 0x45020007
    ctx->pc = 0x2699D0u;
    {
        const bool branch_taken_0x2699d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2699d0) {
            ctx->pc = 0x2699D4u;
            ctx->f[1] = FPU_ABS_S(ctx->f[20]);
            ctx->pc = 0x2699F0u;
            goto label_2699f0;
        }
    }
    ctx->pc = 0x2699D8u;
    // 0x2699d8: 0x3c013c23
    ctx->pc = 0x2699d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x2699dc: 0x3421d70a
    ctx->pc = 0x2699dcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x2699e0: 0x44816000
    ctx->pc = 0x2699e0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2699e4: 0xc09a410
    ctx->pc = 0x2699E4u;
    SET_GPR_U32(ctx, 31, 0x2699ECu);
    ctx->pc = 0x269040u;
    {
        const uint32_t __entryPc = ctx->pc;
        DecHorz_0x269040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2699ECu; }
    }
    if (ctx->pc != 0x2699ECu) { return; }
    ctx->pc = 0x2699ECu;
label_2699ec:
    // 0x2699ec: 0x4600a045
    ctx->pc = 0x2699ecu;
    ctx->f[1] = FPU_ABS_S(ctx->f[20]);
label_2699f0:
    // 0x2699f0: 0x3c014180
    ctx->pc = 0x2699f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16768 << 16));
    // 0x2699f4: 0x44810000
    ctx->pc = 0x2699f4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2699f8: 0x46010036
    ctx->pc = 0x2699f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2699fc: 0x0
    ctx->pc = 0x2699fcu;
    // NOP
    // 0x269a00: 0x45000006
    ctx->pc = 0x269A00u;
    {
        const bool branch_taken_0x269a00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x269A04u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x269a00) {
            ctx->pc = 0x269A1Cu;
            goto label_269a1c;
        }
    }
    ctx->pc = 0x269A08u;
    // 0x269a08: 0xc441fa18
    ctx->pc = 0x269a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269a0c: 0x44800000
    ctx->pc = 0x269a0cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x269a10: 0x46000832
    ctx->pc = 0x269a10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269a14: 0x4501000f
    ctx->pc = 0x269A14u;
    {
        const bool branch_taken_0x269a14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x269a14) {
            ctx->pc = 0x269A54u;
            goto label_269a54;
        }
    }
    ctx->pc = 0x269A1Cu;
label_269a1c:
    // 0x269a1c: 0x4600a045
    ctx->pc = 0x269a1cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[20]);
    // 0x269a20: 0x3c0140c0
    ctx->pc = 0x269a20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16576 << 16));
    // 0x269a24: 0x44810000
    ctx->pc = 0x269a24u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x269a28: 0x46010036
    ctx->pc = 0x269a28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269a2c: 0x0
    ctx->pc = 0x269a2cu;
    // NOP
    // 0x269a30: 0x4500001a
    ctx->pc = 0x269A30u;
    {
        const bool branch_taken_0x269a30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x269A34u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x269a30) {
            ctx->pc = 0x269A9Cu;
            goto label_269a9c;
        }
    }
    ctx->pc = 0x269A38u;
    // 0x269a38: 0xc441fa18
    ctx->pc = 0x269a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269a3c: 0x44800000
    ctx->pc = 0x269a3cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x269a40: 0x46000832
    ctx->pc = 0x269a40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269a44: 0x0
    ctx->pc = 0x269a44u;
    // NOP
    // 0x269a48: 0x45030014
    ctx->pc = 0x269A48u;
    {
        const bool branch_taken_0x269a48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x269a48) {
            ctx->pc = 0x269A4Cu;
            ctx->f[1] = FPU_ABS_S(ctx->f[20]);
            ctx->pc = 0x269A9Cu;
            goto label_269a9c;
        }
    }
    ctx->pc = 0x269A50u;
    // 0x269a50: 0x44800000
    ctx->pc = 0x269a50u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_269a54:
    // 0x269a54: 0x46140036
    ctx->pc = 0x269a54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269a58: 0x0
    ctx->pc = 0x269a58u;
    // NOP
    // 0x269a5c: 0x45000008
    ctx->pc = 0x269A5Cu;
    {
        const bool branch_taken_0x269a5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x269A60u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x269a5c) {
            ctx->pc = 0x269A80u;
            goto label_269a80;
        }
    }
    ctx->pc = 0x269A64u;
    // 0x269a64: 0xc440fa18
    ctx->pc = 0x269a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269a68: 0x3c013ca3
    ctx->pc = 0x269a68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15523 << 16));
    // 0x269a6c: 0x3421d70a
    ctx->pc = 0x269a6cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x269a70: 0x44810800
    ctx->pc = 0x269a70u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x269a74: 0x46010001
    ctx->pc = 0x269a74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x269a78: 0x10000013
    ctx->pc = 0x269A78u;
    {
        const bool branch_taken_0x269a78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x269A7Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965784), bits); }
        if (branch_taken_0x269a78) {
            ctx->pc = 0x269AC8u;
            goto label_269ac8;
        }
    }
    ctx->pc = 0x269A80u;
label_269a80:
    // 0x269a80: 0xc440fa18
    ctx->pc = 0x269a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269a84: 0x3c013ca3
    ctx->pc = 0x269a84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15523 << 16));
    // 0x269a88: 0x3421d70a
    ctx->pc = 0x269a88u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x269a8c: 0x44810800
    ctx->pc = 0x269a8cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x269a90: 0x46010000
    ctx->pc = 0x269a90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x269a94: 0x1000000c
    ctx->pc = 0x269A94u;
    {
        const bool branch_taken_0x269a94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x269A98u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965784), bits); }
        if (branch_taken_0x269a94) {
            ctx->pc = 0x269AC8u;
            goto label_269ac8;
        }
    }
    ctx->pc = 0x269A9Cu;
label_269a9c:
    // 0x269a9c: 0x3c014080
    ctx->pc = 0x269a9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x269aa0: 0x44810000
    ctx->pc = 0x269aa0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x269aa4: 0x46000834
    ctx->pc = 0x269aa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269aa8: 0x0
    ctx->pc = 0x269aa8u;
    // NOP
    // 0x269aac: 0x45000007
    ctx->pc = 0x269AACu;
    {
        const bool branch_taken_0x269aac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x269AB0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x269aac) {
            ctx->pc = 0x269ACCu;
            goto label_269acc;
        }
    }
    ctx->pc = 0x269AB4u;
    // 0x269ab4: 0x3c013c23
    ctx->pc = 0x269ab4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x269ab8: 0x3421d70a
    ctx->pc = 0x269ab8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x269abc: 0x44816000
    ctx->pc = 0x269abcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x269ac0: 0xc09a474
    ctx->pc = 0x269AC0u;
    SET_GPR_U32(ctx, 31, 0x269AC8u);
    ctx->pc = 0x2691D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DecVert_0x2691d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269AC8u; }
    }
    if (ctx->pc != 0x269AC8u) { return; }
    ctx->pc = 0x269AC8u;
label_269ac8:
    // 0x269ac8: 0x3c020034
    ctx->pc = 0x269ac8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_269acc:
    // 0x269acc: 0xc441fa14
    ctx->pc = 0x269accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269ad0: 0x44800000
    ctx->pc = 0x269ad0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x269ad4: 0x46000832
    ctx->pc = 0x269ad4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269ad8: 0x0
    ctx->pc = 0x269ad8u;
    // NOP
    // 0x269adc: 0x45010005
    ctx->pc = 0x269ADCu;
    {
        const bool branch_taken_0x269adc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x269AE0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x269adc) {
            ctx->pc = 0x269AF4u;
            goto label_269af4;
        }
    }
    ctx->pc = 0x269AE4u;
    // 0x269ae4: 0xc60c00b4
    ctx->pc = 0x269ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x269ae8: 0xc09a42e
    ctx->pc = 0x269AE8u;
    SET_GPR_U32(ctx, 31, 0x269AF0u);
    ctx->pc = 0x269AECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2690B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        TransHorz_0x2690b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269AF0u; }
    }
    if (ctx->pc != 0x269AF0u) { return; }
    ctx->pc = 0x269AF0u;
    // 0x269af0: 0x3c020034
    ctx->pc = 0x269af0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_269af4:
    // 0x269af4: 0xc441fa18
    ctx->pc = 0x269af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269af8: 0x44800000
    ctx->pc = 0x269af8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x269afc: 0x46000832
    ctx->pc = 0x269afcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269b00: 0x0
    ctx->pc = 0x269b00u;
    // NOP
    // 0x269b04: 0x45010005
    ctx->pc = 0x269B04u;
    {
        const bool branch_taken_0x269b04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x269B08u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x269b04) {
            ctx->pc = 0x269B1Cu;
            goto label_269b1c;
        }
    }
    ctx->pc = 0x269B0Cu;
    // 0x269b0c: 0xc60c00b4
    ctx->pc = 0x269b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x269b10: 0xc09a492
    ctx->pc = 0x269B10u;
    SET_GPR_U32(ctx, 31, 0x269B18u);
    ctx->pc = 0x269B14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x269248u;
    {
        const uint32_t __entryPc = ctx->pc;
        TransVert_0x269248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269B18u; }
    }
    if (ctx->pc != 0x269B18u) { return; }
    ctx->pc = 0x269B18u;
    // 0x269b18: 0x3c020034
    ctx->pc = 0x269b18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_269b1c:
    // 0x269b1c: 0xc440fa14
    ctx->pc = 0x269b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269b20: 0x44800800
    ctx->pc = 0x269b20u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x269b24: 0x46010032
    ctx->pc = 0x269b24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269b28: 0x0
    ctx->pc = 0x269b28u;
    // NOP
    // 0x269b2c: 0x4500000a
    ctx->pc = 0x269B2Cu;
    {
        const bool branch_taken_0x269b2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x269B30u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x269b2c) {
            ctx->pc = 0x269B58u;
            goto label_269b58;
        }
    }
    ctx->pc = 0x269B34u;
    // 0x269b34: 0xc440fa18
    ctx->pc = 0x269b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269b38: 0x46010032
    ctx->pc = 0x269b38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269b3c: 0x0
    ctx->pc = 0x269b3cu;
    // NOP
    // 0x269b40: 0x45000005
    ctx->pc = 0x269B40u;
    {
        const bool branch_taken_0x269b40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x269B44u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x269b40) {
            ctx->pc = 0x269B58u;
            goto label_269b58;
        }
    }
    ctx->pc = 0x269B48u;
    // 0x269b48: 0xac40fa04
    ctx->pc = 0x269b48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965764), GPR_U32(ctx, 0));
    // 0x269b4c: 0x3c020034
    ctx->pc = 0x269b4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269b50: 0x1000003a
    ctx->pc = 0x269B50u;
    {
        const bool branch_taken_0x269b50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x269B54u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294965788), GPR_U32(ctx, 0));
        if (branch_taken_0x269b50) {
            ctx->pc = 0x269C3Cu;
            goto label_269c3c;
        }
    }
    ctx->pc = 0x269B58u;
label_269b58:
    // 0x269b58: 0x3c014b18
    ctx->pc = 0x269b58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)19224 << 16));
    // 0x269b5c: 0x34219680
    ctx->pc = 0x269b5cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 38528));
    // 0x269b60: 0x44812000
    ctx->pc = 0x269b60u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 1);
    // 0x269b64: 0x3c01cb18
    ctx->pc = 0x269b64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51992 << 16));
    // 0x269b68: 0x34219680
    ctx->pc = 0x269b68u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 38528));
    // 0x269b6c: 0x44811800
    ctx->pc = 0x269b6cu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x269b70: 0x202d
    ctx->pc = 0x269b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269b74: 0x3c020034
    ctx->pc = 0x269b74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269b78: 0x2443f530
    ctx->pc = 0x269b78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294964528));
    // 0x269b7c: 0x0
    ctx->pc = 0x269b7cu;
    // NOP
label_269b80:
    // 0x269b80: 0x8c620000
    ctx->pc = 0x269b80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x269b84: 0x5840000c
    ctx->pc = 0x269B84u;
    {
        const bool branch_taken_0x269b84 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x269b84) {
            ctx->pc = 0x269B88u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x269BB8u;
            goto label_269bb8;
        }
    }
    ctx->pc = 0x269B8Cu;
    // 0x269b8c: 0x8c620004
    ctx->pc = 0x269b8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x269b90: 0xc4400044
    ctx->pc = 0x269b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269b94: 0x46040034
    ctx->pc = 0x269b94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269b98: 0x0
    ctx->pc = 0x269b98u;
    // NOP
    // 0x269b9c: 0x45030001
    ctx->pc = 0x269B9Cu;
    {
        const bool branch_taken_0x269b9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x269b9c) {
            ctx->pc = 0x269BA0u;
            ctx->f[4] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x269BA4u;
            goto label_269ba4;
        }
    }
    ctx->pc = 0x269BA4u;
label_269ba4:
    // 0x269ba4: 0x46001834
    ctx->pc = 0x269ba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269ba8: 0x0
    ctx->pc = 0x269ba8u;
    // NOP
    // 0x269bac: 0x45030001
    ctx->pc = 0x269BACu;
    {
        const bool branch_taken_0x269bac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x269bac) {
            ctx->pc = 0x269BB0u;
            ctx->f[3] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x269BB4u;
            goto label_269bb4;
        }
    }
    ctx->pc = 0x269BB4u;
label_269bb4:
    // 0x269bb4: 0x24840001
    ctx->pc = 0x269bb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_269bb8:
    // 0x269bb8: 0x2882000f
    ctx->pc = 0x269bb8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 15));
    // 0x269bbc: 0x1440fff0
    ctx->pc = 0x269BBCu;
    {
        const bool branch_taken_0x269bbc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x269BC0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 64));
        if (branch_taken_0x269bbc) {
            ctx->pc = 0x269B80u;
            goto label_269b80;
        }
    }
    ctx->pc = 0x269BC4u;
    // 0x269bc4: 0x3c020034
    ctx->pc = 0x269bc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269bc8: 0x2445fa08
    ctx->pc = 0x269bc8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294965768));
    // 0x269bcc: 0xc7a20000
    ctx->pc = 0x269bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x269bd0: 0xc6000070
    ctx->pc = 0x269bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269bd4: 0x46001000
    ctx->pc = 0x269bd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x269bd8: 0xe440fa08
    ctx->pc = 0x269bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965768), bits); }
    // 0x269bdc: 0xc7a00004
    ctx->pc = 0x269bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269be0: 0xc6010074
    ctx->pc = 0x269be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269be4: 0x46010000
    ctx->pc = 0x269be4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x269be8: 0xe4a00004
    ctx->pc = 0x269be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x269bec: 0xc7a10008
    ctx->pc = 0x269becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269bf0: 0xc6000078
    ctx->pc = 0x269bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269bf4: 0x46000800
    ctx->pc = 0x269bf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x269bf8: 0xe4a00008
    ctx->pc = 0x269bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x269bfc: 0xc6000140
    ctx->pc = 0x269bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269c00: 0x46001080
    ctx->pc = 0x269c00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x269c04: 0xe7a20010
    ctx->pc = 0x269c04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x269c08: 0xc6000148
    ctx->pc = 0x269c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269c0c: 0x46000840
    ctx->pc = 0x269c0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x269c10: 0xe7a10018
    ctx->pc = 0x269c10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x269c14: 0x46041800
    ctx->pc = 0x269c14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x269c18: 0x3c013f00
    ctx->pc = 0x269c18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x269c1c: 0x44810800
    ctx->pc = 0x269c1cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x269c20: 0x46010002
    ctx->pc = 0x269c20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x269c24: 0xe7a00014
    ctx->pc = 0x269c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x269c28: 0xe6000144
    ctx->pc = 0x269c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x269c2c: 0xe6000174
    ctx->pc = 0x269c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 372), bits); }
    // 0x269c30: 0x27a40010
    ctx->pc = 0x269c30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x269c34: 0xc099c08
    ctx->pc = 0x269C34u;
    SET_GPR_U32(ctx, 31, 0x269C3Cu);
    ctx->pc = 0x269C38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x267020u;
    {
        const uint32_t __entryPc = ctx->pc;
        fix_radius_0x267020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269C3Cu; }
    }
    if (ctx->pc != 0x269C3Cu) { return; }
    ctx->pc = 0x269C3Cu;
label_269c3c:
    // 0x269c3c: 0x3c120034
    ctx->pc = 0x269c3cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)52 << 16));
    // 0x269c40: 0x8e42fa04
    ctx->pc = 0x269c40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294965764)));
    // 0x269c44: 0x10400031
    ctx->pc = 0x269C44u;
    {
        const bool branch_taken_0x269c44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x269C48u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x269c44) {
            ctx->pc = 0x269D0Cu;
            goto label_269d0c;
        }
    }
    ctx->pc = 0x269C4Cu;
    // 0x269c4c: 0xc09a4d6
    ctx->pc = 0x269C4Cu;
    SET_GPR_U32(ctx, 31, 0x269C54u);
    ctx->pc = 0x269C50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    ctx->pc = 0x269358u;
    {
        const uint32_t __entryPc = ctx->pc;
        DiffRate_0x269358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269C54u; }
    }
    if (ctx->pc != 0x269C54u) { return; }
    ctx->pc = 0x269C54u;
    // 0x269c54: 0x46000506
    ctx->pc = 0x269c54u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x269c58: 0x220202d
    ctx->pc = 0x269c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269c5c: 0x3c110034
    ctx->pc = 0x269c5cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)52 << 16));
    // 0x269c60: 0xc09a4d6
    ctx->pc = 0x269C60u;
    SET_GPR_U32(ctx, 31, 0x269C68u);
    ctx->pc = 0x269C64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 4294965768));
    ctx->pc = 0x269358u;
    {
        const uint32_t __entryPc = ctx->pc;
        DiffRate_0x269358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269C68u; }
    }
    if (ctx->pc != 0x269C68u) { return; }
    ctx->pc = 0x269C68u;
    // 0x269c68: 0x4600a034
    ctx->pc = 0x269c68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269c6c: 0x0
    ctx->pc = 0x269c6cu;
    // NOP
    // 0x269c70: 0x45000012
    ctx->pc = 0x269C70u;
    {
        const bool branch_taken_0x269c70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x269C74u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x269c70) {
            ctx->pc = 0x269CBCu;
            goto label_269cbc;
        }
    }
    ctx->pc = 0x269C78u;
    // 0x269c78: 0xae40fa04
    ctx->pc = 0x269c78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294965764), GPR_U32(ctx, 0));
    // 0x269c7c: 0xac40fa1c
    ctx->pc = 0x269c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965788), GPR_U32(ctx, 0));
    // 0x269c80: 0x3c020034
    ctx->pc = 0x269c80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269c84: 0xac40fa14
    ctx->pc = 0x269c84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965780), GPR_U32(ctx, 0));
    // 0x269c88: 0x3c020034
    ctx->pc = 0x269c88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269c8c: 0xac40fa18
    ctx->pc = 0x269c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965784), GPR_U32(ctx, 0));
    // 0x269c90: 0x2622fa08
    ctx->pc = 0x269c90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294965768));
    // 0x269c94: 0xc6000070
    ctx->pc = 0x269c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269c98: 0xe620fa08
    ctx->pc = 0x269c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294965768), bits); }
    // 0x269c9c: 0xc6000074
    ctx->pc = 0x269c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269ca0: 0xe4400004
    ctx->pc = 0x269ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x269ca4: 0xc6000078
    ctx->pc = 0x269ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269ca8: 0xe4400008
    ctx->pc = 0x269ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x269cac: 0xafa00000
    ctx->pc = 0x269cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x269cb0: 0xafa00004
    ctx->pc = 0x269cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x269cb4: 0x10000015
    ctx->pc = 0x269CB4u;
    {
        const bool branch_taken_0x269cb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x269CB8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        if (branch_taken_0x269cb4) {
            ctx->pc = 0x269D0Cu;
            goto label_269d0c;
        }
    }
    ctx->pc = 0x269CBCu;
label_269cbc:
    // 0x269cbc: 0x3c020034
    ctx->pc = 0x269cbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269cc0: 0x2443fa08
    ctx->pc = 0x269cc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294965768));
    // 0x269cc4: 0xc440fa08
    ctx->pc = 0x269cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269cc8: 0xe6000070
    ctx->pc = 0x269cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x269ccc: 0xc4600004
    ctx->pc = 0x269cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269cd0: 0xe6000074
    ctx->pc = 0x269cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x269cd4: 0xc4600008
    ctx->pc = 0x269cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269cd8: 0xe6000078
    ctx->pc = 0x269cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x269cdc: 0xc6000140
    ctx->pc = 0x269cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269ce0: 0xc7a10000
    ctx->pc = 0x269ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269ce4: 0x46010000
    ctx->pc = 0x269ce4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x269ce8: 0xe6000140
    ctx->pc = 0x269ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
    // 0x269cec: 0xc6000144
    ctx->pc = 0x269cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269cf0: 0xc7a10004
    ctx->pc = 0x269cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269cf4: 0x46010000
    ctx->pc = 0x269cf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x269cf8: 0xe6000144
    ctx->pc = 0x269cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x269cfc: 0xc6000148
    ctx->pc = 0x269cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269d00: 0xc7a10008
    ctx->pc = 0x269d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269d04: 0x46010000
    ctx->pc = 0x269d04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x269d08: 0xe6000148
    ctx->pc = 0x269d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
label_269d0c:
    // 0x269d0c: 0x1660000f
    ctx->pc = 0x269D0Cu;
    {
        const bool branch_taken_0x269d0c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x269D10u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x269d0c) {
            ctx->pc = 0x269D4Cu;
            goto label_269d4c;
        }
    }
    ctx->pc = 0x269D14u;
    // 0x269d14: 0x3c020034
    ctx->pc = 0x269d14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269d18: 0x8c43fa04
    ctx->pc = 0x269d18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965764)));
    // 0x269d1c: 0x24020001
    ctx->pc = 0x269d1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x269d20: 0x1462000b
    ctx->pc = 0x269D20u;
    {
        const bool branch_taken_0x269d20 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x269D24u;
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x269d20) {
            ctx->pc = 0x269D50u;
            goto label_269d50;
        }
    }
    ctx->pc = 0x269D28u;
    // 0x269d28: 0x3c030034
    ctx->pc = 0x269d28u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x269d2c: 0x3c020034
    ctx->pc = 0x269d2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269d30: 0x8c42f928
    ctx->pc = 0x269d30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965544)));
    // 0x269d34: 0xac62fa20
    ctx->pc = 0x269d34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965792), GPR_U32(ctx, 2));
    // 0x269d38: 0x3c030034
    ctx->pc = 0x269d38u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x269d3c: 0x3c020034
    ctx->pc = 0x269d3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269d40: 0x8c42f92c
    ctx->pc = 0x269d40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965548)));
    // 0x269d44: 0xac62fa24
    ctx->pc = 0x269d44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965796), GPR_U32(ctx, 2));
    // 0x269d48: 0xdfbf0060
    ctx->pc = 0x269d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_269d4c:
    // 0x269d4c: 0xdfb30050
    ctx->pc = 0x269d4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_269d50:
    // 0x269d50: 0xdfb20040
    ctx->pc = 0x269d50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x269d54: 0xdfb10030
    ctx->pc = 0x269d54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269d58: 0xdfb00020
    ctx->pc = 0x269d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269d5c: 0xc7b90098
    ctx->pc = 0x269d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x269d60: 0xc7b80090
    ctx->pc = 0x269d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x269d64: 0xc7b70088
    ctx->pc = 0x269d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x269d68: 0xc7b60080
    ctx->pc = 0x269d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x269d6c: 0xc7b50078
    ctx->pc = 0x269d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x269d70: 0xc7b40070
    ctx->pc = 0x269d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x269d74: 0x3e00008
    ctx->pc = 0x269D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269D78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x269720u: goto label_269720;
            case 0x269748u: goto label_269748;
            case 0x269760u: goto label_269760;
            case 0x269778u: goto label_269778;
            case 0x26979Cu: goto label_26979c;
            case 0x2697ACu: goto label_2697ac;
            case 0x2697C0u: goto label_2697c0;
            case 0x2697D4u: goto label_2697d4;
            case 0x2697D8u: goto label_2697d8;
            case 0x2697F8u: goto label_2697f8;
            case 0x269894u: goto label_269894;
            case 0x269898u: goto label_269898;
            case 0x2698B8u: goto label_2698b8;
            case 0x2698E8u: goto label_2698e8;
            case 0x269914u: goto label_269914;
            case 0x269940u: goto label_269940;
            case 0x269978u: goto label_269978;
            case 0x2699A4u: goto label_2699a4;
            case 0x2699C0u: goto label_2699c0;
            case 0x2699ECu: goto label_2699ec;
            case 0x2699F0u: goto label_2699f0;
            case 0x269A1Cu: goto label_269a1c;
            case 0x269A54u: goto label_269a54;
            case 0x269A80u: goto label_269a80;
            case 0x269A9Cu: goto label_269a9c;
            case 0x269AC8u: goto label_269ac8;
            case 0x269ACCu: goto label_269acc;
            case 0x269AF4u: goto label_269af4;
            case 0x269B1Cu: goto label_269b1c;
            case 0x269B58u: goto label_269b58;
            case 0x269B80u: goto label_269b80;
            case 0x269BA4u: goto label_269ba4;
            case 0x269BB4u: goto label_269bb4;
            case 0x269BB8u: goto label_269bb8;
            case 0x269C3Cu: goto label_269c3c;
            case 0x269CBCu: goto label_269cbc;
            case 0x269D0Cu: goto label_269d0c;
            case 0x269D4Cu: goto label_269d4c;
            case 0x269D50u: goto label_269d50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x269D7Cu;
}
