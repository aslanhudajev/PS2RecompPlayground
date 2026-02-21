#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioWithName
// Address: 0x25d9c8 - 0x25dc54
void AudioWithName_0x25d9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25d9c8u;

    // 0x25d9c8: 0x27bdff70
    ctx->pc = 0x25d9c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x25d9cc: 0xffbf0070
    ctx->pc = 0x25d9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x25d9d0: 0xffb60060
    ctx->pc = 0x25d9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x25d9d4: 0xffb50050
    ctx->pc = 0x25d9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x25d9d8: 0xffb40040
    ctx->pc = 0x25d9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x25d9dc: 0xffb30030
    ctx->pc = 0x25d9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25d9e0: 0xffb20020
    ctx->pc = 0x25d9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25d9e4: 0xffb10010
    ctx->pc = 0x25d9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25d9e8: 0xffb00000
    ctx->pc = 0x25d9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25d9ec: 0xe7b40080
    ctx->pc = 0x25d9ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x25d9f0: 0x46006506
    ctx->pc = 0x25d9f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x25d9f4: 0x80882d
    ctx->pc = 0x25d9f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d9f8: 0xa0202d
    ctx->pc = 0x25d9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d9fc: 0xc0a82d
    ctx->pc = 0x25d9fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25da00: 0xe0b02d
    ctx->pc = 0x25da00u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25da04: 0x3c030034
    ctx->pc = 0x25da04u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25da08: 0x2463d330
    ctx->pc = 0x25da08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294955824));
    // 0x25da0c: 0x41080
    ctx->pc = 0x25da0cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x25da10: 0x431021
    ctx->pc = 0x25da10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25da14: 0x8c540000
    ctx->pc = 0x25da14u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25da18: 0x3c030032
    ctx->pc = 0x25da18u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x25da1c: 0x24631bc0
    ctx->pc = 0x25da1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
    // 0x25da20: 0x24022b00
    ctx->pc = 0x25da20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25da24: 0x821018
    ctx->pc = 0x25da24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25da28: 0x431021
    ctx->pc = 0x25da28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25da2c: 0x8c52000c
    ctx->pc = 0x25da2cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x25da30: 0xc0975da
    ctx->pc = 0x25DA30u;
    SET_GPR_U32(ctx, 31, 0x25DA38u);
    ctx->pc = 0x25DA34u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x25D768u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_chicken_0x25d768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DA38u; }
    }
    if (ctx->pc != 0x25DA38u) { return; }
    ctx->pc = 0x25DA38u;
    // 0x25da38: 0x10400008
    ctx->pc = 0x25DA38u;
    {
        const bool branch_taken_0x25da38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25DA3Cu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x25da38) {
            ctx->pc = 0x25DA5Cu;
            goto label_25da5c;
        }
    }
    ctx->pc = 0x25DA40u;
    // 0x25da40: 0x3c100001
    ctx->pc = 0x25da40u;
    SET_GPR_U32(ctx, 16, ((uint32_t)1 << 16));
    // 0x25da44: 0x3610002b
    ctx->pc = 0x25da44u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 43));
    // 0x25da48: 0x3c030001
    ctx->pc = 0x25da48u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x25da4c: 0x3463002a
    ctx->pc = 0x25da4cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 42));
    // 0x25da50: 0x111027
    ctx->pc = 0x25da50u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x25da54: 0x1000002b
    ctx->pc = 0x25DA54u;
    {
        const bool branch_taken_0x25da54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25DA58u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
        if (branch_taken_0x25da54) {
            ctx->pc = 0x25DB04u;
            goto label_25db04;
        }
    }
    ctx->pc = 0x25DA5Cu;
label_25da5c:
    // 0x25da5c: 0x3c020034
    ctx->pc = 0x25da5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25da60: 0x8c42d328
    ctx->pc = 0x25da60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955816)));
    // 0x25da64: 0x10400012
    ctx->pc = 0x25DA64u;
    {
        const bool branch_taken_0x25da64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25DA68u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x25da64) {
            ctx->pc = 0x25DAB0u;
            goto label_25dab0;
        }
    }
    ctx->pc = 0x25DA6Cu;
    // 0x25da6c: 0x12220003
    ctx->pc = 0x25DA6Cu;
    {
        const bool branch_taken_0x25da6c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x25DA70u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x25da6c) {
            ctx->pc = 0x25DA7Cu;
            goto label_25da7c;
        }
    }
    ctx->pc = 0x25DA74u;
    // 0x25da74: 0x10000003
    ctx->pc = 0x25DA74u;
    {
        const bool branch_taken_0x25da74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25DA78u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 11624));
        if (branch_taken_0x25da74) {
            ctx->pc = 0x25DA84u;
            goto label_25da84;
        }
    }
    ctx->pc = 0x25DA7Cu;
label_25da7c:
    // 0x25da7c: 0x3c03003c
    ctx->pc = 0x25da7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x25da80: 0x24632d78
    ctx->pc = 0x25da80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 11640));
label_25da84:
    // 0x25da84: 0x101080
    ctx->pc = 0x25da84u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x25da88: 0x431021
    ctx->pc = 0x25da88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25da8c: 0x8c530000
    ctx->pc = 0x25da8cu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25da90: 0x2402ffff
    ctx->pc = 0x25da90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25da94: 0x52220004
    ctx->pc = 0x25DA94u;
    {
        const bool branch_taken_0x25da94 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        if (branch_taken_0x25da94) {
            ctx->pc = 0x25DA98u;
            SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
            ctx->pc = 0x25DAA8u;
            goto label_25daa8;
        }
    }
    ctx->pc = 0x25DA9Cu;
    // 0x25da9c: 0x3c02003c
    ctx->pc = 0x25da9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x25daa0: 0x10000013
    ctx->pc = 0x25DAA0u;
    {
        const bool branch_taken_0x25daa0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25DAA4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11656));
        if (branch_taken_0x25daa0) {
            ctx->pc = 0x25DAF0u;
            goto label_25daf0;
        }
    }
    ctx->pc = 0x25DAA8u;
label_25daa8:
    // 0x25daa8: 0x10000011
    ctx->pc = 0x25DAA8u;
    {
        const bool branch_taken_0x25daa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25DAACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11912));
        if (branch_taken_0x25daa8) {
            ctx->pc = 0x25DAF0u;
            goto label_25daf0;
        }
    }
    ctx->pc = 0x25DAB0u;
label_25dab0:
    // 0x25dab0: 0x12220003
    ctx->pc = 0x25DAB0u;
    {
        const bool branch_taken_0x25dab0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x25DAB4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x25dab0) {
            ctx->pc = 0x25DAC0u;
            goto label_25dac0;
        }
    }
    ctx->pc = 0x25DAB8u;
    // 0x25dab8: 0x10000003
    ctx->pc = 0x25DAB8u;
    {
        const bool branch_taken_0x25dab8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25DABCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 11080));
        if (branch_taken_0x25dab8) {
            ctx->pc = 0x25DAC8u;
            goto label_25dac8;
        }
    }
    ctx->pc = 0x25DAC0u;
label_25dac0:
    // 0x25dac0: 0x3c03003c
    ctx->pc = 0x25dac0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x25dac4: 0x24632b58
    ctx->pc = 0x25dac4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 11096));
label_25dac8:
    // 0x25dac8: 0x101080
    ctx->pc = 0x25dac8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x25dacc: 0x431021
    ctx->pc = 0x25daccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25dad0: 0x8c530000
    ctx->pc = 0x25dad0u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25dad4: 0x2402ffff
    ctx->pc = 0x25dad4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25dad8: 0x12220003
    ctx->pc = 0x25DAD8u;
    {
        const bool branch_taken_0x25dad8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x25DADCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x25dad8) {
            ctx->pc = 0x25DAE8u;
            goto label_25dae8;
        }
    }
    ctx->pc = 0x25DAE0u;
    // 0x25dae0: 0x10000003
    ctx->pc = 0x25DAE0u;
    {
        const bool branch_taken_0x25dae0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25DAE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11112));
        if (branch_taken_0x25dae0) {
            ctx->pc = 0x25DAF0u;
            goto label_25daf0;
        }
    }
    ctx->pc = 0x25DAE8u;
label_25dae8:
    // 0x25dae8: 0x3c02003c
    ctx->pc = 0x25dae8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x25daec: 0x24422c68
    ctx->pc = 0x25daecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11368));
label_25daf0:
    // 0x25daf0: 0x121880
    ctx->pc = 0x25daf0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 2));
    // 0x25daf4: 0x102180
    ctx->pc = 0x25daf4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 6));
    // 0x25daf8: 0x641821
    ctx->pc = 0x25daf8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25dafc: 0x621821
    ctx->pc = 0x25dafcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25db00: 0x8c700000
    ctx->pc = 0x25db00u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25db04:
    // 0x25db04: 0x620000f
    ctx->pc = 0x25DB04u;
    {
        const bool branch_taken_0x25db04 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x25DB08u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25db04) {
            ctx->pc = 0x25DB44u;
            goto label_25db44;
        }
    }
    ctx->pc = 0x25DB0Cu;
    // 0x25db0c: 0x240500e0
    ctx->pc = 0x25db0cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25db10: 0x280302d
    ctx->pc = 0x25db10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25db14: 0x24070002
    ctx->pc = 0x25db14u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x25db18: 0x3c01bf80
    ctx->pc = 0x25db18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25db1c: 0x44816000
    ctx->pc = 0x25db1cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25db20: 0xc097116
    ctx->pc = 0x25DB20u;
    SET_GPR_U32(ctx, 31, 0x25DB28u);
    ctx->pc = 0x25DB24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x25C458u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioVQueAdd4_0x25c458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DB28u; }
    }
    if (ctx->pc != 0x25DB28u) { return; }
    ctx->pc = 0x25DB28u;
    // 0x25db28: 0x44800800
    ctx->pc = 0x25db28u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x25db2c: 0x46010032
    ctx->pc = 0x25db2cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25db30: 0x0
    ctx->pc = 0x25db30u;
    // NOP
    // 0x25db34: 0x4501003d
    ctx->pc = 0x25DB34u;
    {
        const bool branch_taken_0x25db34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25DB38u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x25db34) {
            ctx->pc = 0x25DC2Cu;
            goto label_25dc2c;
        }
    }
    ctx->pc = 0x25DB3Cu;
    // 0x25db3c: 0x3c01bf80
    ctx->pc = 0x25db3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25db40: 0x4481a000
    ctx->pc = 0x25db40u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_25db44:
    // 0x25db44: 0x660000f
    ctx->pc = 0x25DB44u;
    {
        const bool branch_taken_0x25db44 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x25DB48u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25db44) {
            ctx->pc = 0x25DB84u;
            goto label_25db84;
        }
    }
    ctx->pc = 0x25DB4Cu;
    // 0x25db4c: 0x240500e0
    ctx->pc = 0x25db4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25db50: 0x280302d
    ctx->pc = 0x25db50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25db54: 0x24070002
    ctx->pc = 0x25db54u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x25db58: 0x3c01bf80
    ctx->pc = 0x25db58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25db5c: 0x44816000
    ctx->pc = 0x25db5cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25db60: 0xc097116
    ctx->pc = 0x25DB60u;
    SET_GPR_U32(ctx, 31, 0x25DB68u);
    ctx->pc = 0x25DB64u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x25C458u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioVQueAdd4_0x25c458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DB68u; }
    }
    if (ctx->pc != 0x25DB68u) { return; }
    ctx->pc = 0x25DB68u;
    // 0x25db68: 0x44800800
    ctx->pc = 0x25db68u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x25db6c: 0x46010032
    ctx->pc = 0x25db6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25db70: 0x0
    ctx->pc = 0x25db70u;
    // NOP
    // 0x25db74: 0x4501002d
    ctx->pc = 0x25DB74u;
    {
        const bool branch_taken_0x25db74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25DB78u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x25db74) {
            ctx->pc = 0x25DC2Cu;
            goto label_25dc2c;
        }
    }
    ctx->pc = 0x25DB7Cu;
    // 0x25db7c: 0x3c01bf80
    ctx->pc = 0x25db7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25db80: 0x4481a000
    ctx->pc = 0x25db80u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_25db84:
    // 0x25db84: 0x600000f
    ctx->pc = 0x25DB84u;
    {
        const bool branch_taken_0x25db84 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x25DB88u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25db84) {
            ctx->pc = 0x25DBC4u;
            goto label_25dbc4;
        }
    }
    ctx->pc = 0x25DB8Cu;
    // 0x25db8c: 0x240500e0
    ctx->pc = 0x25db8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25db90: 0x280302d
    ctx->pc = 0x25db90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25db94: 0x24070002
    ctx->pc = 0x25db94u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x25db98: 0x3c01bf80
    ctx->pc = 0x25db98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25db9c: 0x44816000
    ctx->pc = 0x25db9cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25dba0: 0xc097116
    ctx->pc = 0x25DBA0u;
    SET_GPR_U32(ctx, 31, 0x25DBA8u);
    ctx->pc = 0x25DBA4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x25C458u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioVQueAdd4_0x25c458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DBA8u; }
    }
    if (ctx->pc != 0x25DBA8u) { return; }
    ctx->pc = 0x25DBA8u;
    // 0x25dba8: 0x44800800
    ctx->pc = 0x25dba8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x25dbac: 0x46010032
    ctx->pc = 0x25dbacu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25dbb0: 0x0
    ctx->pc = 0x25dbb0u;
    // NOP
    // 0x25dbb4: 0x4501001d
    ctx->pc = 0x25DBB4u;
    {
        const bool branch_taken_0x25dbb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25DBB8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x25dbb4) {
            ctx->pc = 0x25DC2Cu;
            goto label_25dc2c;
        }
    }
    ctx->pc = 0x25DBBCu;
    // 0x25dbbc: 0x3c01bf80
    ctx->pc = 0x25dbbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25dbc0: 0x4481a000
    ctx->pc = 0x25dbc0u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_25dbc4:
    // 0x25dbc4: 0x6a0000f
    ctx->pc = 0x25DBC4u;
    {
        const bool branch_taken_0x25dbc4 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x25DBC8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25dbc4) {
            ctx->pc = 0x25DC04u;
            goto label_25dc04;
        }
    }
    ctx->pc = 0x25DBCCu;
    // 0x25dbcc: 0x240500e0
    ctx->pc = 0x25dbccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25dbd0: 0x280302d
    ctx->pc = 0x25dbd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dbd4: 0x24070002
    ctx->pc = 0x25dbd4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x25dbd8: 0x3c01bf80
    ctx->pc = 0x25dbd8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25dbdc: 0x44816000
    ctx->pc = 0x25dbdcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25dbe0: 0xc097116
    ctx->pc = 0x25DBE0u;
    SET_GPR_U32(ctx, 31, 0x25DBE8u);
    ctx->pc = 0x25DBE4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x25C458u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioVQueAdd4_0x25c458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DBE8u; }
    }
    if (ctx->pc != 0x25DBE8u) { return; }
    ctx->pc = 0x25DBE8u;
    // 0x25dbe8: 0x44800800
    ctx->pc = 0x25dbe8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x25dbec: 0x46010032
    ctx->pc = 0x25dbecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25dbf0: 0x0
    ctx->pc = 0x25dbf0u;
    // NOP
    // 0x25dbf4: 0x4501000d
    ctx->pc = 0x25DBF4u;
    {
        const bool branch_taken_0x25dbf4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25DBF8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x25dbf4) {
            ctx->pc = 0x25DC2Cu;
            goto label_25dc2c;
        }
    }
    ctx->pc = 0x25DBFCu;
    // 0x25dbfc: 0x3c01bf80
    ctx->pc = 0x25dbfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25dc00: 0x4481a000
    ctx->pc = 0x25dc00u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_25dc04:
    // 0x25dc04: 0x6c00008
    ctx->pc = 0x25DC04u;
    {
        const bool branch_taken_0x25dc04 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x25DC08u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25dc04) {
            ctx->pc = 0x25DC28u;
            goto label_25dc28;
        }
    }
    ctx->pc = 0x25DC0Cu;
    // 0x25dc0c: 0x240500e0
    ctx->pc = 0x25dc0cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25dc10: 0x280302d
    ctx->pc = 0x25dc10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dc14: 0x24070002
    ctx->pc = 0x25dc14u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x25dc18: 0x3c01bf80
    ctx->pc = 0x25dc18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25dc1c: 0x44816000
    ctx->pc = 0x25dc1cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25dc20: 0xc097116
    ctx->pc = 0x25DC20u;
    SET_GPR_U32(ctx, 31, 0x25DC28u);
    ctx->pc = 0x25DC24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x25C458u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioVQueAdd4_0x25c458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DC28u; }
    }
    if (ctx->pc != 0x25DC28u) { return; }
    ctx->pc = 0x25DC28u;
label_25dc28:
    // 0x25dc28: 0xdfbf0070
    ctx->pc = 0x25dc28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_25dc2c:
    // 0x25dc2c: 0xdfb60060
    ctx->pc = 0x25dc2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25dc30: 0xdfb50050
    ctx->pc = 0x25dc30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25dc34: 0xdfb40040
    ctx->pc = 0x25dc34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25dc38: 0xdfb30030
    ctx->pc = 0x25dc38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25dc3c: 0xdfb20020
    ctx->pc = 0x25dc3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25dc40: 0xdfb10010
    ctx->pc = 0x25dc40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25dc44: 0xdfb00000
    ctx->pc = 0x25dc44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25dc48: 0xc7b40080
    ctx->pc = 0x25dc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25dc4c: 0x3e00008
    ctx->pc = 0x25DC4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DC50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25DA5Cu: goto label_25da5c;
            case 0x25DA7Cu: goto label_25da7c;
            case 0x25DA84u: goto label_25da84;
            case 0x25DAA8u: goto label_25daa8;
            case 0x25DAB0u: goto label_25dab0;
            case 0x25DAC0u: goto label_25dac0;
            case 0x25DAC8u: goto label_25dac8;
            case 0x25DAE8u: goto label_25dae8;
            case 0x25DAF0u: goto label_25daf0;
            case 0x25DB04u: goto label_25db04;
            case 0x25DB44u: goto label_25db44;
            case 0x25DB84u: goto label_25db84;
            case 0x25DBC4u: goto label_25dbc4;
            case 0x25DC04u: goto label_25dc04;
            case 0x25DC28u: goto label_25dc28;
            case 0x25DC2Cu: goto label_25dc2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25DC54u;
}
