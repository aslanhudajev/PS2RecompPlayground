#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: try_location
// Address: 0x24cc30 - 0x24cf4c
void try_location_0x24cc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24cc30u;

    // 0x24cc30: 0x27bdff50
    ctx->pc = 0x24cc30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x24cc34: 0xffbf0090
    ctx->pc = 0x24cc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x24cc38: 0xffb50080
    ctx->pc = 0x24cc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x24cc3c: 0xffb40070
    ctx->pc = 0x24cc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x24cc40: 0xffb30060
    ctx->pc = 0x24cc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x24cc44: 0xffb20050
    ctx->pc = 0x24cc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x24cc48: 0xffb10040
    ctx->pc = 0x24cc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x24cc4c: 0xffb00030
    ctx->pc = 0x24cc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x24cc50: 0xe7b500a8
    ctx->pc = 0x24cc50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x24cc54: 0xe7b400a0
    ctx->pc = 0x24cc54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x24cc58: 0x80802d
    ctx->pc = 0x24cc58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cc5c: 0xa0902d
    ctx->pc = 0x24cc5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cc60: 0xc0882d
    ctx->pc = 0x24cc60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cc64: 0xe0982d
    ctx->pc = 0x24cc64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cc68: 0x100a82d
    ctx->pc = 0x24cc68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cc6c: 0xc6540828
    ctx->pc = 0x24cc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24cc70: 0xc655082c
    ctx->pc = 0x24cc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24cc74: 0x8e020898
    ctx->pc = 0x24cc74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2200)));
    // 0x24cc78: 0x30540038
    ctx->pc = 0x24cc78u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 2), 56));
    // 0x24cc7c: 0xc6000070
    ctx->pc = 0x24cc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cc80: 0xe7a00000
    ctx->pc = 0x24cc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24cc84: 0xc6000074
    ctx->pc = 0x24cc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cc88: 0xe7a00004
    ctx->pc = 0x24cc88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24cc8c: 0xc6000078
    ctx->pc = 0x24cc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cc90: 0x1120002c
    ctx->pc = 0x24CC90u;
    {
        const bool branch_taken_0x24cc90 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x24CC94u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        if (branch_taken_0x24cc90) {
            ctx->pc = 0x24CD44u;
            goto label_24cd44;
        }
    }
    ctx->pc = 0x24CC98u;
    // 0x24cc98: 0x3c020034
    ctx->pc = 0x24cc98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24cc9c: 0x3c013f00
    ctx->pc = 0x24cc9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x24cca0: 0x44816800
    ctx->pc = 0x24cca0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x24cca4: 0x220202d
    ctx->pc = 0x24cca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cca8: 0xc44ce88c
    ctx->pc = 0x24cca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24ccac: 0x460da342
    ctx->pc = 0x24ccacu;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
    // 0x24ccb0: 0xc087b5c
    ctx->pc = 0x24CCB0u;
    SET_GPR_U32(ctx, 31, 0x24CCB8u);
    ctx->pc = 0x24CCB4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x21ED70u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorPos_0x21ed70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CCB8u; }
    }
    if (ctx->pc != 0x24CCB8u) { return; }
    ctx->pc = 0x24CCB8u;
    // 0x24ccb8: 0xe7a00024
    ctx->pc = 0x24ccb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24ccbc: 0x3c020032
    ctx->pc = 0x24ccbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x24ccc0: 0x8c42fbf4
    ctx->pc = 0x24ccc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966260)));
    // 0x24ccc4: 0x10400096
    ctx->pc = 0x24CCC4u;
    {
        const bool branch_taken_0x24ccc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24CCC8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24ccc4) {
            ctx->pc = 0x24CF20u;
            goto label_24cf20;
        }
    }
    ctx->pc = 0x24CCCCu;
    // 0x24cccc: 0x8e03089c
    ctx->pc = 0x24ccccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 2204)));
    // 0x24ccd0: 0x50600009
    ctx->pc = 0x24CCD0u;
    {
        const bool branch_taken_0x24ccd0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x24ccd0) {
            ctx->pc = 0x24CCD4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x24CCF8u;
            goto label_24ccf8;
        }
    }
    ctx->pc = 0x24CCD8u;
    // 0x24ccd8: 0x8c620010
    ctx->pc = 0x24ccd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x24ccdc: 0x30421000
    ctx->pc = 0x24ccdcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
    // 0x24cce0: 0x10400004
    ctx->pc = 0x24CCE0u;
    {
        const bool branch_taken_0x24cce0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24CCE4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x24cce0) {
            ctx->pc = 0x24CCF4u;
            goto label_24ccf4;
        }
    }
    ctx->pc = 0x24CCE8u;
    // 0x24cce8: 0x8c42fbf4
    ctx->pc = 0x24cce8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966260)));
    // 0x24ccec: 0x1462008c
    ctx->pc = 0x24CCECu;
    {
        const bool branch_taken_0x24ccec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x24CCF0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24ccec) {
            ctx->pc = 0x24CF20u;
            goto label_24cf20;
        }
    }
    ctx->pc = 0x24CCF4u;
label_24ccf4:
    // 0x24ccf4: 0xc600088c
    ctx->pc = 0x24ccf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ccf8:
    // 0x24ccf8: 0xc7a10024
    ctx->pc = 0x24ccf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ccfc: 0x46000841
    ctx->pc = 0x24ccfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24cd00: 0x46000845
    ctx->pc = 0x24cd00u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x24cd04: 0x3c0140c0
    ctx->pc = 0x24cd04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16576 << 16));
    // 0x24cd08: 0x44810000
    ctx->pc = 0x24cd08u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x24cd0c: 0x46010034
    ctx->pc = 0x24cd0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24cd10: 0x0
    ctx->pc = 0x24cd10u;
    // NOP
    // 0x24cd14: 0x45010082
    ctx->pc = 0x24CD14u;
    {
        const bool branch_taken_0x24cd14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24CD18u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24cd14) {
            ctx->pc = 0x24CF20u;
            goto label_24cf20;
        }
    }
    ctx->pc = 0x24CD1Cu;
    // 0x24cd1c: 0x3c014040
    ctx->pc = 0x24cd1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x24cd20: 0x44810000
    ctx->pc = 0x24cd20u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x24cd24: 0x46010034
    ctx->pc = 0x24cd24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24cd28: 0x0
    ctx->pc = 0x24cd28u;
    // NOP
    // 0x24cd2c: 0x45000006
    ctx->pc = 0x24CD2Cu;
    {
        const bool branch_taken_0x24cd2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24CD30u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x24cd2c) {
            ctx->pc = 0x24CD48u;
            goto label_24cd48;
        }
    }
    ctx->pc = 0x24CD34u;
    // 0x24cd34: 0x1280007b
    ctx->pc = 0x24CD34u;
    {
        const bool branch_taken_0x24cd34 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x24CD38u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x24cd34) {
            ctx->pc = 0x24CF24u;
            goto label_24cf24;
        }
    }
    ctx->pc = 0x24CD3Cu;
    // 0x24cd3c: 0x10000003
    ctx->pc = 0x24CD3Cu;
    {
        const bool branch_taken_0x24cd3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24CD40u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        if (branch_taken_0x24cd3c) {
            ctx->pc = 0x24CD4Cu;
            goto label_24cd4c;
        }
    }
    ctx->pc = 0x24CD44u;
label_24cd44:
    // 0x24cd44: 0xc600088c
    ctx->pc = 0x24cd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24cd48:
    // 0x24cd48: 0xe6200004
    ctx->pc = 0x24cd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_24cd4c:
    // 0x24cd4c: 0xc6200000
    ctx->pc = 0x24cd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cd50: 0xe6400050
    ctx->pc = 0x24cd50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x24cd54: 0xc6200004
    ctx->pc = 0x24cd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cd58: 0xe6400054
    ctx->pc = 0x24cd58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x24cd5c: 0xc6200008
    ctx->pc = 0x24cd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cd60: 0xe6400058
    ctx->pc = 0x24cd60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
    // 0x24cd64: 0x26440020
    ctx->pc = 0x24cd64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 32));
    // 0x24cd68: 0x2645081c
    ctx->pc = 0x24cd68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 2076));
    // 0x24cd6c: 0xc080cd4
    ctx->pc = 0x24CD6Cu;
    SET_GPR_U32(ctx, 31, 0x24CD74u);
    ctx->pc = 0x24CD70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 2064));
    ctx->pc = 0x203350u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjOffsets_0x203350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CD74u; }
    }
    if (ctx->pc != 0x24CD74u) { return; }
    ctx->pc = 0x24CD74u;
    // 0x24cd74: 0x3c020031
    ctx->pc = 0x24cd74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x24cd78: 0x8c430018
    ctx->pc = 0x24cd78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x24cd7c: 0x2402400c
    ctx->pc = 0x24cd7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16396));
    // 0x24cd80: 0x10620033
    ctx->pc = 0x24CD80u;
    {
        const bool branch_taken_0x24cd80 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x24CD84u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x24cd80) {
            ctx->pc = 0x24CE50u;
            goto label_24ce50;
        }
    }
    ctx->pc = 0x24CD88u;
    // 0x24cd88: 0x8c42f934
    ctx->pc = 0x24cd88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965556)));
    // 0x24cd8c: 0x54400031
    ctx->pc = 0x24CD8Cu;
    {
        const bool branch_taken_0x24cd8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x24cd8c) {
            ctx->pc = 0x24CD90u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x24CE54u;
            goto label_24ce54;
        }
    }
    ctx->pc = 0x24CD94u;
    // 0x24cd94: 0x3c020036
    ctx->pc = 0x24cd94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x24cd98: 0x8c42db68
    ctx->pc = 0x24cd98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957928)));
    // 0x24cd9c: 0x5440002d
    ctx->pc = 0x24CD9Cu;
    {
        const bool branch_taken_0x24cd9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x24cd9c) {
            ctx->pc = 0x24CDA0u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x24CE54u;
            goto label_24ce54;
        }
    }
    ctx->pc = 0x24CDA4u;
    // 0x24cda4: 0x202d
    ctx->pc = 0x24cda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cda8: 0x27a50020
    ctx->pc = 0x24cda8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x24cdac: 0x27a60024
    ctx->pc = 0x24cdacu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 36));
    // 0x24cdb0: 0xc09cf78
    ctx->pc = 0x24CDB0u;
    SET_GPR_U32(ctx, 31, 0x24CDB8u);
    ctx->pc = 0x24CDB4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 18), 96));
    ctx->pc = 0x273DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_screen_pos_0x273de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CDB8u; }
    }
    if (ctx->pc != 0x24CDB8u) { return; }
    ctx->pc = 0x24CDB8u;
    // 0x24cdb8: 0x3c020034
    ctx->pc = 0x24cdb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24cdbc: 0x8c42f918
    ctx->pc = 0x24cdbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965528)));
    // 0x24cdc0: 0x2442001e
    ctx->pc = 0x24cdc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30));
    // 0x24cdc4: 0x44820000
    ctx->pc = 0x24cdc4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x24cdc8: 0x46800020
    ctx->pc = 0x24cdc8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x24cdcc: 0xc7a10020
    ctx->pc = 0x24cdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24cdd0: 0x46000834
    ctx->pc = 0x24cdd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24cdd4: 0x0
    ctx->pc = 0x24cdd4u;
    // NOP
    // 0x24cdd8: 0x45010051
    ctx->pc = 0x24CDD8u;
    {
        const bool branch_taken_0x24cdd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24CDDCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24cdd8) {
            ctx->pc = 0x24CF20u;
            goto label_24cf20;
        }
    }
    ctx->pc = 0x24CDE0u;
    // 0x24cde0: 0x3c020034
    ctx->pc = 0x24cde0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24cde4: 0x8c42f91c
    ctx->pc = 0x24cde4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965532)));
    // 0x24cde8: 0x2442ffe2
    ctx->pc = 0x24cde8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967266));
    // 0x24cdec: 0x44820000
    ctx->pc = 0x24cdecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x24cdf0: 0x46800020
    ctx->pc = 0x24cdf0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x24cdf4: 0x46010034
    ctx->pc = 0x24cdf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24cdf8: 0x0
    ctx->pc = 0x24cdf8u;
    // NOP
    // 0x24cdfc: 0x45010048
    ctx->pc = 0x24CDFCu;
    {
        const bool branch_taken_0x24cdfc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24CE00u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24cdfc) {
            ctx->pc = 0x24CF20u;
            goto label_24cf20;
        }
    }
    ctx->pc = 0x24CE04u;
    // 0x24ce04: 0x3c020034
    ctx->pc = 0x24ce04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24ce08: 0x8c42f920
    ctx->pc = 0x24ce08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965536)));
    // 0x24ce0c: 0x2442ffec
    ctx->pc = 0x24ce0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x24ce10: 0x44820000
    ctx->pc = 0x24ce10u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x24ce14: 0x46800020
    ctx->pc = 0x24ce14u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x24ce18: 0xc7a10024
    ctx->pc = 0x24ce18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ce1c: 0x46010034
    ctx->pc = 0x24ce1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ce20: 0x0
    ctx->pc = 0x24ce20u;
    // NOP
    // 0x24ce24: 0x4501003e
    ctx->pc = 0x24CE24u;
    {
        const bool branch_taken_0x24ce24 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24CE28u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24ce24) {
            ctx->pc = 0x24CF20u;
            goto label_24cf20;
        }
    }
    ctx->pc = 0x24CE2Cu;
    // 0x24ce2c: 0x3c020034
    ctx->pc = 0x24ce2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24ce30: 0x8c42f924
    ctx->pc = 0x24ce30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965540)));
    // 0x24ce34: 0x24420028
    ctx->pc = 0x24ce34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 40));
    // 0x24ce38: 0x44820000
    ctx->pc = 0x24ce38u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x24ce3c: 0x46800020
    ctx->pc = 0x24ce3cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x24ce40: 0x46000834
    ctx->pc = 0x24ce40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ce44: 0x0
    ctx->pc = 0x24ce44u;
    // NOP
    // 0x24ce48: 0x45010035
    ctx->pc = 0x24CE48u;
    {
        const bool branch_taken_0x24ce48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24CE4Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24ce48) {
            ctx->pc = 0x24CF20u;
            goto label_24cf20;
        }
    }
    ctx->pc = 0x24CE50u;
label_24ce50:
    // 0x24ce50: 0xc6200004
    ctx->pc = 0x24ce50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ce54:
    // 0x24ce54: 0xc6410820
    ctx->pc = 0x24ce54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ce58: 0x46010000
    ctx->pc = 0x24ce58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24ce5c: 0xe6200004
    ctx->pc = 0x24ce5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x24ce60: 0x3a0202d
    ctx->pc = 0x24ce60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ce64: 0x220282d
    ctx->pc = 0x24ce64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ce68: 0x3c013f80
    ctx->pc = 0x24ce68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x24ce6c: 0x44816000
    ctx->pc = 0x24ce6cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x24ce70: 0xc087ba4
    ctx->pc = 0x24CE70u;
    SET_GPR_U32(ctx, 31, 0x24CE78u);
    ctx->pc = 0x24CE74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21EE90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerWallCollide_0x21ee90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CE78u; }
    }
    if (ctx->pc != 0x24CE78u) { return; }
    ctx->pc = 0x24CE78u;
    // 0x24ce78: 0x14400029
    ctx->pc = 0x24CE78u;
    {
        const bool branch_taken_0x24ce78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24CE7Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24ce78) {
            ctx->pc = 0x24CF20u;
            goto label_24cf20;
        }
    }
    ctx->pc = 0x24CE80u;
    // 0x24ce80: 0x240202d
    ctx->pc = 0x24ce80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ce84: 0x220282d
    ctx->pc = 0x24ce84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ce88: 0x220302d
    ctx->pc = 0x24ce88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ce8c: 0x27a70010
    ctx->pc = 0x24ce8cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    // 0x24ce90: 0x4600a306
    ctx->pc = 0x24ce90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24ce94: 0x4600ab46
    ctx->pc = 0x24ce94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x24ce98: 0xc09182a
    ctx->pc = 0x24CE98u;
    SET_GPR_U32(ctx, 31, 0x24CEA0u);
    ctx->pc = 0x24CE9Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2460A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerCollidePlayers_0x2460a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CEA0u; }
    }
    if (ctx->pc != 0x24CEA0u) { return; }
    ctx->pc = 0x24CEA0u;
    // 0x24cea0: 0x441001f
    ctx->pc = 0x24CEA0u;
    {
        const bool branch_taken_0x24cea0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x24CEA4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24cea0) {
            ctx->pc = 0x24CF20u;
            goto label_24cf20;
        }
    }
    ctx->pc = 0x24CEA8u;
    // 0x24cea8: 0x3a0202d
    ctx->pc = 0x24cea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ceac: 0x220282d
    ctx->pc = 0x24ceacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ceb0: 0x302d
    ctx->pc = 0x24ceb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ceb4: 0x4600a306
    ctx->pc = 0x24ceb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24ceb8: 0xc09612c
    ctx->pc = 0x24CEB8u;
    SET_GPR_U32(ctx, 31, 0x24CEC0u);
    ctx->pc = 0x24CEBCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2584B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ItemCollide_0x2584b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CEC0u; }
    }
    if (ctx->pc != 0x24CEC0u) { return; }
    ctx->pc = 0x24CEC0u;
    // 0x24cec0: 0x10400006
    ctx->pc = 0x24CEC0u;
    {
        const bool branch_taken_0x24cec0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24CEC4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 2176), GPR_U32(ctx, 2));
        if (branch_taken_0x24cec0) {
            ctx->pc = 0x24CEDCu;
            goto label_24cedc;
        }
    }
    ctx->pc = 0x24CEC8u;
    // 0x24cec8: 0x240202d
    ctx->pc = 0x24cec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cecc: 0xc0965cc
    ctx->pc = 0x24CECCu;
    SET_GPR_U32(ctx, 31, 0x24CED4u);
    ctx->pc = 0x24CED0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x259730u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerItemCollision_0x259730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CED4u; }
    }
    if (ctx->pc != 0x24CED4u) { return; }
    ctx->pc = 0x24CED4u;
    // 0x24ced4: 0x14400012
    ctx->pc = 0x24CED4u;
    {
        const bool branch_taken_0x24ced4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24CED8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24ced4) {
            ctx->pc = 0x24CF20u;
            goto label_24cf20;
        }
    }
    ctx->pc = 0x24CEDCu;
label_24cedc:
    // 0x24cedc: 0x240202d
    ctx->pc = 0x24cedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cee0: 0x220282d
    ctx->pc = 0x24cee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cee4: 0x220302d
    ctx->pc = 0x24cee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cee8: 0x27a70010
    ctx->pc = 0x24cee8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    // 0x24ceec: 0x4600a306
    ctx->pc = 0x24ceecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24cef0: 0xc09171c
    ctx->pc = 0x24CEF0u;
    SET_GPR_U32(ctx, 31, 0x24CEF8u);
    ctx->pc = 0x24CEF4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x245C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerCollideEnemies_0x245c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CEF8u; }
    }
    if (ctx->pc != 0x24CEF8u) { return; }
    ctx->pc = 0x24CEF8u;
    // 0x24cef8: 0x4420009
    ctx->pc = 0x24CEF8u;
    {
        const bool branch_taken_0x24cef8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x24cef8) {
            ctx->pc = 0x24CEFCu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x24CF20u;
            goto label_24cf20;
        }
    }
    ctx->pc = 0x24CF00u;
    // 0x24cf00: 0xc6200000
    ctx->pc = 0x24cf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cf04: 0xe6600000
    ctx->pc = 0x24cf04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x24cf08: 0xc6200004
    ctx->pc = 0x24cf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cf0c: 0xe6600004
    ctx->pc = 0x24cf0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x24cf10: 0xc6200008
    ctx->pc = 0x24cf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cf14: 0xe6600008
    ctx->pc = 0x24cf14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x24cf18: 0xaea20000
    ctx->pc = 0x24cf18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x24cf1c: 0x102d
    ctx->pc = 0x24cf1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24cf20:
    // 0x24cf20: 0xdfbf0090
    ctx->pc = 0x24cf20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_24cf24:
    // 0x24cf24: 0xdfb50080
    ctx->pc = 0x24cf24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24cf28: 0xdfb40070
    ctx->pc = 0x24cf28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24cf2c: 0xdfb30060
    ctx->pc = 0x24cf2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24cf30: 0xdfb20050
    ctx->pc = 0x24cf30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24cf34: 0xdfb10040
    ctx->pc = 0x24cf34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24cf38: 0xdfb00030
    ctx->pc = 0x24cf38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24cf3c: 0xc7b500a8
    ctx->pc = 0x24cf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24cf40: 0xc7b400a0
    ctx->pc = 0x24cf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24cf44: 0x3e00008
    ctx->pc = 0x24CF44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CF48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24CCF4u: goto label_24ccf4;
            case 0x24CCF8u: goto label_24ccf8;
            case 0x24CD44u: goto label_24cd44;
            case 0x24CD48u: goto label_24cd48;
            case 0x24CD4Cu: goto label_24cd4c;
            case 0x24CE50u: goto label_24ce50;
            case 0x24CE54u: goto label_24ce54;
            case 0x24CEDCu: goto label_24cedc;
            case 0x24CF20u: goto label_24cf20;
            case 0x24CF24u: goto label_24cf24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24CF4Cu;
}
