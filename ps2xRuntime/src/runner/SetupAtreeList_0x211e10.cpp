#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetupAtreeList
// Address: 0x211e10 - 0x211ff0
void SetupAtreeList_0x211e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x211e10u;

    // 0x211e10: 0x27bdff80
    ctx->pc = 0x211e10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x211e14: 0xffbf0070
    ctx->pc = 0x211e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x211e18: 0xffb60060
    ctx->pc = 0x211e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x211e1c: 0xffb50050
    ctx->pc = 0x211e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x211e20: 0xffb40040
    ctx->pc = 0x211e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x211e24: 0xffb30030
    ctx->pc = 0x211e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x211e28: 0xffb20020
    ctx->pc = 0x211e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x211e2c: 0xffb10010
    ctx->pc = 0x211e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x211e30: 0xffb00000
    ctx->pc = 0x211e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211e34: 0x80882d
    ctx->pc = 0x211e34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211e38: 0xa0a82d
    ctx->pc = 0x211e38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211e3c: 0xc0a02d
    ctx->pc = 0x211e3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211e40: 0x86220002
    ctx->pc = 0x211e40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x211e44: 0x30428000
    ctx->pc = 0x211e44u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x211e48: 0x10400003
    ctx->pc = 0x211E48u;
    {
        const bool branch_taken_0x211e48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x211E4Cu;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        if (branch_taken_0x211e48) {
            ctx->pc = 0x211E58u;
            goto label_211e58;
        }
    }
    ctx->pc = 0x211E50u;
    // 0x211e50: 0x1000005d
    ctx->pc = 0x211E50u;
    {
        const bool branch_taken_0x211e50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x211E54u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 32767));
        if (branch_taken_0x211e50) {
            ctx->pc = 0x211FC8u;
            goto label_211fc8;
        }
    }
    ctx->pc = 0x211E58u;
label_211e58:
    // 0x211e58: 0x8e220004
    ctx->pc = 0x211e58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x211e5c: 0x10400002
    ctx->pc = 0x211E5Cu;
    {
        const bool branch_taken_0x211e5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x211E60u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        if (branch_taken_0x211e5c) {
            ctx->pc = 0x211E68u;
            goto label_211e68;
        }
    }
    ctx->pc = 0x211E64u;
    // 0x211e64: 0xae220004
    ctx->pc = 0x211e64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_211e68:
    // 0x211e68: 0x8e22000c
    ctx->pc = 0x211e68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x211e6c: 0x10400002
    ctx->pc = 0x211E6Cu;
    {
        const bool branch_taken_0x211e6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x211E70u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        if (branch_taken_0x211e6c) {
            ctx->pc = 0x211E78u;
            goto label_211e78;
        }
    }
    ctx->pc = 0x211E74u;
    // 0x211e74: 0xae22000c
    ctx->pc = 0x211e74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_211e78:
    // 0x211e78: 0x86220002
    ctx->pc = 0x211e78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x211e7c: 0x28420008
    ctx->pc = 0x211e7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 8));
    // 0x211e80: 0x54400006
    ctx->pc = 0x211E80u;
    {
        const bool branch_taken_0x211e80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x211e80) {
            ctx->pc = 0x211E84u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x211E9Cu;
            goto label_211e9c;
        }
    }
    ctx->pc = 0x211E88u;
    // 0x211e88: 0x8e220014
    ctx->pc = 0x211e88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x211e8c: 0x10400002
    ctx->pc = 0x211E8Cu;
    {
        const bool branch_taken_0x211e8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x211E90u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        if (branch_taken_0x211e8c) {
            ctx->pc = 0x211E98u;
            goto label_211e98;
        }
    }
    ctx->pc = 0x211E94u;
    // 0x211e94: 0xae220014
    ctx->pc = 0x211e94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_211e98:
    // 0x211e98: 0x86220000
    ctx->pc = 0x211e98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_211e9c:
    // 0x211e9c: 0x18400026
    ctx->pc = 0x211E9Cu;
    {
        const bool branch_taken_0x211e9c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x211EA0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x211e9c) {
            ctx->pc = 0x211F38u;
            goto label_211f38;
        }
    }
    ctx->pc = 0x211EA4u;
    // 0x211ea4: 0x24160024
    ctx->pc = 0x211ea4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 36));
    // 0x211ea8: 0x8e230004
    ctx->pc = 0x211ea8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x211eac: 0x0
    ctx->pc = 0x211eacu;
    // NOP
label_211eb0:
    // 0x211eb0: 0x2561018
    ctx->pc = 0x211eb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x211eb4: 0x431021
    ctx->pc = 0x211eb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x211eb8: 0x8c420020
    ctx->pc = 0x211eb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x211ebc: 0x2228021
    ctx->pc = 0x211ebcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x211ec0: 0x8e020000
    ctx->pc = 0x211ec0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x211ec4: 0x2021021
    ctx->pc = 0x211ec4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x211ec8: 0xae020000
    ctx->pc = 0x211ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x211ecc: 0x8e02000c
    ctx->pc = 0x211eccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x211ed0: 0x2021021
    ctx->pc = 0x211ed0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x211ed4: 0xae02000c
    ctx->pc = 0x211ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x211ed8: 0x8e020004
    ctx->pc = 0x211ed8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x211edc: 0x10400005
    ctx->pc = 0x211EDCu;
    {
        const bool branch_taken_0x211edc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x211EE0u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x211edc) {
            ctx->pc = 0x211EF4u;
            goto label_211ef4;
        }
    }
    ctx->pc = 0x211EE4u;
    // 0x211ee4: 0x2022021
    ctx->pc = 0x211ee4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x211ee8: 0xc0841cc
    ctx->pc = 0x211EE8u;
    SET_GPR_U32(ctx, 31, 0x211EF0u);
    ctx->pc = 0x211EECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x210730u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetupAnimHeader_0x210730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211EF0u; }
    }
    if (ctx->pc != 0x211EF0u) { return; }
    ctx->pc = 0x211EF0u;
    // 0x211ef0: 0xae020004
    ctx->pc = 0x211ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_211ef4:
    // 0x211ef4: 0x8e020008
    ctx->pc = 0x211ef4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x211ef8: 0x10400002
    ctx->pc = 0x211EF8u;
    {
        const bool branch_taken_0x211ef8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x211EFCu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        if (branch_taken_0x211ef8) {
            ctx->pc = 0x211F04u;
            goto label_211f04;
        }
    }
    ctx->pc = 0x211F00u;
    // 0x211f00: 0xae020008
    ctx->pc = 0x211f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_211f04:
    // 0x211f04: 0x8e040008
    ctx->pc = 0x211f04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x211f08: 0xc084204
    ctx->pc = 0x211F08u;
    SET_GPR_U32(ctx, 31, 0x211F10u);
    ctx->pc = 0x211F0Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x210810u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitOAnimList_0x210810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211F10u; }
    }
    if (ctx->pc != 0x211F10u) { return; }
    ctx->pc = 0x211F10u;
    // 0x211f10: 0x8e040000
    ctx->pc = 0x211f10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x211f14: 0x8e050014
    ctx->pc = 0x211f14u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x211f18: 0xc084772
    ctx->pc = 0x211F18u;
    SET_GPR_U32(ctx, 31, 0x211F20u);
    ctx->pc = 0x211F1Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->pc = 0x211DC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitAtreeSeqs_0x211dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211F20u; }
    }
    if (ctx->pc != 0x211F20u) { return; }
    ctx->pc = 0x211F20u;
    // 0x211f20: 0xa6150036
    ctx->pc = 0x211f20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 21));
    // 0x211f24: 0x26520001
    ctx->pc = 0x211f24u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x211f28: 0x86220000
    ctx->pc = 0x211f28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x211f2c: 0x242102a
    ctx->pc = 0x211f2cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x211f30: 0x5440ffdf
    ctx->pc = 0x211F30u;
    {
        const bool branch_taken_0x211f30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x211f30) {
            ctx->pc = 0x211F34u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x211EB0u;
            goto label_211eb0;
        }
    }
    ctx->pc = 0x211F38u;
label_211f38:
    // 0x211f38: 0x6810013
    ctx->pc = 0x211F38u;
    {
        const bool branch_taken_0x211f38 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x211F3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x211f38) {
            ctx->pc = 0x211F88u;
            goto label_211f88;
        }
    }
    ctx->pc = 0x211F40u;
    // 0x211f40: 0x3c040032
    ctx->pc = 0x211f40u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x211f44: 0x8c83f4d0
    ctx->pc = 0x211f44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294964432)));
    // 0x211f48: 0x28620018
    ctx->pc = 0x211f48u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 24));
    // 0x211f4c: 0x10400004
    ctx->pc = 0x211F4Cu;
    {
        const bool branch_taken_0x211f4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x211F50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x211f4c) {
            ctx->pc = 0x211F60u;
            goto label_211f60;
        }
    }
    ctx->pc = 0x211F54u;
    // 0x211f54: 0x60a02d
    ctx->pc = 0x211f54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f58: 0x1000000a
    ctx->pc = 0x211F58u;
    {
        const bool branch_taken_0x211f58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x211F5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294964432), GPR_U32(ctx, 2));
        if (branch_taken_0x211f58) {
            ctx->pc = 0x211F84u;
            goto label_211f84;
        }
    }
    ctx->pc = 0x211F60u;
label_211f60:
    // 0x211f60: 0x3c020037
    ctx->pc = 0x211f60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x211f64: 0x3c0300ff
    ctx->pc = 0x211f64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)255 << 16));
    // 0x211f68: 0x3463ff80
    ctx->pc = 0x211f68u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65408));
    // 0x211f6c: 0xac438008
    ctx->pc = 0x211f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294934536), GPR_U32(ctx, 3));
    // 0x211f70: 0x3c04003a
    ctx->pc = 0x211f70u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x211f74: 0x248459f0
    ctx->pc = 0x211f74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23024));
    // 0x211f78: 0x3c050080
    ctx->pc = 0x211f78u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    // 0x211f7c: 0xc0b49a6
    ctx->pc = 0x211F7Cu;
    SET_GPR_U32(ctx, 31, 0x211F84u);
    ctx->pc = 0x211F80u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 16480));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211F84u; }
    }
    if (ctx->pc != 0x211F84u) { return; }
    ctx->pc = 0x211F84u;
label_211f84:
    // 0x211f84: 0x3c020032
    ctx->pc = 0x211f84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_211f88:
    // 0x211f88: 0x2442f538
    ctx->pc = 0x211f88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964536));
    // 0x211f8c: 0x142080
    ctx->pc = 0x211f8cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 20), 2));
    // 0x211f90: 0x821021
    ctx->pc = 0x211f90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x211f94: 0xac510000
    ctx->pc = 0x211f94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x211f98: 0x3c030032
    ctx->pc = 0x211f98u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x211f9c: 0x2463f598
    ctx->pc = 0x211f9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294964632));
    // 0x211fa0: 0x141100
    ctx->pc = 0x211fa0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 4));
    // 0x211fa4: 0x431021
    ctx->pc = 0x211fa4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x211fa8: 0xa0400000
    ctx->pc = 0x211fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x211fac: 0x3c020032
    ctx->pc = 0x211facu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x211fb0: 0x2442f718
    ctx->pc = 0x211fb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965016));
    // 0x211fb4: 0x822021
    ctx->pc = 0x211fb4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x211fb8: 0xac950000
    ctx->pc = 0x211fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
    // 0x211fbc: 0x36828000
    ctx->pc = 0x211fbcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 20), 32768));
    // 0x211fc0: 0xa6220002
    ctx->pc = 0x211fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x211fc4: 0x280102d
    ctx->pc = 0x211fc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_211fc8:
    // 0x211fc8: 0xdfbf0070
    ctx->pc = 0x211fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x211fcc: 0xdfb60060
    ctx->pc = 0x211fccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x211fd0: 0xdfb50050
    ctx->pc = 0x211fd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x211fd4: 0xdfb40040
    ctx->pc = 0x211fd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211fd8: 0xdfb30030
    ctx->pc = 0x211fd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211fdc: 0xdfb20020
    ctx->pc = 0x211fdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211fe0: 0xdfb10010
    ctx->pc = 0x211fe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211fe4: 0xdfb00000
    ctx->pc = 0x211fe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211fe8: 0x3e00008
    ctx->pc = 0x211FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211FECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x211E58u: goto label_211e58;
            case 0x211E68u: goto label_211e68;
            case 0x211E78u: goto label_211e78;
            case 0x211E98u: goto label_211e98;
            case 0x211E9Cu: goto label_211e9c;
            case 0x211EB0u: goto label_211eb0;
            case 0x211EF4u: goto label_211ef4;
            case 0x211F04u: goto label_211f04;
            case 0x211F38u: goto label_211f38;
            case 0x211F60u: goto label_211f60;
            case 0x211F84u: goto label_211f84;
            case 0x211F88u: goto label_211f88;
            case 0x211FC8u: goto label_211fc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x211FF0u;
}
