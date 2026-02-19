#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MissileCollideEnemy
// Address: 0x290ac0 - 0x290c80
void MissileCollideEnemy_0x290ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x290ac0u;

    // 0x290ac0: 0x27bdff40
    ctx->pc = 0x290ac0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x290ac4: 0xffbf0090
    ctx->pc = 0x290ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x290ac8: 0xffbe0080
    ctx->pc = 0x290ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x290acc: 0xffb70070
    ctx->pc = 0x290accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x290ad0: 0xffb60060
    ctx->pc = 0x290ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x290ad4: 0xffb50050
    ctx->pc = 0x290ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x290ad8: 0xffb40040
    ctx->pc = 0x290ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x290adc: 0xffb30030
    ctx->pc = 0x290adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x290ae0: 0xffb20020
    ctx->pc = 0x290ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x290ae4: 0xffb10010
    ctx->pc = 0x290ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x290ae8: 0xffb00000
    ctx->pc = 0x290ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x290aec: 0xe7b600b0
    ctx->pc = 0x290aecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x290af0: 0xe7b500a8
    ctx->pc = 0x290af0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x290af4: 0xe7b400a0
    ctx->pc = 0x290af4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x290af8: 0x80902d
    ctx->pc = 0x290af8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290afc: 0xa0882d
    ctx->pc = 0x290afcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290b00: 0xc0a82d
    ctx->pc = 0x290b00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290b04: 0x46006546
    ctx->pc = 0x290b04u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x290b08: 0x100a02d
    ctx->pc = 0x290b08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290b0c: 0xc6210000
    ctx->pc = 0x290b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290b10: 0xc6400000
    ctx->pc = 0x290b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290b14: 0x46000881
    ctx->pc = 0x290b14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x290b18: 0xc6210004
    ctx->pc = 0x290b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290b1c: 0xc6400004
    ctx->pc = 0x290b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290b20: 0x460008c1
    ctx->pc = 0x290b20u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x290b24: 0xc6210008
    ctx->pc = 0x290b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290b28: 0xc6400008
    ctx->pc = 0x290b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290b2c: 0x46000801
    ctx->pc = 0x290b2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x290b30: 0x46021502
    ctx->pc = 0x290b30u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x290b34: 0x46000002
    ctx->pc = 0x290b34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x290b38: 0x4600a500
    ctx->pc = 0x290b38u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x290b3c: 0x120802d
    ctx->pc = 0x290b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290b40: 0x2a020019
    ctx->pc = 0x290b40u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 25));
    // 0x290b44: 0x1040003e
    ctx->pc = 0x290B44u;
    {
        const bool branch_taken_0x290b44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x290B48u;
        ctx->f[22] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
        if (branch_taken_0x290b44) {
            ctx->pc = 0x290C40u;
            goto label_290c40;
        }
    }
    ctx->pc = 0x290B4Cu;
    // 0x290b4c: 0x241e03b0
    ctx->pc = 0x290b4cu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 944));
    // 0x290b50: 0x3c020033
    ctx->pc = 0x290b50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x290b54: 0x2457dfd0
    ctx->pc = 0x290b54u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x290b58: 0x3c160031
    ctx->pc = 0x290b58u;
    SET_GPR_U32(ctx, 22, ((uint32_t)49 << 16));
    // 0x290b5c: 0x79880
    ctx->pc = 0x290b5cu;
    SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 7), 2));
    // 0x290b60: 0x21e1018
    ctx->pc = 0x290b60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x290b64: 0x0
    ctx->pc = 0x290b64u;
    // NOP
label_290b68:
    // 0x290b68: 0x572021
    ctx->pc = 0x290b68u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x290b6c: 0x8c8300c8
    ctx->pc = 0x290b6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x290b70: 0x24020001
    ctx->pc = 0x290b70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x290b74: 0x10620003
    ctx->pc = 0x290B74u;
    {
        const bool branch_taken_0x290b74 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x290B78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x290b74) {
            ctx->pc = 0x290B84u;
            goto label_290b84;
        }
    }
    ctx->pc = 0x290B7Cu;
    // 0x290b7c: 0x5462002d
    ctx->pc = 0x290B7Cu;
    {
        const bool branch_taken_0x290b7c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x290b7c) {
            ctx->pc = 0x290B80u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x290C34u;
            goto label_290c34;
        }
    }
    ctx->pc = 0x290B84u;
label_290b84:
    // 0x290b84: 0x12800007
    ctx->pc = 0x290B84u;
    {
        const bool branch_taken_0x290b84 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x290B88u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        if (branch_taken_0x290b84) {
            ctx->pc = 0x290BA4u;
            goto label_290ba4;
        }
    }
    ctx->pc = 0x290B8Cu;
    // 0x290b8c: 0xc6c1ffa4
    ctx->pc = 0x290b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290b90: 0xc44002c8
    ctx->pc = 0x290b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290b94: 0x46000834
    ctx->pc = 0x290b94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290b98: 0x0
    ctx->pc = 0x290b98u;
    // NOP
    // 0x290b9c: 0x45030025
    ctx->pc = 0x290B9Cu;
    {
        const bool branch_taken_0x290b9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x290b9c) {
            ctx->pc = 0x290BA0u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x290C34u;
            goto label_290c34;
        }
    }
    ctx->pc = 0x290BA4u;
label_290ba4:
    // 0x290ba4: 0xc4800250
    ctx->pc = 0x290ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290ba8: 0x4600ab40
    ctx->pc = 0x290ba8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x290bac: 0xc480024c
    ctx->pc = 0x290bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290bb0: 0x4600ab00
    ctx->pc = 0x290bb0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x290bb4: 0xc4810060
    ctx->pc = 0x290bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290bb8: 0xc6200000
    ctx->pc = 0x290bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290bbc: 0x46000881
    ctx->pc = 0x290bbcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x290bc0: 0xc4810068
    ctx->pc = 0x290bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290bc4: 0xc6200008
    ctx->pc = 0x290bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290bc8: 0x46000801
    ctx->pc = 0x290bc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x290bcc: 0x46021042
    ctx->pc = 0x290bccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x290bd0: 0x46000002
    ctx->pc = 0x290bd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x290bd4: 0x46000840
    ctx->pc = 0x290bd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x290bd8: 0x460c6002
    ctx->pc = 0x290bd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x290bdc: 0x46140000
    ctx->pc = 0x290bdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x290be0: 0x46010034
    ctx->pc = 0x290be0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290be4: 0x0
    ctx->pc = 0x290be4u;
    // NOP
    // 0x290be8: 0x45030012
    ctx->pc = 0x290BE8u;
    {
        const bool branch_taken_0x290be8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x290be8) {
            ctx->pc = 0x290BECu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x290C34u;
            goto label_290c34;
        }
    }
    ctx->pc = 0x290BF0u;
    // 0x290bf0: 0xc4800064
    ctx->pc = 0x290bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290bf4: 0xc6210004
    ctx->pc = 0x290bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290bf8: 0x460100c1
    ctx->pc = 0x290bf8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x290bfc: 0x46166800
    ctx->pc = 0x290bfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[22]);
    // 0x290c00: 0x46030034
    ctx->pc = 0x290c00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290c04: 0x0
    ctx->pc = 0x290c04u;
    // NOP
    // 0x290c08: 0x4503000a
    ctx->pc = 0x290C08u;
    {
        const bool branch_taken_0x290c08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x290c08) {
            ctx->pc = 0x290C0Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x290C34u;
            goto label_290c34;
        }
    }
    ctx->pc = 0x290C10u;
    // 0x290c10: 0x24840060
    ctx->pc = 0x290c10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 96));
    // 0x290c14: 0x240282d
    ctx->pc = 0x290c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290c18: 0x220302d
    ctx->pc = 0x290c18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290c1c: 0x2a0382d
    ctx->pc = 0x290c1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290c20: 0xc0a4202
    ctx->pc = 0x290C20u;
    SET_GPR_U32(ctx, 31, 0x290C28u);
    ctx->pc = 0x290C24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x290808u;
    {
        const uint32_t __entryPc = ctx->pc;
        LineCylinderCollide_0x290808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290C28u; }
    }
    if (ctx->pc != 0x290C28u) { return; }
    ctx->pc = 0x290C28u;
    // 0x290c28: 0x14400006
    ctx->pc = 0x290C28u;
    {
        const bool branch_taken_0x290c28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x290C2Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x290c28) {
            ctx->pc = 0x290C44u;
            goto label_290c44;
        }
    }
    ctx->pc = 0x290C30u;
    // 0x290c30: 0x26100001
    ctx->pc = 0x290c30u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_290c34:
    // 0x290c34: 0x2a020019
    ctx->pc = 0x290c34u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 25));
    // 0x290c38: 0x1440ffcb
    ctx->pc = 0x290C38u;
    {
        const bool branch_taken_0x290c38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x290C3Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x290c38) {
            ctx->pc = 0x290B68u;
            goto label_290b68;
        }
    }
    ctx->pc = 0x290C40u;
label_290c40:
    // 0x290c40: 0x2402ffff
    ctx->pc = 0x290c40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_290c44:
    // 0x290c44: 0xdfbf0090
    ctx->pc = 0x290c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x290c48: 0xdfbe0080
    ctx->pc = 0x290c48u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x290c4c: 0xdfb70070
    ctx->pc = 0x290c4cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x290c50: 0xdfb60060
    ctx->pc = 0x290c50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x290c54: 0xdfb50050
    ctx->pc = 0x290c54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x290c58: 0xdfb40040
    ctx->pc = 0x290c58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290c5c: 0xdfb30030
    ctx->pc = 0x290c5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290c60: 0xdfb20020
    ctx->pc = 0x290c60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290c64: 0xdfb10010
    ctx->pc = 0x290c64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290c68: 0xdfb00000
    ctx->pc = 0x290c68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290c6c: 0xc7b600b0
    ctx->pc = 0x290c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x290c70: 0xc7b500a8
    ctx->pc = 0x290c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x290c74: 0xc7b400a0
    ctx->pc = 0x290c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x290c78: 0x3e00008
    ctx->pc = 0x290C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290C7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x290B68u: goto label_290b68;
            case 0x290B84u: goto label_290b84;
            case 0x290BA4u: goto label_290ba4;
            case 0x290C34u: goto label_290c34;
            case 0x290C40u: goto label_290c40;
            case 0x290C44u: goto label_290c44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x290C80u;
}
