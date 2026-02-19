#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_weakening
// Address: 0x232a78 - 0x232bc8
void do_weakening_0x232a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x232a78u;

    // 0x232a78: 0x27bdffe0
    ctx->pc = 0x232a78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x232a7c: 0xffbf0010
    ctx->pc = 0x232a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x232a80: 0xffb00000
    ctx->pc = 0x232a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232a84: 0x80802d
    ctx->pc = 0x232a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232a88: 0x8e06094c
    ctx->pc = 0x232a88u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 2380)));
    // 0x232a8c: 0x10c00017
    ctx->pc = 0x232A8Cu;
    {
        const bool branch_taken_0x232a8c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x232A90u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x232a8c) {
            ctx->pc = 0x232AECu;
            goto label_232aec;
        }
    }
    ctx->pc = 0x232A94u;
    // 0x232a94: 0x8e0300fc
    ctx->pc = 0x232a94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x232a98: 0x24020001
    ctx->pc = 0x232a98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x232a9c: 0x54620014
    ctx->pc = 0x232A9Cu;
    {
        const bool branch_taken_0x232a9c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x232a9c) {
            ctx->pc = 0x232AA0u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x232AF0u;
            goto label_232af0;
        }
    }
    ctx->pc = 0x232AA4u;
    // 0x232aa4: 0x3c020031
    ctx->pc = 0x232aa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x232aa8: 0xdc420e28
    ctx->pc = 0x232aa8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x232aac: 0x30420004
    ctx->pc = 0x232aacu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x232ab0: 0x5440000f
    ctx->pc = 0x232AB0u;
    {
        const bool branch_taken_0x232ab0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x232ab0) {
            ctx->pc = 0x232AB4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x232AF0u;
            goto label_232af0;
        }
    }
    ctx->pc = 0x232AB8u;
    // 0x232ab8: 0x3c020034
    ctx->pc = 0x232ab8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x232abc: 0x8c43e7f0
    ctx->pc = 0x232abcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x232ac0: 0x2402000c
    ctx->pc = 0x232ac0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x232ac4: 0x10620009
    ctx->pc = 0x232AC4u;
    {
        const bool branch_taken_0x232ac4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x232AC8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x232ac4) {
            ctx->pc = 0x232AECu;
            goto label_232aec;
        }
    }
    ctx->pc = 0x232ACCu;
    // 0x232acc: 0x8e030948
    ctx->pc = 0x232accu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 2376)));
    // 0x232ad0: 0x8c42ffbc
    ctx->pc = 0x232ad0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x232ad4: 0x621821
    ctx->pc = 0x232ad4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232ad8: 0x66102a
    ctx->pc = 0x232ad8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 6)));
    // 0x232adc: 0x14400003
    ctx->pc = 0x232ADCu;
    {
        const bool branch_taken_0x232adc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x232AE0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2376), GPR_U32(ctx, 3));
        if (branch_taken_0x232adc) {
            ctx->pc = 0x232AECu;
            goto label_232aec;
        }
    }
    ctx->pc = 0x232AE4u;
    // 0x232ae4: 0x661023
    ctx->pc = 0x232ae4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x232ae8: 0xae020948
    ctx->pc = 0x232ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2376), GPR_U32(ctx, 2));
label_232aec:
    // 0x232aec: 0xc6011a10
    ctx->pc = 0x232aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232af0:
    // 0x232af0: 0x3c013f80
    ctx->pc = 0x232af0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x232af4: 0x44810000
    ctx->pc = 0x232af4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x232af8: 0x46000834
    ctx->pc = 0x232af8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232afc: 0x0
    ctx->pc = 0x232afcu;
    // NOP
    // 0x232b00: 0x4501002d
    ctx->pc = 0x232B00u;
    {
        const bool branch_taken_0x232b00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x232B04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x232b00) {
            ctx->pc = 0x232BB8u;
            goto label_232bb8;
        }
    }
    ctx->pc = 0x232B08u;
    // 0x232b08: 0x10a0002b
    ctx->pc = 0x232B08u;
    {
        const bool branch_taken_0x232b08 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x232B0Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x232b08) {
            ctx->pc = 0x232BB8u;
            goto label_232bb8;
        }
    }
    ctx->pc = 0x232B10u;
    // 0x232b10: 0xc6011a10
    ctx->pc = 0x232b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232b14: 0x3c014348
    ctx->pc = 0x232b14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17224 << 16));
    // 0x232b18: 0x44810000
    ctx->pc = 0x232b18u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x232b1c: 0x46000836
    ctx->pc = 0x232b1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232b20: 0x0
    ctx->pc = 0x232b20u;
    // NOP
    // 0x232b24: 0x45000023
    ctx->pc = 0x232B24u;
    {
        const bool branch_taken_0x232b24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x232B28u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x232b24) {
            ctx->pc = 0x232BB4u;
            goto label_232bb4;
        }
    }
    ctx->pc = 0x232B2Cu;
    // 0x232b2c: 0x960301ce
    ctx->pc = 0x232b2cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 462)));
    // 0x232b30: 0x9442ffbc
    ctx->pc = 0x232b30u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x232b34: 0x621823
    ctx->pc = 0x232b34u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232b38: 0xa60301ce
    ctx->pc = 0x232b38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 462), (uint16_t)GPR_U32(ctx, 3));
    // 0x232b3c: 0x31c00
    ctx->pc = 0x232b3cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x232b40: 0x1c60001d
    ctx->pc = 0x232B40u;
    {
        const bool branch_taken_0x232b40 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x232B44u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x232b40) {
            ctx->pc = 0x232BB8u;
            goto label_232bb8;
        }
    }
    ctx->pc = 0x232B48u;
    // 0x232b48: 0x3c020034
    ctx->pc = 0x232b48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x232b4c: 0x8c43e7f0
    ctx->pc = 0x232b4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x232b50: 0x2402000d
    ctx->pc = 0x232b50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
    // 0x232b54: 0x10620007
    ctx->pc = 0x232B54u;
    {
        const bool branch_taken_0x232b54 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x232B58u;
        SET_GPR_U32(ctx, 3, ((uint32_t)17 << 16));
        if (branch_taken_0x232b54) {
            ctx->pc = 0x232B74u;
            goto label_232b74;
        }
    }
    ctx->pc = 0x232B5Cu;
    // 0x232b5c: 0x8e020134
    ctx->pc = 0x232b5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x232b60: 0x431024
    ctx->pc = 0x232b60u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x232b64: 0x54400004
    ctx->pc = 0x232B64u;
    {
        const bool branch_taken_0x232b64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x232b64) {
            ctx->pc = 0x232B68u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x232B78u;
            goto label_232b78;
        }
    }
    ctx->pc = 0x232B6Cu;
    // 0x232b6c: 0xc097b52
    ctx->pc = 0x232B6Cu;
    SET_GPR_U32(ctx, 31, 0x232B74u);
    ctx->pc = 0x25ED48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioHeartBeat_0x25ed48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232B74u; }
    }
    if (ctx->pc != 0x232B74u) { return; }
    ctx->pc = 0x232B74u;
label_232b74:
    // 0x232b74: 0xc6011a10
    ctx->pc = 0x232b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232b78:
    // 0x232b78: 0x3c0142c8
    ctx->pc = 0x232b78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17096 << 16));
    // 0x232b7c: 0x44810000
    ctx->pc = 0x232b7cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x232b80: 0x46010036
    ctx->pc = 0x232b80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232b84: 0x0
    ctx->pc = 0x232b84u;
    // NOP
    // 0x232b88: 0x45010009
    ctx->pc = 0x232B88u;
    {
        const bool branch_taken_0x232b88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x232B8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 120));
        if (branch_taken_0x232b88) {
            ctx->pc = 0x232BB0u;
            goto label_232bb0;
        }
    }
    ctx->pc = 0x232B90u;
    // 0x232b90: 0xc6011a10
    ctx->pc = 0x232b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232b94: 0x3c0141c8
    ctx->pc = 0x232b94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16840 << 16));
    // 0x232b98: 0x44810000
    ctx->pc = 0x232b98u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x232b9c: 0x46010036
    ctx->pc = 0x232b9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232ba0: 0x0
    ctx->pc = 0x232ba0u;
    // NOP
    // 0x232ba4: 0x45010002
    ctx->pc = 0x232BA4u;
    {
        const bool branch_taken_0x232ba4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x232BA8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
        if (branch_taken_0x232ba4) {
            ctx->pc = 0x232BB0u;
            goto label_232bb0;
        }
    }
    ctx->pc = 0x232BACu;
    // 0x232bac: 0x2402001e
    ctx->pc = 0x232bacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
label_232bb0:
    // 0x232bb0: 0xa60201ce
    ctx->pc = 0x232bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 462), (uint16_t)GPR_U32(ctx, 2));
label_232bb4:
    // 0x232bb4: 0x102d
    ctx->pc = 0x232bb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232bb8:
    // 0x232bb8: 0xdfbf0010
    ctx->pc = 0x232bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232bbc: 0xdfb00000
    ctx->pc = 0x232bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232bc0: 0x3e00008
    ctx->pc = 0x232BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232BC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x232AECu: goto label_232aec;
            case 0x232AF0u: goto label_232af0;
            case 0x232B74u: goto label_232b74;
            case 0x232B78u: goto label_232b78;
            case 0x232BB0u: goto label_232bb0;
            case 0x232BB4u: goto label_232bb4;
            case 0x232BB8u: goto label_232bb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x232BC8u;
}
