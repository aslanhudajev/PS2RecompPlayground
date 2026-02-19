#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterDoActions
// Address: 0x296c28 - 0x296e20
void CritterDoActions_0x296c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x296c28u;

    // 0x296c28: 0x27bdffa0
    ctx->pc = 0x296c28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x296c2c: 0xffbf0050
    ctx->pc = 0x296c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x296c30: 0xffb40040
    ctx->pc = 0x296c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x296c34: 0xffb30030
    ctx->pc = 0x296c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x296c38: 0xffb20020
    ctx->pc = 0x296c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x296c3c: 0xffb10010
    ctx->pc = 0x296c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x296c40: 0xffb00000
    ctx->pc = 0x296c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296c44: 0x80802d
    ctx->pc = 0x296c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296c48: 0xa0882d
    ctx->pc = 0x296c48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296c4c: 0x8e0400e0
    ctx->pc = 0x296c4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x296c50: 0x10800007
    ctx->pc = 0x296C50u;
    {
        const bool branch_taken_0x296c50 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x296C54u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x296c50) {
            ctx->pc = 0x296C70u;
            goto label_296c70;
        }
    }
    ctx->pc = 0x296C58u;
    // 0x296c58: 0x44806000
    ctx->pc = 0x296c58u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x296c5c: 0x46006346
    ctx->pc = 0x296c5cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x296c60: 0x46006386
    ctx->pc = 0x296c60u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x296c64: 0x460063c6
    ctx->pc = 0x296c64u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x296c68: 0xc09fe8c
    ctx->pc = 0x296C68u;
    SET_GPR_U32(ctx, 31, 0x296C70u);
    ctx->pc = 0x296C6Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27FA30u;
    {
        const uint32_t __entryPc = ctx->pc;
        DmgFxNodeUpdate_0x27fa30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296C70u; }
    }
    if (ctx->pc != 0x296C70u) { return; }
    ctx->pc = 0x296C70u;
label_296c70:
    // 0x296c70: 0x8e220040
    ctx->pc = 0x296c70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x296c74: 0x4400026
    ctx->pc = 0x296C74u;
    {
        const bool branch_taken_0x296c74 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x296C78u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x296c74) {
            ctx->pc = 0x296D10u;
            goto label_296d10;
        }
    }
    ctx->pc = 0x296C7Cu;
    // 0x296c7c: 0x220282d
    ctx->pc = 0x296c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296c80: 0xc0a56fc
    ctx->pc = 0x296C80u;
    SET_GPR_U32(ctx, 31, 0x296C88u);
    ctx->pc = 0x296C84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x295BF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGetDoAction_0x295bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296C88u; }
    }
    if (ctx->pc != 0x296C88u) { return; }
    ctx->pc = 0x296C88u;
    // 0x296c88: 0x40902d
    ctx->pc = 0x296c88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296c8c: 0x96040250
    ctx->pc = 0x296c8cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x296c90: 0x32420001
    ctx->pc = 0x296c90u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 1));
    // 0x296c94: 0x1040000d
    ctx->pc = 0x296C94u;
    {
        const bool branch_taken_0x296c94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x296C98u;
        SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 592)));
        if (branch_taken_0x296c94) {
            ctx->pc = 0x296CCCu;
            goto label_296ccc;
        }
    }
    ctx->pc = 0x296C9Cu;
    // 0x296c9c: 0x8e230000
    ctx->pc = 0x296c9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x296ca0: 0x24020085
    ctx->pc = 0x296ca0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 133));
    // 0x296ca4: 0x10620002
    ctx->pc = 0x296CA4u;
    {
        const bool branch_taken_0x296ca4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x296CA8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x296ca4) {
            ctx->pc = 0x296CB0u;
            goto label_296cb0;
        }
    }
    ctx->pc = 0x296CACu;
    // 0x296cac: 0xa6020250
    ctx->pc = 0x296cacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 592), (uint16_t)GPR_U32(ctx, 2));
label_296cb0:
    // 0x296cb0: 0x86250048
    ctx->pc = 0x296cb0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x296cb4: 0x4a00005
    ctx->pc = 0x296CB4u;
    {
        const bool branch_taken_0x296cb4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x296CB8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x296cb4) {
            ctx->pc = 0x296CCCu;
            goto label_296ccc;
        }
    }
    ctx->pc = 0x296CBCu;
    // 0x296cbc: 0x3a670001
    ctx->pc = 0x296cbcu;
    SET_GPR_U32(ctx, 7, XOR32(GPR_U32(ctx, 19), 1));
    // 0x296cc0: 0x24060001
    ctx->pc = 0x296cc0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x296cc4: 0xc0a540c
    ctx->pc = 0x296CC4u;
    SET_GPR_U32(ctx, 31, 0x296CCCu);
    ctx->pc = 0x296CC8u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x295030u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoDamage_0x295030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296CCCu; }
    }
    if (ctx->pc != 0x296CCCu) { return; }
    ctx->pc = 0x296CCCu;
label_296ccc:
    // 0x296ccc: 0x32420002
    ctx->pc = 0x296cccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 2));
    // 0x296cd0: 0x1040000f
    ctx->pc = 0x296CD0u;
    {
        const bool branch_taken_0x296cd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x296CD4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 133));
        if (branch_taken_0x296cd0) {
            ctx->pc = 0x296D10u;
            goto label_296d10;
        }
    }
    ctx->pc = 0x296CD8u;
    // 0x296cd8: 0x8e230000
    ctx->pc = 0x296cd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x296cdc: 0x50620005
    ctx->pc = 0x296CDCu;
    {
        const bool branch_taken_0x296cdc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x296cdc) {
            ctx->pc = 0x296CE0u;
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 74)));
            ctx->pc = 0x296CF4u;
            goto label_296cf4;
        }
    }
    ctx->pc = 0x296CE4u;
    // 0x296ce4: 0x96020250
    ctx->pc = 0x296ce4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x296ce8: 0x34420002
    ctx->pc = 0x296ce8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
    // 0x296cec: 0xa6020250
    ctx->pc = 0x296cecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 592), (uint16_t)GPR_U32(ctx, 2));
    // 0x296cf0: 0x8625004a
    ctx->pc = 0x296cf0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 74)));
label_296cf4:
    // 0x296cf4: 0x4a00006
    ctx->pc = 0x296CF4u;
    {
        const bool branch_taken_0x296cf4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x296CF8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x296cf4) {
            ctx->pc = 0x296D10u;
            goto label_296d10;
        }
    }
    ctx->pc = 0x296CFCu;
    // 0x296cfc: 0x133843
    ctx->pc = 0x296cfcu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 19), 1));
    // 0x296d00: 0x38e70001
    ctx->pc = 0x296d00u;
    SET_GPR_U32(ctx, 7, XOR32(GPR_U32(ctx, 7), 1));
    // 0x296d04: 0x24060002
    ctx->pc = 0x296d04u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x296d08: 0xc0a540c
    ctx->pc = 0x296D08u;
    SET_GPR_U32(ctx, 31, 0x296D10u);
    ctx->pc = 0x296D0Cu;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x295030u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoDamage_0x295030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296D10u; }
    }
    if (ctx->pc != 0x296D10u) { return; }
    ctx->pc = 0x296D10u;
label_296d10:
    // 0x296d10: 0x86240048
    ctx->pc = 0x296d10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x296d14: 0x4820015
    ctx->pc = 0x296D14u;
    {
        const bool branch_taken_0x296d14 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x296d14) {
            ctx->pc = 0x296D18u;
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 594)));
            ctx->pc = 0x296D6Cu;
            goto label_296d6c;
        }
    }
    ctx->pc = 0x296D1Cu;
    // 0x296d1c: 0x8e020004
    ctx->pc = 0x296d1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x296d20: 0x8c430130
    ctx->pc = 0x296d20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x296d24: 0x24020050
    ctx->pc = 0x296d24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
    // 0x296d28: 0x821018
    ctx->pc = 0x296d28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x296d2c: 0x8c630044
    ctx->pc = 0x296d2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x296d30: 0x431821
    ctx->pc = 0x296d30u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x296d34: 0x94620002
    ctx->pc = 0x296d34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x296d38: 0x30424000
    ctx->pc = 0x296d38u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
    // 0x296d3c: 0x5040000b
    ctx->pc = 0x296D3Cu;
    {
        const bool branch_taken_0x296d3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x296d3c) {
            ctx->pc = 0x296D40u;
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 594)));
            ctx->pc = 0x296D6Cu;
            goto label_296d6c;
        }
    }
    ctx->pc = 0x296D44u;
    // 0x296d44: 0xc6010b50
    ctx->pc = 0x296d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296d48: 0x44800000
    ctx->pc = 0x296d48u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x296d4c: 0x46010034
    ctx->pc = 0x296d4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x296d50: 0x0
    ctx->pc = 0x296d50u;
    // NOP
    // 0x296d54: 0x45000004
    ctx->pc = 0x296D54u;
    {
        const bool branch_taken_0x296d54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x296D58u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x296d54) {
            ctx->pc = 0x296D68u;
            goto label_296d68;
        }
    }
    ctx->pc = 0x296D5Cu;
    // 0x296d5c: 0x84630000
    ctx->pc = 0x296d5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x296d60: 0x14620028
    ctx->pc = 0x296D60u;
    {
        const bool branch_taken_0x296d60 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x296D64u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x296d60) {
            ctx->pc = 0x296E04u;
            goto label_296e04;
        }
    }
    ctx->pc = 0x296D68u;
label_296d68:
    // 0x296d68: 0x96030252
    ctx->pc = 0x296d68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 594)));
label_296d6c:
    // 0x296d6c: 0x30620001
    ctx->pc = 0x296d6cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x296d70: 0x54400011
    ctx->pc = 0x296D70u;
    {
        const bool branch_taken_0x296d70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x296d70) {
            ctx->pc = 0x296D74u;
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 594)));
            ctx->pc = 0x296DB8u;
            goto label_296db8;
        }
    }
    ctx->pc = 0x296D78u;
    // 0x296d78: 0x86220058
    ctx->pc = 0x296d78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x296d7c: 0x442000e
    ctx->pc = 0x296D7Cu;
    {
        const bool branch_taken_0x296d7c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x296d7c) {
            ctx->pc = 0x296D80u;
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 594)));
            ctx->pc = 0x296DB8u;
            goto label_296db8;
        }
    }
    ctx->pc = 0x296D84u;
    // 0x296d84: 0x8622005a
    ctx->pc = 0x296d84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 90)));
    // 0x296d88: 0x282102a
    ctx->pc = 0x296d88u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 2)));
    // 0x296d8c: 0x5440000a
    ctx->pc = 0x296D8Cu;
    {
        const bool branch_taken_0x296d8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x296d8c) {
            ctx->pc = 0x296D90u;
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 594)));
            ctx->pc = 0x296DB8u;
            goto label_296db8;
        }
    }
    ctx->pc = 0x296D94u;
    // 0x296d94: 0x34620001
    ctx->pc = 0x296d94u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 1));
    // 0x296d98: 0xa6020252
    ctx->pc = 0x296d98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 594), (uint16_t)GPR_U32(ctx, 2));
    // 0x296d9c: 0x200202d
    ctx->pc = 0x296d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296da0: 0x86250058
    ctx->pc = 0x296da0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x296da4: 0x302d
    ctx->pc = 0x296da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296da8: 0x24070001
    ctx->pc = 0x296da8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x296dac: 0xc0a50f4
    ctx->pc = 0x296DACu;
    SET_GPR_U32(ctx, 31, 0x296DB4u);
    ctx->pc = 0x296DB0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2943D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoSfx_0x2943d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296DB4u; }
    }
    if (ctx->pc != 0x296DB4u) { return; }
    ctx->pc = 0x296DB4u;
    // 0x296db4: 0x96030252
    ctx->pc = 0x296db4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 594)));
label_296db8:
    // 0x296db8: 0x30620002
    ctx->pc = 0x296db8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
    // 0x296dbc: 0x14400011
    ctx->pc = 0x296DBCu;
    {
        const bool branch_taken_0x296dbc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x296DC0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x296dbc) {
            ctx->pc = 0x296E04u;
            goto label_296e04;
        }
    }
    ctx->pc = 0x296DC4u;
    // 0x296dc4: 0x8622005c
    ctx->pc = 0x296dc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x296dc8: 0x442000f
    ctx->pc = 0x296DC8u;
    {
        const bool branch_taken_0x296dc8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x296dc8) {
            ctx->pc = 0x296DCCu;
            SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->pc = 0x296E08u;
            goto label_296e08;
        }
    }
    ctx->pc = 0x296DD0u;
    // 0x296dd0: 0x8622005e
    ctx->pc = 0x296dd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 94)));
    // 0x296dd4: 0x282102a
    ctx->pc = 0x296dd4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 2)));
    // 0x296dd8: 0x1440000b
    ctx->pc = 0x296DD8u;
    {
        const bool branch_taken_0x296dd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x296DDCu;
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x296dd8) {
            ctx->pc = 0x296E08u;
            goto label_296e08;
        }
    }
    ctx->pc = 0x296DE0u;
    // 0x296de0: 0x34620002
    ctx->pc = 0x296de0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 2));
    // 0x296de4: 0xa6020252
    ctx->pc = 0x296de4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 594), (uint16_t)GPR_U32(ctx, 2));
    // 0x296de8: 0x200202d
    ctx->pc = 0x296de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296dec: 0x8625005c
    ctx->pc = 0x296decu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x296df0: 0x302d
    ctx->pc = 0x296df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296df4: 0x24070001
    ctx->pc = 0x296df4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x296df8: 0xc0a50f4
    ctx->pc = 0x296DF8u;
    SET_GPR_U32(ctx, 31, 0x296E00u);
    ctx->pc = 0x296DFCu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2943D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoSfx_0x2943d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296E00u; }
    }
    if (ctx->pc != 0x296E00u) { return; }
    ctx->pc = 0x296E00u;
    // 0x296e00: 0xdfbf0050
    ctx->pc = 0x296e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_296e04:
    // 0x296e04: 0xdfb40040
    ctx->pc = 0x296e04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_296e08:
    // 0x296e08: 0xdfb30030
    ctx->pc = 0x296e08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296e0c: 0xdfb20020
    ctx->pc = 0x296e0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296e10: 0xdfb10010
    ctx->pc = 0x296e10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296e14: 0xdfb00000
    ctx->pc = 0x296e14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296e18: 0x3e00008
    ctx->pc = 0x296E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296E1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x296C70u: goto label_296c70;
            case 0x296CB0u: goto label_296cb0;
            case 0x296CCCu: goto label_296ccc;
            case 0x296CF4u: goto label_296cf4;
            case 0x296D10u: goto label_296d10;
            case 0x296D68u: goto label_296d68;
            case 0x296D6Cu: goto label_296d6c;
            case 0x296DB8u: goto label_296db8;
            case 0x296E04u: goto label_296e04;
            case 0x296E08u: goto label_296e08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x296E20u;
}
