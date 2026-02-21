#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setupMatrices
// Address: 0x2abdd8 - 0x2abf40
void setupMatrices_0x2abdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2abdd8u;

    // 0x2abdd8: 0x27bdffb0
    ctx->pc = 0x2abdd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2abddc: 0xffbf0040
    ctx->pc = 0x2abddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2abde0: 0xffb30030
    ctx->pc = 0x2abde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2abde4: 0xffb20020
    ctx->pc = 0x2abde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2abde8: 0xffb10010
    ctx->pc = 0x2abde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2abdec: 0xffb00000
    ctx->pc = 0x2abdecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2abdf0: 0x80882d
    ctx->pc = 0x2abdf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abdf4: 0xa0902d
    ctx->pc = 0x2abdf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abdf8: 0xc0982d
    ctx->pc = 0x2abdf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abdfc: 0x3c020036
    ctx->pc = 0x2abdfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2abe00: 0xc0aaf5e
    ctx->pc = 0x2ABE00u;
    SET_GPR_U32(ctx, 31, 0x2ABE08u);
    ctx->pc = 0x2ABE04u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    ctx->pc = 0x2ABD78u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcMatrices_0x2abd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABE08u; }
    }
    if (ctx->pc != 0x2ABE08u) { return; }
    ctx->pc = 0x2ABE08u;
    // 0x2abe08: 0x8e050004
    ctx->pc = 0x2abe08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2abe0c: 0x26240060
    ctx->pc = 0x2abe0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 96));
    // 0x2abe10: 0xc0b958e
    ctx->pc = 0x2ABE10u;
    SET_GPR_U32(ctx, 31, 0x2ABE18u);
    ctx->pc = 0x2ABE14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 864));
    ctx->pc = 0x2E5638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x2e5638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABE18u; }
    }
    if (ctx->pc != 0x2ABE18u) { return; }
    ctx->pc = 0x2ABE18u;
    // 0x2abe18: 0x8e050004
    ctx->pc = 0x2abe18u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2abe1c: 0x26440050
    ctx->pc = 0x2abe1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 80));
    // 0x2abe20: 0xc0b958e
    ctx->pc = 0x2ABE20u;
    SET_GPR_U32(ctx, 31, 0x2ABE28u);
    ctx->pc = 0x2ABE24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 864));
    ctx->pc = 0x2E5638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x2e5638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABE28u; }
    }
    if (ctx->pc != 0x2ABE28u) { return; }
    ctx->pc = 0x2ABE28u;
    // 0x2abe28: 0x26640050
    ctx->pc = 0x2abe28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 80));
    // 0x2abe2c: 0x3c050037
    ctx->pc = 0x2abe2cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)55 << 16));
    // 0x2abe30: 0xc0b958e
    ctx->pc = 0x2ABE30u;
    SET_GPR_U32(ctx, 31, 0x2ABE38u);
    ctx->pc = 0x2ABE34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294935600));
    ctx->pc = 0x2E5638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x2e5638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABE38u; }
    }
    if (ctx->pc != 0x2ABE38u) { return; }
    ctx->pc = 0x2ABE38u;
    // 0x2abe38: 0x8e050004
    ctx->pc = 0x2abe38u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2abe3c: 0x26240070
    ctx->pc = 0x2abe3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 112));
    // 0x2abe40: 0xc0b958e
    ctx->pc = 0x2ABE40u;
    SET_GPR_U32(ctx, 31, 0x2ABE48u);
    ctx->pc = 0x2ABE44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 880));
    ctx->pc = 0x2E5638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x2e5638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABE48u; }
    }
    if (ctx->pc != 0x2ABE48u) { return; }
    ctx->pc = 0x2ABE48u;
    // 0x2abe48: 0x8e050004
    ctx->pc = 0x2abe48u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2abe4c: 0x26440060
    ctx->pc = 0x2abe4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 96));
    // 0x2abe50: 0xc0b958e
    ctx->pc = 0x2ABE50u;
    SET_GPR_U32(ctx, 31, 0x2ABE58u);
    ctx->pc = 0x2ABE54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 880));
    ctx->pc = 0x2E5638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x2e5638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABE58u; }
    }
    if (ctx->pc != 0x2ABE58u) { return; }
    ctx->pc = 0x2ABE58u;
    // 0x2abe58: 0x8e050004
    ctx->pc = 0x2abe58u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2abe5c: 0x26640060
    ctx->pc = 0x2abe5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 96));
    // 0x2abe60: 0xc0b958e
    ctx->pc = 0x2ABE60u;
    SET_GPR_U32(ctx, 31, 0x2ABE68u);
    ctx->pc = 0x2ABE64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 880));
    ctx->pc = 0x2E5638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x2e5638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABE68u; }
    }
    if (ctx->pc != 0x2ABE68u) { return; }
    ctx->pc = 0x2ABE68u;
    // 0x2abe68: 0x8e050004
    ctx->pc = 0x2abe68u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2abe6c: 0x26240080
    ctx->pc = 0x2abe6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 128));
    // 0x2abe70: 0xc0b958e
    ctx->pc = 0x2ABE70u;
    SET_GPR_U32(ctx, 31, 0x2ABE78u);
    ctx->pc = 0x2ABE74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 896));
    ctx->pc = 0x2E5638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x2e5638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABE78u; }
    }
    if (ctx->pc != 0x2ABE78u) { return; }
    ctx->pc = 0x2ABE78u;
    // 0x2abe78: 0x8e050004
    ctx->pc = 0x2abe78u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2abe7c: 0x26440070
    ctx->pc = 0x2abe7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 112));
    // 0x2abe80: 0xc0b958e
    ctx->pc = 0x2ABE80u;
    SET_GPR_U32(ctx, 31, 0x2ABE88u);
    ctx->pc = 0x2ABE84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 896));
    ctx->pc = 0x2E5638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x2e5638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABE88u; }
    }
    if (ctx->pc != 0x2ABE88u) { return; }
    ctx->pc = 0x2ABE88u;
    // 0x2abe88: 0x8e050004
    ctx->pc = 0x2abe88u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2abe8c: 0x26640070
    ctx->pc = 0x2abe8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 112));
    // 0x2abe90: 0xc0b958e
    ctx->pc = 0x2ABE90u;
    SET_GPR_U32(ctx, 31, 0x2ABE98u);
    ctx->pc = 0x2ABE94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 896));
    ctx->pc = 0x2E5638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x2e5638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABE98u; }
    }
    if (ctx->pc != 0x2ABE98u) { return; }
    ctx->pc = 0x2ABE98u;
    // 0x2abe98: 0x8e050004
    ctx->pc = 0x2abe98u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2abe9c: 0x26240090
    ctx->pc = 0x2abe9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 144));
    // 0x2abea0: 0xc0b958e
    ctx->pc = 0x2ABEA0u;
    SET_GPR_U32(ctx, 31, 0x2ABEA8u);
    ctx->pc = 0x2ABEA4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 912));
    ctx->pc = 0x2E5638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x2e5638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABEA8u; }
    }
    if (ctx->pc != 0x2ABEA8u) { return; }
    ctx->pc = 0x2ABEA8u;
    // 0x2abea8: 0x8e050004
    ctx->pc = 0x2abea8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2abeac: 0x26440080
    ctx->pc = 0x2abeacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 128));
    // 0x2abeb0: 0xc0b958e
    ctx->pc = 0x2ABEB0u;
    SET_GPR_U32(ctx, 31, 0x2ABEB8u);
    ctx->pc = 0x2ABEB4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 912));
    ctx->pc = 0x2E5638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x2e5638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABEB8u; }
    }
    if (ctx->pc != 0x2ABEB8u) { return; }
    ctx->pc = 0x2ABEB8u;
    // 0x2abeb8: 0x8e050004
    ctx->pc = 0x2abeb8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2abebc: 0x26640080
    ctx->pc = 0x2abebcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 128));
    // 0x2abec0: 0xc0b958e
    ctx->pc = 0x2ABEC0u;
    SET_GPR_U32(ctx, 31, 0x2ABEC8u);
    ctx->pc = 0x2ABEC4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 880));
    ctx->pc = 0x2E5638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x2e5638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABEC8u; }
    }
    if (ctx->pc != 0x2ABEC8u) { return; }
    ctx->pc = 0x2ABEC8u;
    // 0x2abec8: 0x8e050004
    ctx->pc = 0x2abec8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2abecc: 0x262400a0
    ctx->pc = 0x2abeccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 160));
    // 0x2abed0: 0xc0b958e
    ctx->pc = 0x2ABED0u;
    SET_GPR_U32(ctx, 31, 0x2ABED8u);
    ctx->pc = 0x2ABED4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 928));
    ctx->pc = 0x2E5638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x2e5638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABED8u; }
    }
    if (ctx->pc != 0x2ABED8u) { return; }
    ctx->pc = 0x2ABED8u;
    // 0x2abed8: 0x8e050004
    ctx->pc = 0x2abed8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2abedc: 0x26440090
    ctx->pc = 0x2abedcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 144));
    // 0x2abee0: 0xc0b958e
    ctx->pc = 0x2ABEE0u;
    SET_GPR_U32(ctx, 31, 0x2ABEE8u);
    ctx->pc = 0x2ABEE4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 928));
    ctx->pc = 0x2E5638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x2e5638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABEE8u; }
    }
    if (ctx->pc != 0x2ABEE8u) { return; }
    ctx->pc = 0x2ABEE8u;
    // 0x2abee8: 0x8e050004
    ctx->pc = 0x2abee8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2abeec: 0x26640090
    ctx->pc = 0x2abeecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 144));
    // 0x2abef0: 0xc0b958e
    ctx->pc = 0x2ABEF0u;
    SET_GPR_U32(ctx, 31, 0x2ABEF8u);
    ctx->pc = 0x2ABEF4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 896));
    ctx->pc = 0x2E5638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x2e5638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABEF8u; }
    }
    if (ctx->pc != 0x2ABEF8u) { return; }
    ctx->pc = 0x2ABEF8u;
    // 0x2abef8: 0x8e050004
    ctx->pc = 0x2abef8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2abefc: 0x26240020
    ctx->pc = 0x2abefcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 32));
    // 0x2abf00: 0xc0b9592
    ctx->pc = 0x2ABF00u;
    SET_GPR_U32(ctx, 31, 0x2ABF08u);
    ctx->pc = 0x2ABF04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 784));
    ctx->pc = 0x2E5648u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x2e5648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABF08u; }
    }
    if (ctx->pc != 0x2ABF08u) { return; }
    ctx->pc = 0x2ABF08u;
    // 0x2abf08: 0x8e050004
    ctx->pc = 0x2abf08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2abf0c: 0x26440010
    ctx->pc = 0x2abf0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 16));
    // 0x2abf10: 0xc0b9592
    ctx->pc = 0x2ABF10u;
    SET_GPR_U32(ctx, 31, 0x2ABF18u);
    ctx->pc = 0x2ABF14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 784));
    ctx->pc = 0x2E5648u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x2e5648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABF18u; }
    }
    if (ctx->pc != 0x2ABF18u) { return; }
    ctx->pc = 0x2ABF18u;
    // 0x2abf18: 0x8e050004
    ctx->pc = 0x2abf18u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2abf1c: 0x26640010
    ctx->pc = 0x2abf1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 16));
    // 0x2abf20: 0x24a50290
    ctx->pc = 0x2abf20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 656));
    // 0x2abf24: 0xdfbf0040
    ctx->pc = 0x2abf24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2abf28: 0xdfb30030
    ctx->pc = 0x2abf28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2abf2c: 0xdfb20020
    ctx->pc = 0x2abf2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2abf30: 0xdfb10010
    ctx->pc = 0x2abf30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2abf34: 0xdfb00000
    ctx->pc = 0x2abf34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2abf38: 0x80b9592
    ctx->pc = 0x2ABF38u;
    ctx->pc = 0x2ABF3Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x2E5648u;
    sceVu0CopyMatrix_0x2e5648(rdram, ctx, runtime); return;
    ctx->pc = 0x2ABF40u;
}
