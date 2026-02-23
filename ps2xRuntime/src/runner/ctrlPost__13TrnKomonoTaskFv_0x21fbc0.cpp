#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ctrlPost__13TrnKomonoTaskFv
// Address: 0x21fbc0 - 0x21fd10
void ctrlPost__13TrnKomonoTaskFv_0x21fbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ctrlPost__13TrnKomonoTaskFv");


    ctx->pc = 0x21fbc0u;

    // 0x21fbc0: 0x27bdffc0
    ctx->pc = 0x21fbc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21fbc4: 0x7fbf0020
    ctx->pc = 0x21fbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x21fbc8: 0x7fb10010
    ctx->pc = 0x21fbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21fbcc: 0x7fb00000
    ctx->pc = 0x21fbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21fbd0: 0x8c85000c
    ctx->pc = 0x21fbd0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21fbd4: 0x70808e28
    ctx->pc = 0x21fbd4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x21fbd8: 0x24040001
    ctx->pc = 0x21fbd8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fbdc: 0x30a30008
    ctx->pc = 0x21fbdcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 8));
    // 0x21fbe0: 0x3200a
    ctx->pc = 0x21fbe0u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
    // 0x21fbe4: 0x10800033
    ctx->pc = 0x21FBE4u;
    {
        const bool branch_taken_0x21fbe4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x21fbe4) {
            ctx->pc = 0x21FCB4u;
            goto label_21fcb4;
        }
    }
    ctx->pc = 0x21FBECu;
    // 0x21fbec: 0x30a40002
    ctx->pc = 0x21fbecu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), 2));
    // 0x21fbf0: 0x24020001
    ctx->pc = 0x21fbf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fbf4: 0x4100a
    ctx->pc = 0x21fbf4u;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x21fbf8: 0x1040000f
    ctx->pc = 0x21FBF8u;
    {
        const bool branch_taken_0x21fbf8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21FBFCu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21fbf8) {
            ctx->pc = 0x21FC38u;
            goto label_21fc38;
        }
    }
    ctx->pc = 0x21FC00u;
    // 0x21fc00: 0x30a30004
    ctx->pc = 0x21fc00u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 4));
    // 0x21fc04: 0x24020001
    ctx->pc = 0x21fc04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fc08: 0x3100a
    ctx->pc = 0x21fc08u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x21fc0c: 0x1040000b
    ctx->pc = 0x21FC0Cu;
    {
        const bool branch_taken_0x21fc0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21FC10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x21fc0c) {
            ctx->pc = 0x21FC3Cu;
            goto label_21fc3c;
        }
    }
    ctx->pc = 0x21FC14u;
    // 0x21fc14: 0xc069fb8
    ctx->pc = 0x21FC14u;
    SET_GPR_U32(ctx, 31, 0x21FC1Cu);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC1Cu; }
        else if (ctx->pc != 0x21FC1Cu) { ctx->pc = 0x21FC1Cu; }
    }
    if (ctx->pc != 0x21FC1Cu) { return; }
    ctx->pc = 0x21FC1Cu;
    // 0x21fc1c: 0x441001a
    ctx->pc = 0x21FC1Cu;
    {
        const bool branch_taken_0x21fc1c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21FC20u;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x21fc1c) {
            ctx->pc = 0x21FC88u;
            goto label_21fc88;
        }
    }
    ctx->pc = 0x21FC24u;
    // 0x21fc24: 0x12000019
    ctx->pc = 0x21FC24u;
    {
        const bool branch_taken_0x21fc24 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x21FC28u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21fc24) {
            ctx->pc = 0x21FC8Cu;
            goto label_21fc8c;
        }
    }
    ctx->pc = 0x21FC2Cu;
    // 0x21fc2c: 0x2610fffe
    ctx->pc = 0x21fc2cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x21fc30: 0x10000015
    ctx->pc = 0x21FC30u;
    {
        const bool branch_taken_0x21fc30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21fc30) {
            ctx->pc = 0x21FC88u;
            goto label_21fc88;
        }
    }
    ctx->pc = 0x21FC38u;
label_21fc38:
    // 0x21fc38: 0x24020001
    ctx->pc = 0x21fc38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_21fc3c:
    // 0x21fc3c: 0x4100a
    ctx->pc = 0x21fc3cu;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x21fc40: 0x10400008
    ctx->pc = 0x21FC40u;
    {
        const bool branch_taken_0x21fc40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21FC44u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x21fc40) {
            ctx->pc = 0x21FC64u;
            goto label_21fc64;
        }
    }
    ctx->pc = 0x21FC48u;
    // 0x21fc48: 0x8e23000c
    ctx->pc = 0x21fc48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x21fc4c: 0x2402fffd
    ctx->pc = 0x21fc4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x21fc50: 0x70008628
    ctx->pc = 0x21fc50u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21fc54: 0x621024
    ctx->pc = 0x21fc54u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21fc58: 0x1000000b
    ctx->pc = 0x21FC58u;
    {
        const bool branch_taken_0x21fc58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21FC5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x21fc58) {
            ctx->pc = 0x21FC88u;
            goto label_21fc88;
        }
    }
    ctx->pc = 0x21FC60u;
    // 0x21fc60: 0x30a30004
    ctx->pc = 0x21fc60u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 4));
label_21fc64:
    // 0x21fc64: 0x24020001
    ctx->pc = 0x21fc64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fc68: 0x3100a
    ctx->pc = 0x21fc68u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x21fc6c: 0x10400006
    ctx->pc = 0x21FC6Cu;
    {
        const bool branch_taken_0x21fc6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21fc6c) {
            ctx->pc = 0x21FC88u;
            goto label_21fc88;
        }
    }
    ctx->pc = 0x21FC74u;
    // 0x21fc74: 0x8e23000c
    ctx->pc = 0x21fc74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x21fc78: 0x2402fffb
    ctx->pc = 0x21fc78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x21fc7c: 0x24100001
    ctx->pc = 0x21fc7cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fc80: 0x621024
    ctx->pc = 0x21fc80u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21fc84: 0xae22000c
    ctx->pc = 0x21fc84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_21fc88:
    // 0x21fc88: 0x72002628
    ctx->pc = 0x21fc88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_21fc8c:
    // 0x21fc8c: 0xc084d14
    ctx->pc = 0x21FC8Cu;
    SET_GPR_U32(ctx, 31, 0x21FC94u);
    ctx->pc = 0x21FC90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x213450u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddPlayerScore__Fii_0x213450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC94u; }
        else if (ctx->pc != 0x21FC94u) { ctx->pc = 0x21FC94u; }
    }
    if (ctx->pc != 0x21FC94u) { return; }
    ctx->pc = 0x21FC94u;
    // 0x21fc94: 0xc084d48
    ctx->pc = 0x21FC94u;
    SET_GPR_U32(ctx, 31, 0x21FC9Cu);
    ctx->pc = 0x21FC98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x213520u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddPlayerHitNum__Fi_0x213520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC9Cu; }
        else if (ctx->pc != 0x21FC9Cu) { ctx->pc = 0x21FC9Cu; }
    }
    if (ctx->pc != 0x21FC9Cu) { return; }
    ctx->pc = 0x21FC9Cu;
    // 0x21fc9c: 0x8e23000c
    ctx->pc = 0x21fc9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x21fca0: 0x2402fff7
    ctx->pc = 0x21fca0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x21fca4: 0x72202628
    ctx->pc = 0x21fca4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x21fca8: 0x621024
    ctx->pc = 0x21fca8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21fcac: 0xc087f44
    ctx->pc = 0x21FCACu;
    SET_GPR_U32(ctx, 31, 0x21FCB4u);
    ctx->pc = 0x21FCB0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x21FD10u;
    {
        const uint32_t __entryPc = ctx->pc;
        close__13TrnKomonoTaskFv_0x21fd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FCB4u; }
        else if (ctx->pc != 0x21FCB4u) { ctx->pc = 0x21FCB4u; }
    }
    if (ctx->pc != 0x21FCB4u) { return; }
    ctx->pc = 0x21FCB4u;
label_21fcb4:
    // 0x21fcb4: 0x8e23017c
    ctx->pc = 0x21fcb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 380)));
    // 0x21fcb8: 0x10600010
    ctx->pc = 0x21FCB8u;
    {
        const bool branch_taken_0x21fcb8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x21fcb8) {
            ctx->pc = 0x21FCFCu;
            goto label_21fcfc;
        }
    }
    ctx->pc = 0x21FCC0u;
    // 0x21fcc0: 0xc622002c
    ctx->pc = 0x21fcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21fcc4: 0xc6210030
    ctx->pc = 0x21fcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21fcc8: 0xc6200034
    ctx->pc = 0x21fcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21fccc: 0x27a40030
    ctx->pc = 0x21fcccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x21fcd0: 0x2625005c
    ctx->pc = 0x21fcd0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 92));
    // 0x21fcd4: 0xe4820000
    ctx->pc = 0x21fcd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x21fcd8: 0xe4810004
    ctx->pc = 0x21fcd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x21fcdc: 0xe4800008
    ctx->pc = 0x21fcdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x21fce0: 0xc6210178
    ctx->pc = 0x21fce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21fce4: 0xc7a00034
    ctx->pc = 0x21fce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21fce8: 0x46010000
    ctx->pc = 0x21fce8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21fcec: 0xc06bf00
    ctx->pc = 0x21FCECu;
    SET_GPR_U32(ctx, 31, 0x21FCF4u);
    ctx->pc = 0x21FCF0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FCF4u; }
        else if (ctx->pc != 0x21FCF4u) { ctx->pc = 0x21FCF4u; }
    }
    if (ctx->pc != 0x21FCF4u) { return; }
    ctx->pc = 0x21FCF4u;
    // 0x21fcf4: 0xc24a964
    ctx->pc = 0x21FCF4u;
    SET_GPR_U32(ctx, 31, 0x21FCFCu);
    ctx->pc = 0x21FCF8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x92A590u;
    {
        const uint32_t __entryPc = ctx->pc;
        Enemy_Set_ColliBuff__FP9EnemyTask_0x92a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FCFCu; }
        else if (ctx->pc != 0x21FCFCu) { ctx->pc = 0x21FCFCu; }
    }
    if (ctx->pc != 0x21FCFCu) { return; }
    ctx->pc = 0x21FCFCu;
label_21fcfc:
    // 0x21fcfc: 0x7bbf0020
    ctx->pc = 0x21fcfcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21fd00: 0x7bb10010
    ctx->pc = 0x21fd00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fd04: 0x7bb00000
    ctx->pc = 0x21fd04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fd08: 0x3e00008
    ctx->pc = 0x21FD08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FD0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21FC38u: goto label_21fc38;
            case 0x21FC3Cu: goto label_21fc3c;
            case 0x21FC64u: goto label_21fc64;
            case 0x21FC88u: goto label_21fc88;
            case 0x21FC8Cu: goto label_21fc8c;
            case 0x21FCB4u: goto label_21fcb4;
            case 0x21FCFCu: goto label_21fcfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21FD10u;
}
