#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_credits
// Address: 0x283ab8 - 0x283c14
void init_credits_0x283ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x283ab8u;

    // 0x283ab8: 0x27bdff80
    ctx->pc = 0x283ab8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x283abc: 0xffbf0070
    ctx->pc = 0x283abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x283ac0: 0xffb40060
    ctx->pc = 0x283ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x283ac4: 0xffb30050
    ctx->pc = 0x283ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x283ac8: 0xffb20040
    ctx->pc = 0x283ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x283acc: 0xffb10030
    ctx->pc = 0x283accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x283ad0: 0xffb00020
    ctx->pc = 0x283ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x283ad4: 0xc089462
    ctx->pc = 0x283AD4u;
    SET_GPR_U32(ctx, 31, 0x283ADCu);
    ctx->pc = 0x283AD8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 30));
    ctx->pc = 0x225188u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetMaxFPS_0x225188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283ADCu; }
    }
    if (ctx->pc != 0x283ADCu) { return; }
    ctx->pc = 0x283ADCu;
    // 0x283adc: 0x3c02003c
    ctx->pc = 0x283adcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x283ae0: 0xac403b48
    ctx->pc = 0x283ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15176), GPR_U32(ctx, 0));
    // 0x283ae4: 0x3c060035
    ctx->pc = 0x283ae4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)53 << 16));
    // 0x283ae8: 0x3c050035
    ctx->pc = 0x283ae8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)53 << 16));
    // 0x283aec: 0x3c040035
    ctx->pc = 0x283aecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x283af0: 0x3c030035
    ctx->pc = 0x283af0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x283af4: 0x2402ffff
    ctx->pc = 0x283af4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x283af8: 0xac629ba8
    ctx->pc = 0x283af8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941608), GPR_U32(ctx, 2));
    // 0x283afc: 0xac829bb0
    ctx->pc = 0x283afcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294941616), GPR_U32(ctx, 2));
    // 0x283b00: 0xaca29bb4
    ctx->pc = 0x283b00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294941620), GPR_U32(ctx, 2));
    // 0x283b04: 0xacc29bac
    ctx->pc = 0x283b04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294941612), GPR_U32(ctx, 2));
    // 0x283b08: 0x34048000
    ctx->pc = 0x283b08u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32768));
    // 0x283b0c: 0xc0a0896
    ctx->pc = 0x283B0Cu;
    SET_GPR_U32(ctx, 31, 0x283B14u);
    ctx->pc = 0x283B10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x282258u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_attract_mode_0x282258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283B14u; }
    }
    if (ctx->pc != 0x283B14u) { return; }
    ctx->pc = 0x283B14u;
    // 0x283b14: 0x3c04003b
    ctx->pc = 0x283b14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x283b18: 0x2484c480
    ctx->pc = 0x283b18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952064));
    // 0x283b1c: 0x3c05003a
    ctx->pc = 0x283b1cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x283b20: 0x24a52550
    ctx->pc = 0x283b20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9552));
    // 0x283b24: 0x302d
    ctx->pc = 0x283b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283b28: 0xc0b1b04
    ctx->pc = 0x283B28u;
    SET_GPR_U32(ctx, 31, 0x283B30u);
    ctx->pc = 0x283B2Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewObject_0x2c6c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283B30u; }
    }
    if (ctx->pc != 0x283B30u) { return; }
    ctx->pc = 0x283B30u;
    // 0x283b30: 0xc098f70
    ctx->pc = 0x283B30u;
    SET_GPR_U32(ctx, 31, 0x283B38u);
    ctx->pc = 0x283B34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x263DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadGauntWorldStart_0x263dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283B38u; }
    }
    if (ctx->pc != 0x283B38u) { return; }
    ctx->pc = 0x283B38u;
    // 0x283b38: 0x3c10003b
    ctx->pc = 0x283b38u;
    SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
    // 0x283b3c: 0x2604c6c8
    ctx->pc = 0x283b3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294952648));
    // 0x283b40: 0x282d
    ctx->pc = 0x283b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283b44: 0x24060001
    ctx->pc = 0x283b44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x283b48: 0xc080d22
    ctx->pc = 0x283B48u;
    SET_GPR_U32(ctx, 31, 0x283B50u);
    ctx->pc = 0x283B4Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x203488u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadModel_0x203488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283B50u; }
    }
    if (ctx->pc != 0x283B50u) { return; }
    ctx->pc = 0x283B50u;
    // 0x283b50: 0x3c03003c
    ctx->pc = 0x283b50u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x283b54: 0xac623b44
    ctx->pc = 0x283b54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15172), GPR_U32(ctx, 2));
    // 0x283b58: 0x2604c6c8
    ctx->pc = 0x283b58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294952648));
    // 0x283b5c: 0xc0803c4
    ctx->pc = 0x283B5Cu;
    SET_GPR_U32(ctx, 31, 0x283B64u);
    ctx->pc = 0x283B60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x200F10u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontInitSpecial_0x200f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283B64u; }
    }
    if (ctx->pc != 0x283B64u) { return; }
    ctx->pc = 0x283B64u;
    // 0x283b64: 0xc09710c
    ctx->pc = 0x283B64u;
    SET_GPR_U32(ctx, 31, 0x283B6Cu);
    ctx->pc = 0x283B68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25C430u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStopAll_0x25c430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283B6Cu; }
    }
    if (ctx->pc != 0x283B6Cu) { return; }
    ctx->pc = 0x283B6Cu;
    // 0x283b6c: 0x3c020035
    ctx->pc = 0x283b6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x283b70: 0xac40a2d8
    ctx->pc = 0x283b70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943448), GPR_U32(ctx, 0));
    // 0x283b74: 0x3c14003b
    ctx->pc = 0x283b74u;
    SET_GPR_U32(ctx, 20, ((uint32_t)59 << 16));
    // 0x283b78: 0x3c020035
    ctx->pc = 0x283b78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x283b7c: 0x24539ca0
    ctx->pc = 0x283b7cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294941856));
    // 0x283b80: 0x3c020035
    ctx->pc = 0x283b80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x283b84: 0x24529ca4
    ctx->pc = 0x283b84u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294941860));
    // 0x283b88: 0x3c02003c
    ctx->pc = 0x283b88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x283b8c: 0x24513ad8
    ctx->pc = 0x283b8cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 15064));
    // 0x283b90: 0x3a0202d
    ctx->pc = 0x283b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283b94: 0x0
    ctx->pc = 0x283b94u;
    // NOP
label_283b98:
    // 0x283b98: 0x2685c6d0
    ctx->pc = 0x283b98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 20), 4294952656));
    // 0x283b9c: 0xc0b6252
    ctx->pc = 0x283B9Cu;
    SET_GPR_U32(ctx, 31, 0x283BA4u);
    ctx->pc = 0x283BA0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283BA4u; }
    }
    if (ctx->pc != 0x283BA4u) { return; }
    ctx->pc = 0x283BA4u;
    // 0x283ba4: 0x1010c0
    ctx->pc = 0x283ba4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 3));
    // 0x283ba8: 0x531821
    ctx->pc = 0x283ba8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x283bac: 0x521021
    ctx->pc = 0x283bacu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x283bb0: 0x3a0202d
    ctx->pc = 0x283bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283bb4: 0x8c650000
    ctx->pc = 0x283bb4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x283bb8: 0xc0b0c08
    ctx->pc = 0x283BB8u;
    SET_GPR_U32(ctx, 31, 0x283BC0u);
    ctx->pc = 0x283BBCu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283BC0u; }
    }
    if (ctx->pc != 0x283BC0u) { return; }
    ctx->pc = 0x283BC0u;
    // 0x283bc0: 0x101880
    ctx->pc = 0x283bc0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x283bc4: 0x711821
    ctx->pc = 0x283bc4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x283bc8: 0xac620000
    ctx->pc = 0x283bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x283bcc: 0x26100001
    ctx->pc = 0x283bccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x283bd0: 0x2a020004
    ctx->pc = 0x283bd0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x283bd4: 0x1440fff0
    ctx->pc = 0x283BD4u;
    {
        const bool branch_taken_0x283bd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x283BD8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x283bd4) {
            ctx->pc = 0x283B98u;
            goto label_283b98;
        }
    }
    ctx->pc = 0x283BDCu;
    // 0x283bdc: 0x3c04003b
    ctx->pc = 0x283bdcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x283be0: 0x2484c6e0
    ctx->pc = 0x283be0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952672));
    // 0x283be4: 0xc09744c
    ctx->pc = 0x283BE4u;
    SET_GPR_U32(ctx, 31, 0x283BECu);
    ctx->pc = 0x283BE8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x25D130u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStreamStart_0x25d130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283BECu; }
    }
    if (ctx->pc != 0x283BECu) { return; }
    ctx->pc = 0x283BECu;
    // 0x283bec: 0xc089994
    ctx->pc = 0x283BECu;
    SET_GPR_U32(ctx, 31, 0x283BF4u);
    ctx->pc = 0x226650u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMBMem_0x226650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283BF4u; }
    }
    if (ctx->pc != 0x283BF4u) { return; }
    ctx->pc = 0x283BF4u;
    // 0x283bf4: 0xdfbf0070
    ctx->pc = 0x283bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x283bf8: 0xdfb40060
    ctx->pc = 0x283bf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x283bfc: 0xdfb30050
    ctx->pc = 0x283bfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x283c00: 0xdfb20040
    ctx->pc = 0x283c00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x283c04: 0xdfb10030
    ctx->pc = 0x283c04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283c08: 0xdfb00020
    ctx->pc = 0x283c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283c0c: 0x3e00008
    ctx->pc = 0x283C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283C10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x283B98u: goto label_283b98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x283C14u;
}
