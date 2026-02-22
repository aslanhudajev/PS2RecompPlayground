#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: dispCreate
// Address: 0x11aa98 - 0x11ad04
void dispCreate_0x11aa98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11aa98u;

    // 0x11aa98: 0x27bdffb0
    ctx->pc = 0x11aa98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11aa9c: 0xc0502d
    ctx->pc = 0x11aa9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aaa0: 0xffb20030
    ctx->pc = 0x11aaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11aaa4: 0xa0482d
    ctx->pc = 0x11aaa4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aaa8: 0x2546001f
    ctx->pc = 0x11aaa8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 10), 31));
    // 0x11aaac: 0x2412ffff
    ctx->pc = 0x11aaacu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11aab0: 0x246282a
    ctx->pc = 0x11aab0u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 6)));
    // 0x11aab4: 0x2528003f
    ctx->pc = 0x11aab4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 9), 63));
    // 0x11aab8: 0x2542003e
    ctx->pc = 0x11aab8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 10), 62));
    // 0x11aabc: 0x248182a
    ctx->pc = 0x11aabcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 8)));
    // 0x11aac0: 0xc5100b
    ctx->pc = 0x11aac0u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
    // 0x11aac4: 0x2527007e
    ctx->pc = 0x11aac4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 9), 126));
    // 0x11aac8: 0x103380b
    ctx->pc = 0x11aac8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 8));
    // 0x11aacc: 0x21143
    ctx->pc = 0x11aaccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x11aad0: 0x212c0
    ctx->pc = 0x11aad0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
    // 0x11aad4: 0x73983
    ctx->pc = 0x11aad4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 6));
    // 0x11aad8: 0xaf80843c
    ctx->pc = 0x11aad8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935612), GPR_U32(ctx, 0));
    // 0x11aadc: 0xe23818
    ctx->pc = 0x11aadcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)(uint32_t)result); }
    // 0x11aae0: 0xaf808440
    ctx->pc = 0x11aae0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935616), GPR_U32(ctx, 0));
    // 0x11aae4: 0x24030002
    ctx->pc = 0x11aae4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x11aae8: 0xaf808444
    ctx->pc = 0x11aae8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935620), GPR_U32(ctx, 0));
    // 0x11aaec: 0x24060003
    ctx->pc = 0x11aaecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x11aaf0: 0xffb10020
    ctx->pc = 0x11aaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11aaf4: 0x24050001
    ctx->pc = 0x11aaf4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11aaf8: 0xaf808448
    ctx->pc = 0x11aaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935624), GPR_U32(ctx, 0));
    // 0x11aafc: 0x80882d
    ctx->pc = 0x11aafcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab00: 0x8f8284bc
    ctx->pc = 0x11ab00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935740)));
    // 0x11ab04: 0x73ac3
    ctx->pc = 0x11ab04u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 11));
    // 0x11ab08: 0xffbf0040
    ctx->pc = 0x11ab08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11ab0c: 0x202d
    ctx->pc = 0x11ab0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab10: 0xffb00010
    ctx->pc = 0x11ab10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11ab14: 0x62300a
    ctx->pc = 0x11ab14u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
    // 0x11ab18: 0xaf80844c
    ctx->pc = 0x11ab18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935628), GPR_U32(ctx, 0));
    // 0x11ab1c: 0xae27002c
    ctx->pc = 0x11ab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 7));
    // 0x11ab20: 0xae200028
    ctx->pc = 0x11ab20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x11ab24: 0x24070001
    ctx->pc = 0x11ab24u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ab28: 0xae290030
    ctx->pc = 0x11ab28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 9));
    // 0x11ab2c: 0xc04314a
    ctx->pc = 0x11AB2Cu;
    SET_GPR_U32(ctx, 31, 0x11AB34u);
    ctx->pc = 0x11AB30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 10));
    ctx->pc = 0x10C528u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsResetGraph_0x10c528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB34u; }
    }
    if (ctx->pc != 0x11AB34u) { return; }
    ctx->pc = 0x11AB34u;
    // 0x11ab34: 0x8f8384bc
    ctx->pc = 0x11ab34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935740)));
    // 0x11ab38: 0x240200f0
    ctx->pc = 0x11ab38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x11ab3c: 0x24070100
    ctx->pc = 0x11ab3cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 256));
    // 0x11ab40: 0x220202d
    ctx->pc = 0x11ab40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab44: 0x43380a
    ctx->pc = 0x11ab44u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 2));
    // 0x11ab48: 0x282d
    ctx->pc = 0x11ab48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab4c: 0x24060280
    ctx->pc = 0x11ab4cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 640));
    // 0x11ab50: 0x402d
    ctx->pc = 0x11ab50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab54: 0xc0431ac
    ctx->pc = 0x11AB54u;
    SET_GPR_U32(ctx, 31, 0x11AB5Cu);
    ctx->pc = 0x11AB58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10C6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefDispEnv_0x10c6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB5Cu; }
    }
    if (ctx->pc != 0x11AB5Cu) { return; }
    ctx->pc = 0x11AB5Cu;
    // 0x11ab5c: 0x8e230014
    ctx->pc = 0x11ab5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x11ab60: 0x2402f800
    ctx->pc = 0x11ab60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x11ab64: 0x8f8484bc
    ctx->pc = 0x11ab64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935740)));
    // 0x11ab68: 0x621824
    ctx->pc = 0x11ab68u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11ab6c: 0x34630028
    ctx->pc = 0x11ab6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)40);
    // 0x11ab70: 0x14800006
    ctx->pc = 0x11AB70u;
    {
        const bool branch_taken_0x11ab70 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x11AB74u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        if (branch_taken_0x11ab70) {
            ctx->pc = 0x11AB8Cu;
            goto label_11ab8c;
        }
    }
    ctx->pc = 0x11AB78u;
    // 0x11ab78: 0x3c02ffc0
    ctx->pc = 0x11ab78u;
    SET_GPR_S32(ctx, 2, ((uint32_t)65472 << 16));
    // 0x11ab7c: 0x344207ff
    ctx->pc = 0x11ab7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)2047);
    // 0x11ab80: 0x621024
    ctx->pc = 0x11ab80u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11ab84: 0x34428000
    ctx->pc = 0x11ab84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)32768);
    // 0x11ab88: 0xae220014
    ctx->pc = 0x11ab88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_11ab8c:
    // 0x11ab8c: 0x8e220010
    ctx->pc = 0x11ab8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x11ab90: 0x240381ff
    ctx->pc = 0x11ab90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294935039));
    // 0x11ab94: 0x220202d
    ctx->pc = 0x11ab94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab98: 0x431024
    ctx->pc = 0x11ab98u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11ab9c: 0x34421800
    ctx->pc = 0x11ab9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)6144);
    // 0x11aba0: 0xc0499b2
    ctx->pc = 0x11ABA0u;
    SET_GPR_U32(ctx, 31, 0x11ABA8u);
    ctx->pc = 0x11ABA4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x1266C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsPutDispEnv_0x1266c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ABA8u; }
    }
    if (ctx->pc != 0x11ABA8u) { return; }
    ctx->pc = 0x11ABA8u;
    // 0x11aba8: 0xc043192
    ctx->pc = 0x11ABA8u;
    SET_GPR_U32(ctx, 31, 0x11ABB0u);
    ctx->pc = 0x11ABACu;
    SET_GPR_S32(ctx, 16, ((uint32_t)117 << 16));
    ctx->pc = 0x10C648u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsResetPath_0x10c648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ABB0u; }
    }
    if (ctx->pc != 0x11ABB0u) { return; }
    ctx->pc = 0x11ABB0u;
    // 0x11abb0: 0x3c020fff
    ctx->pc = 0x11abb0u;
    SET_GPR_S32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x11abb4: 0x2610d840
    ctx->pc = 0x11abb4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294957120));
    // 0x11abb8: 0x3442ffff
    ctx->pc = 0x11abb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)65535);
    // 0x11abbc: 0x2028024
    ctx->pc = 0x11abbcu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11abc0: 0x3c042000
    ctx->pc = 0x11abc0u;
    SET_GPR_S32(ctx, 4, ((uint32_t)8192 << 16));
    // 0x11abc4: 0x2042025
    ctx->pc = 0x11abc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x11abc8: 0x2405000e
    ctx->pc = 0x11abc8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 14));
    // 0x11abcc: 0x24060001
    ctx->pc = 0x11abccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11abd0: 0x382d
    ctx->pc = 0x11abd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abd4: 0x402d
    ctx->pc = 0x11abd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abd8: 0x482d
    ctx->pc = 0x11abd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abdc: 0x240a0001
    ctx->pc = 0x11abdcu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11abe0: 0xc046d24
    ctx->pc = 0x11ABE0u;
    SET_GPR_U32(ctx, 31, 0x11ABE8u);
    ctx->pc = 0x11ABE4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x11B490u;
    {
        const uint32_t __entryPc = ctx->pc;
        setGIFtag_0x11b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ABE8u; }
    }
    if (ctx->pc != 0x11ABE8u) { return; }
    ctx->pc = 0x11ABE8u;
    // 0x11abe8: 0x40202d
    ctx->pc = 0x11abe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abec: 0xc046e2c
    ctx->pc = 0x11ABECu;
    SET_GPR_U32(ctx, 31, 0x11ABF4u);
    ctx->pc = 0x11ABF0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x11B8B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setPRMODECONT_0x11b8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ABF4u; }
    }
    if (ctx->pc != 0x11ABF4u) { return; }
    ctx->pc = 0x11ABF4u;
    // 0x11abf4: 0x8e260030
    ctx->pc = 0x11abf4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x11abf8: 0x40202d
    ctx->pc = 0x11abf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abfc: 0x282d
    ctx->pc = 0x11abfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac00: 0x382d
    ctx->pc = 0x11ac00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac04: 0x24c3003f
    ctx->pc = 0x11ac04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 63));
    // 0x11ac08: 0x402d
    ctx->pc = 0x11ac08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac0c: 0x243102a
    ctx->pc = 0x11ac0cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 3)));
    // 0x11ac10: 0x24c6007e
    ctx->pc = 0x11ac10u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 126));
    // 0x11ac14: 0x62300b
    ctx->pc = 0x11ac14u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
    // 0x11ac18: 0xc046de0
    ctx->pc = 0x11AC18u;
    SET_GPR_U32(ctx, 31, 0x11AC20u);
    ctx->pc = 0x11AC1Cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    ctx->pc = 0x11B780u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFRAME_1_0x11b780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AC20u; }
    }
    if (ctx->pc != 0x11AC20u) { return; }
    ctx->pc = 0x11AC20u;
    // 0x11ac20: 0x40202d
    ctx->pc = 0x11ac20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac24: 0xafa00000
    ctx->pc = 0x11ac24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11ac28: 0x282d
    ctx->pc = 0x11ac28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac2c: 0x302d
    ctx->pc = 0x11ac2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac30: 0x382d
    ctx->pc = 0x11ac30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac34: 0x402d
    ctx->pc = 0x11ac34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac38: 0x482d
    ctx->pc = 0x11ac38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac3c: 0x502d
    ctx->pc = 0x11ac3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac40: 0xc046df2
    ctx->pc = 0x11AC40u;
    SET_GPR_U32(ctx, 31, 0x11AC48u);
    ctx->pc = 0x11AC44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11B7C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setTEST_1_0x11b7c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AC48u; }
    }
    if (ctx->pc != 0x11AC48u) { return; }
    ctx->pc = 0x11AC48u;
    // 0x11ac48: 0x8e230034
    ctx->pc = 0x11ac48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x11ac4c: 0x40202d
    ctx->pc = 0x11ac4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac50: 0x8e260030
    ctx->pc = 0x11ac50u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x11ac54: 0x282d
    ctx->pc = 0x11ac54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac58: 0x2469001f
    ctx->pc = 0x11ac58u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 3), 31));
    // 0x11ac5c: 0x2468003e
    ctx->pc = 0x11ac5cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 3), 62));
    // 0x11ac60: 0x249382a
    ctx->pc = 0x11ac60u;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 9)));
    // 0x11ac64: 0x31040
    ctx->pc = 0x11ac64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x11ac68: 0x127400b
    ctx->pc = 0x11ac68u;
    if (GPR_U32(ctx, 7) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 9));
    // 0x11ac6c: 0x431021
    ctx->pc = 0x11ac6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11ac70: 0x84143
    ctx->pc = 0x11ac70u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 5));
    // 0x11ac74: 0x24c6ffff
    ctx->pc = 0x11ac74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11ac78: 0x84180
    ctx->pc = 0x11ac78u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 6));
    // 0x11ac7c: 0x382d
    ctx->pc = 0x11ac7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac80: 0xc046e10
    ctx->pc = 0x11AC80u;
    SET_GPR_U32(ctx, 31, 0x11AC88u);
    ctx->pc = 0x11AC84u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    ctx->pc = 0x11B840u;
    {
        const uint32_t __entryPc = ctx->pc;
        setSCISSOR_1_0x11b840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AC88u; }
    }
    if (ctx->pc != 0x11AC88u) { return; }
    ctx->pc = 0x11AC88u;
    // 0x11ac88: 0x40202d
    ctx->pc = 0x11ac88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac8c: 0x282d
    ctx->pc = 0x11ac8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac90: 0xc046e20
    ctx->pc = 0x11AC90u;
    SET_GPR_U32(ctx, 31, 0x11AC98u);
    ctx->pc = 0x11AC94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11B880u;
    {
        const uint32_t __entryPc = ctx->pc;
        setXYOFFSET_1_0x11b880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AC98u; }
    }
    if (ctx->pc != 0x11AC98u) { return; }
    ctx->pc = 0x11AC98u;
    // 0x11ac98: 0x40202d
    ctx->pc = 0x11ac98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac9c: 0x24050001
    ctx->pc = 0x11ac9cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11aca0: 0x24060001
    ctx->pc = 0x11aca0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11aca4: 0x382d
    ctx->pc = 0x11aca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aca8: 0x402d
    ctx->pc = 0x11aca8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11acac: 0x482d
    ctx->pc = 0x11acacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11acb0: 0xc046e54
    ctx->pc = 0x11ACB0u;
    SET_GPR_U32(ctx, 31, 0x11ACB8u);
    ctx->pc = 0x11ACB4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11B950u;
    {
        const uint32_t __entryPc = ctx->pc;
        setCLAMP_1_0x11b950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ACB8u; }
    }
    if (ctx->pc != 0x11ACB8u) { return; }
    ctx->pc = 0x11ACB8u;
    // 0x11acb8: 0x3c031000
    ctx->pc = 0x11acb8u;
    SET_GPR_S32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x11acbc: 0x3c041000
    ctx->pc = 0x11acbcu;
    SET_GPR_S32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x11acc0: 0x3463a010
    ctx->pc = 0x11acc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)40976);
    // 0x11acc4: 0x3484a020
    ctx->pc = 0x11acc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)40992);
    // 0x11acc8: 0xac700000
    ctx->pc = 0x11acc8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x11accc: 0x24050007
    ctx->pc = 0x11acccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x11acd0: 0x3c021000
    ctx->pc = 0x11acd0u;
    SET_GPR_S32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x11acd4: 0xac850000
    ctx->pc = 0x11acd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x11acd8: 0x3442a000
    ctx->pc = 0x11acd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)40960);
    // 0x11acdc: 0x24030101
    ctx->pc = 0x11acdcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 257));
    // 0x11ace0: 0xdfbf0040
    ctx->pc = 0x11ace0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11ace4: 0x202d
    ctx->pc = 0x11ace4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ace8: 0xdfb20030
    ctx->pc = 0x11ace8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11acec: 0x282d
    ctx->pc = 0x11acecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11acf0: 0xdfb10020
    ctx->pc = 0x11acf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11acf4: 0xdfb00010
    ctx->pc = 0x11acf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11acf8: 0xac430000
    ctx->pc = 0x11acf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11acfc: 0x8043322
    ctx->pc = 0x11ACFCu;
    ctx->pc = 0x11AD00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x10CC88u;
    sceGsSyncPath_0x10cc88(rdram, ctx, runtime); return;
    ctx->pc = 0x11AD04u;
}
