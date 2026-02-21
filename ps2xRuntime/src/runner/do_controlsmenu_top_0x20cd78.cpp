#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_controlsmenu_top
// Address: 0x20cd78 - 0x20ce9c
void do_controlsmenu_top_0x20cd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20cd78u;

    // 0x20cd78: 0x27bdff90
    ctx->pc = 0x20cd78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20cd7c: 0xffbf0050
    ctx->pc = 0x20cd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x20cd80: 0xffb40040
    ctx->pc = 0x20cd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x20cd84: 0xffb30030
    ctx->pc = 0x20cd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x20cd88: 0xffb20020
    ctx->pc = 0x20cd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20cd8c: 0xffb10010
    ctx->pc = 0x20cd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20cd90: 0xffb00000
    ctx->pc = 0x20cd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20cd94: 0xe7b40060
    ctx->pc = 0x20cd94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x20cd98: 0x80882d
    ctx->pc = 0x20cd98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cd9c: 0x4a00036
    ctx->pc = 0x20CD9Cu;
    {
        const bool branch_taken_0x20cd9c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x20CDA0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20cd9c) {
            ctx->pc = 0x20CE78u;
            goto label_20ce78;
        }
    }
    ctx->pc = 0x20CDA4u;
    // 0x20cda4: 0x3c020032
    ctx->pc = 0x20cda4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20cda8: 0x2443d3f0
    ctx->pc = 0x20cda8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294956016));
    // 0x20cdac: 0x9050d3f0
    ctx->pc = 0x20cdacu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294956016)));
    // 0x20cdb0: 0x108400
    ctx->pc = 0x20cdb0u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 16));
    // 0x20cdb4: 0x90620004
    ctx->pc = 0x20cdb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x20cdb8: 0x21200
    ctx->pc = 0x20cdb8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x20cdbc: 0x2028025
    ctx->pc = 0x20cdbcu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20cdc0: 0x90620008
    ctx->pc = 0x20cdc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x20cdc4: 0x2028025
    ctx->pc = 0x20cdc4u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20cdc8: 0xc6210034
    ctx->pc = 0x20cdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cdcc: 0x3c013f4c
    ctx->pc = 0x20cdccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16204 << 16));
    // 0x20cdd0: 0x3421cccd
    ctx->pc = 0x20cdd0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x20cdd4: 0x44810000
    ctx->pc = 0x20cdd4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x20cdd8: 0x46000d02
    ctx->pc = 0x20cdd8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20cddc: 0x3c04003a
    ctx->pc = 0x20cddcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x20cde0: 0x24845360
    ctx->pc = 0x20cde0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21344));
    // 0x20cde4: 0xc0b1bb4
    ctx->pc = 0x20CDE4u;
    SET_GPR_U32(ctx, 31, 0x20CDECu);
    ctx->pc = 0x20CDE8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CDECu; }
    }
    if (ctx->pc != 0x20CDECu) { return; }
    ctx->pc = 0x20CDECu;
    // 0x20cdec: 0x3c020032
    ctx->pc = 0x20cdecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20cdf0: 0xc0b16ba
    ctx->pc = 0x20CDF0u;
    SET_GPR_U32(ctx, 31, 0x20CDF8u);
    ctx->pc = 0x20CDF4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294955884)));
    ctx->pc = 0x2C5AE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBFontHeight_0x2c5ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CDF8u; }
    }
    if (ctx->pc != 0x20CDF8u) { return; }
    ctx->pc = 0x20CDF8u;
    // 0x20cdf8: 0x24140024
    ctx->pc = 0x20cdf8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 36));
    // 0x20cdfc: 0x3c130032
    ctx->pc = 0x20cdfcu;
    SET_GPR_U32(ctx, 19, ((uint32_t)50 << 16));
label_20ce00:
    // 0x20ce00: 0x2541018
    ctx->pc = 0x20ce00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20ce04: 0x8e23001c
    ctx->pc = 0x20ce04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x20ce08: 0x431021
    ctx->pc = 0x20ce08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20ce0c: 0x8c420000
    ctx->pc = 0x20ce0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20ce10: 0x1040000a
    ctx->pc = 0x20CE10u;
    {
        const bool branch_taken_0x20ce10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20ce10) {
            ctx->pc = 0x20CE3Cu;
            goto label_20ce3c;
        }
    }
    ctx->pc = 0x20CE18u;
    // 0x20ce18: 0xc0b145e
    ctx->pc = 0x20CE18u;
    SET_GPR_U32(ctx, 31, 0x20CE20u);
    ctx->pc = 0x20CE1Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 4294955884)));
    ctx->pc = 0x2C5178u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFont_0x2c5178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CE20u; }
    }
    if (ctx->pc != 0x20CE20u) { return; }
    ctx->pc = 0x20CE20u;
    // 0x20ce20: 0xc0b144c
    ctx->pc = 0x20CE20u;
    SET_GPR_U32(ctx, 31, 0x20CE28u);
    ctx->pc = 0x20CE24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5130u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontColor_0x2c5130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CE28u; }
    }
    if (ctx->pc != 0x20CE28u) { return; }
    ctx->pc = 0x20CE28u;
    // 0x20ce28: 0x4600a306
    ctx->pc = 0x20ce28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x20ce2c: 0xc0b1414
    ctx->pc = 0x20CE2Cu;
    SET_GPR_U32(ctx, 31, 0x20CE34u);
    ctx->pc = 0x20CE30u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2C5050u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontScale_0x2c5050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CE34u; }
    }
    if (ctx->pc != 0x20CE34u) { return; }
    ctx->pc = 0x20CE34u;
    // 0x20ce34: 0x1000fff2
    ctx->pc = 0x20CE34u;
    {
        const bool branch_taken_0x20ce34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20CE38u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x20ce34) {
            ctx->pc = 0x20CE00u;
            goto label_20ce00;
        }
    }
    ctx->pc = 0x20CE3Cu;
label_20ce3c:
    // 0x20ce3c: 0x3c04ffff
    ctx->pc = 0x20ce3cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x20ce40: 0xc0b144c
    ctx->pc = 0x20CE40u;
    SET_GPR_U32(ctx, 31, 0x20CE48u);
    ctx->pc = 0x20CE44u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    ctx->pc = 0x2C5130u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontColor_0x2c5130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CE48u; }
    }
    if (ctx->pc != 0x20CE48u) { return; }
    ctx->pc = 0x20CE48u;
    // 0x20ce48: 0x3c013f80
    ctx->pc = 0x20ce48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x20ce4c: 0x44816000
    ctx->pc = 0x20ce4cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x20ce50: 0x46006346
    ctx->pc = 0x20ce50u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x20ce54: 0xdfbf0050
    ctx->pc = 0x20ce54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20ce58: 0xdfb40040
    ctx->pc = 0x20ce58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20ce5c: 0xdfb30030
    ctx->pc = 0x20ce5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20ce60: 0xdfb20020
    ctx->pc = 0x20ce60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ce64: 0xdfb10010
    ctx->pc = 0x20ce64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ce68: 0xdfb00000
    ctx->pc = 0x20ce68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ce6c: 0xc7b40060
    ctx->pc = 0x20ce6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20ce70: 0x80b1414
    ctx->pc = 0x20CE70u;
    ctx->pc = 0x20CE74u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x2C5050u;
    MBSetFontScale_0x2c5050(rdram, ctx, runtime); return;
    ctx->pc = 0x20CE78u;
label_20ce78:
    // 0x20ce78: 0xdfbf0050
    ctx->pc = 0x20ce78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20ce7c: 0xdfb40040
    ctx->pc = 0x20ce7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20ce80: 0xdfb30030
    ctx->pc = 0x20ce80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20ce84: 0xdfb20020
    ctx->pc = 0x20ce84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ce88: 0xdfb10010
    ctx->pc = 0x20ce88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ce8c: 0xdfb00000
    ctx->pc = 0x20ce8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ce90: 0xc7b40060
    ctx->pc = 0x20ce90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20ce94: 0x3e00008
    ctx->pc = 0x20CE94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CE98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20CE00u: goto label_20ce00;
            case 0x20CE3Cu: goto label_20ce3c;
            case 0x20CE78u: goto label_20ce78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20CE9Cu;
}
