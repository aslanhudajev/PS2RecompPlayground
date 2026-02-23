#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyInitSfdFx
// Address: 0x18dd98 - 0x18df08
void mwPlyInitSfdFx_0x18dd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyInitSfdFx");
    ctx->pc = 0x18dd98u;

    // 0x18dd98: 0x27bdffc0
    ctx->pc = 0x18dd98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18dd9c: 0x3c020024
    ctx->pc = 0x18dd9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18dda0: 0xffb00000
    ctx->pc = 0x18dda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18dda4: 0x80802d
    ctx->pc = 0x18dda4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dda8: 0xffbf0030
    ctx->pc = 0x18dda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18ddac: 0xffb20020
    ctx->pc = 0x18ddacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x18ddb0: 0xffb10010
    ctx->pc = 0x18ddb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18ddb4: 0xc063d90
    ctx->pc = 0x18DDB4u;
    SET_GPR_U32(ctx, 31, 0x18DDBCu);
    ctx->pc = 0x18DDB8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 15208)));
    ctx->pc = 0x18F640u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Init_0x18f640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DDBCu; }
        else if (ctx->pc != 0x18DDBCu) { ctx->pc = 0x18DDBCu; }
    }
    if (ctx->pc != 0x18DDBCu) { return; }
    ctx->pc = 0x18DDBCu;
    // 0x18ddbc: 0x8e020008
    ctx->pc = 0x18ddbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18ddc0: 0x2442fffe
    ctx->pc = 0x18ddc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x18ddc4: 0x4410002
    ctx->pc = 0x18DDC4u;
    {
        const bool branch_taken_0x18ddc4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x18DDC8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x18ddc4) {
            ctx->pc = 0x18DDD0u;
            goto label_18ddd0;
        }
    }
    ctx->pc = 0x18DDCCu;
    // 0x18ddcc: 0xae000008
    ctx->pc = 0x18ddccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_18ddd0:
    // 0x18ddd0: 0x3c110024
    ctx->pc = 0x18ddd0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)36 << 16));
    // 0x18ddd4: 0x8e223b6c
    ctx->pc = 0x18ddd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 15212)));
    // 0x18ddd8: 0x14400044
    ctx->pc = 0x18DDD8u;
    {
        const bool branch_taken_0x18ddd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18DDDCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x18ddd8) {
            ctx->pc = 0x18DEECu;
            goto label_18deec;
        }
    }
    ctx->pc = 0x18DDE0u;
    // 0x18dde0: 0xc05b128
    ctx->pc = 0x18DDE0u;
    SET_GPR_U32(ctx, 31, 0x18DDE8u);
    ctx->pc = 0x16C4A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Init_0x16c4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DDE8u; }
        else if (ctx->pc != 0x18DDE8u) { ctx->pc = 0x18DDE8u; }
    }
    if (ctx->pc != 0x18DDE8u) { return; }
    ctx->pc = 0x18DDE8u;
    // 0x18dde8: 0xc05f10c
    ctx->pc = 0x18DDE8u;
    SET_GPR_U32(ctx, 31, 0x18DDF0u);
    ctx->pc = 0x17C430u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJRBF_Init_0x17c430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DDF0u; }
        else if (ctx->pc != 0x18DDF0u) { ctx->pc = 0x18DDF0u; }
    }
    if (ctx->pc != 0x18DDF0u) { return; }
    ctx->pc = 0x18DDF0u;
    // 0x18ddf0: 0xc05efd0
    ctx->pc = 0x18DDF0u;
    SET_GPR_U32(ctx, 31, 0x18DDF8u);
    ctx->pc = 0x17BF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJMEM_Init_0x17bf40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DDF8u; }
        else if (ctx->pc != 0x18DDF8u) { ctx->pc = 0x18DDF8u; }
    }
    if (ctx->pc != 0x18DDF8u) { return; }
    ctx->pc = 0x18DDF8u;
    // 0x18ddf8: 0xc05f2ca
    ctx->pc = 0x18DDF8u;
    SET_GPR_U32(ctx, 31, 0x18DE00u);
    ctx->pc = 0x17CB28u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJUNI_Init_0x17cb28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE00u; }
        else if (ctx->pc != 0x18DE00u) { ctx->pc = 0x18DE00u; }
    }
    if (ctx->pc != 0x18DE00u) { return; }
    ctx->pc = 0x18DE00u;
    // 0x18de00: 0xc063e02
    ctx->pc = 0x18DE00u;
    SET_GPR_U32(ctx, 31, 0x18DE08u);
    ctx->pc = 0x18F808u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSTM_InitStatic_0x18f808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE08u; }
        else if (ctx->pc != 0x18DE08u) { ctx->pc = 0x18DE08u; }
    }
    if (ctx->pc != 0x18DE08u) { return; }
    ctx->pc = 0x18DE08u;
    // 0x18de08: 0x10400006
    ctx->pc = 0x18DE08u;
    {
        const bool branch_taken_0x18de08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x18de08) {
            ctx->pc = 0x18DE24u;
            goto label_18de24;
        }
    }
    ctx->pc = 0x18DE10u;
    // 0x18de10: 0xc0633b4
    ctx->pc = 0x18DE10u;
    SET_GPR_U32(ctx, 31, 0x18DE18u);
    ctx->pc = 0x18DE14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967195));
    ctx->pc = 0x18CED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdSetErrCode_0x18ced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE18u; }
        else if (ctx->pc != 0x18DE18u) { ctx->pc = 0x18DE18u; }
    }
    if (ctx->pc != 0x18DE18u) { return; }
    ctx->pc = 0x18DE18u;
    // 0x18de18: 0x3c04002c
    ctx->pc = 0x18de18u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18de1c: 0xc063dda
    ctx->pc = 0x18DE1Cu;
    SET_GPR_U32(ctx, 31, 0x18DE24u);
    ctx->pc = 0x18DE20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954880));
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE24u; }
        else if (ctx->pc != 0x18DE24u) { ctx->pc = 0x18DE24u; }
    }
    if (ctx->pc != 0x18DE24u) { return; }
    ctx->pc = 0x18DE24u;
label_18de24:
    // 0x18de24: 0xc063188
    ctx->pc = 0x18DE24u;
    SET_GPR_U32(ctx, 31, 0x18DE2Cu);
    ctx->pc = 0x18C620u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyLock_0x18c620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE2Cu; }
        else if (ctx->pc != 0x18DE2Cu) { ctx->pc = 0x18DE2Cu; }
    }
    if (ctx->pc != 0x18DE2Cu) { return; }
    ctx->pc = 0x18DE2Cu;
    // 0x18de2c: 0x40902d
    ctx->pc = 0x18de2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de30: 0xc0637c2
    ctx->pc = 0x18DE30u;
    SET_GPR_U32(ctx, 31, 0x18DE38u);
    ctx->pc = 0x18DE34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18DF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwsfd_InitLibWork_0x18df08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE38u; }
        else if (ctx->pc != 0x18DE38u) { ctx->pc = 0x18DE38u; }
    }
    if (ctx->pc != 0x18DE38u) { return; }
    ctx->pc = 0x18DE38u;
    // 0x18de38: 0x3c01447a
    ctx->pc = 0x18de38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17530 << 16));
    // 0x18de3c: 0x44810800
    ctx->pc = 0x18de3cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x18de40: 0x3c020024
    ctx->pc = 0x18de40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18de44: 0xc6000000
    ctx->pc = 0x18de44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18de48: 0xac403b60
    ctx->pc = 0x18de48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15200), GPR_U32(ctx, 0));
    // 0x18de4c: 0x46010002
    ctx->pc = 0x18de4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18de50: 0x46000064
    ctx->pc = 0x18de50u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x18de54: 0x44040800
    ctx->pc = 0x18de54u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[1]);
    // 0x18de58: 0xc063ab8
    ctx->pc = 0x18DE58u;
    SET_GPR_U32(ctx, 31, 0x18DE60u);
    ctx->pc = 0x18EAE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlySfdInit_0x18eae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE60u; }
        else if (ctx->pc != 0x18DE60u) { ctx->pc = 0x18DE60u; }
    }
    if (ctx->pc != 0x18DE60u) { return; }
    ctx->pc = 0x18DE60u;
    // 0x18de60: 0x10400005
    ctx->pc = 0x18DE60u;
    {
        const bool branch_taken_0x18de60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18DE64u;
        SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
        if (branch_taken_0x18de60) {
            ctx->pc = 0x18DE78u;
            goto label_18de78;
        }
    }
    ctx->pc = 0x18DE68u;
    // 0x18de68: 0x3c04002c
    ctx->pc = 0x18de68u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18de6c: 0xc063dda
    ctx->pc = 0x18DE6Cu;
    SET_GPR_U32(ctx, 31, 0x18DE74u);
    ctx->pc = 0x18DE70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954920));
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE74u; }
        else if (ctx->pc != 0x18DE74u) { ctx->pc = 0x18DE74u; }
    }
    if (ctx->pc != 0x18DE74u) { return; }
    ctx->pc = 0x18DE74u;
    // 0x18de74: 0x3c030024
    ctx->pc = 0x18de74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
label_18de78:
    // 0x18de78: 0x24020001
    ctx->pc = 0x18de78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18de7c: 0x0
    ctx->pc = 0x18de7cu;
    // NOP
    // 0x18de80: 0xc0637e6
    ctx->pc = 0x18DE80u;
    SET_GPR_U32(ctx, 31, 0x18DE88u);
    ctx->pc = 0x18DE84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18DF98u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwsfd_SetDefCond_0x18df98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE88u; }
        else if (ctx->pc != 0x18DE88u) { ctx->pc = 0x18DE88u; }
    }
    if (ctx->pc != 0x18DE88u) { return; }
    ctx->pc = 0x18DE88u;
    // 0x18de88: 0x3c040019
    ctx->pc = 0x18de88u;
    SET_GPR_U32(ctx, 4, ((uint32_t)25 << 16));
    // 0x18de8c: 0x282d
    ctx->pc = 0x18de8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de90: 0xc063da0
    ctx->pc = 0x18DE90u;
    SET_GPR_U32(ctx, 31, 0x18DE98u);
    ctx->pc = 0x18DE94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294956048));
    ctx->pc = 0x18F680u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_EntryVfunc_0x18f680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE98u; }
        else if (ctx->pc != 0x18DE98u) { ctx->pc = 0x18DE98u; }
    }
    if (ctx->pc != 0x18DE98u) { return; }
    ctx->pc = 0x18DE98u;
    // 0x18de98: 0x8e02000c
    ctx->pc = 0x18de98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18de9c: 0x14400006
    ctx->pc = 0x18DE9Cu;
    {
        const bool branch_taken_0x18de9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18DEA0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)25 << 16));
        if (branch_taken_0x18de9c) {
            ctx->pc = 0x18DEB8u;
            goto label_18deb8;
        }
    }
    ctx->pc = 0x18DEA4u;
    // 0x18dea4: 0x282d
    ctx->pc = 0x18dea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dea8: 0xc063db0
    ctx->pc = 0x18DEA8u;
    SET_GPR_U32(ctx, 31, 0x18DEB0u);
    ctx->pc = 0x18DEACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955752));
    ctx->pc = 0x18F6C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_EntryIdleFunc_0x18f6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DEB0u; }
        else if (ctx->pc != 0x18DEB0u) { ctx->pc = 0x18DEB0u; }
    }
    if (ctx->pc != 0x18DEB0u) { return; }
    ctx->pc = 0x18DEB0u;
    // 0x18deb0: 0x10000004
    ctx->pc = 0x18DEB0u;
    {
        const bool branch_taken_0x18deb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x18deb0) {
            ctx->pc = 0x18DEC4u;
            goto label_18dec4;
        }
    }
    ctx->pc = 0x18DEB8u;
label_18deb8:
    // 0x18deb8: 0x282d
    ctx->pc = 0x18deb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18debc: 0xc063dc0
    ctx->pc = 0x18DEBCu;
    SET_GPR_U32(ctx, 31, 0x18DEC4u);
    ctx->pc = 0x18DEC0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955752));
    ctx->pc = 0x18F700u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_EntryMainFunc_0x18f700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DEC4u; }
        else if (ctx->pc != 0x18DEC4u) { ctx->pc = 0x18DEC4u; }
    }
    if (ctx->pc != 0x18DEC4u) { return; }
    ctx->pc = 0x18DEC4u;
label_18dec4:
    // 0x18dec4: 0xc05e9e4
    ctx->pc = 0x18DEC4u;
    SET_GPR_U32(ctx, 31, 0x18DECCu);
    ctx->pc = 0x17A790u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_Init_0x17a790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DECCu; }
        else if (ctx->pc != 0x18DECCu) { ctx->pc = 0x18DECCu; }
    }
    if (ctx->pc != 0x18DECCu) { return; }
    ctx->pc = 0x18DECCu;
    // 0x18decc: 0x3c040019
    ctx->pc = 0x18deccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)25 << 16));
    // 0x18ded0: 0x282d
    ctx->pc = 0x18ded0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ded4: 0xc05e9be
    ctx->pc = 0x18DED4u;
    SET_GPR_U32(ctx, 31, 0x18DEDCu);
    ctx->pc = 0x18DED8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958480));
    ctx->pc = 0x17A6F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_EntryErrFunc_0x17a6f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DEDCu; }
        else if (ctx->pc != 0x18DEDCu) { ctx->pc = 0x18DEDCu; }
    }
    if (ctx->pc != 0x18DEDCu) { return; }
    ctx->pc = 0x18DEDCu;
    // 0x18dedc: 0xc063190
    ctx->pc = 0x18DEDCu;
    SET_GPR_U32(ctx, 31, 0x18DEE4u);
    ctx->pc = 0x18DEE0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C640u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyUnlock_0x18c640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DEE4u; }
        else if (ctx->pc != 0x18DEE4u) { ctx->pc = 0x18DEE4u; }
    }
    if (ctx->pc != 0x18DEE4u) { return; }
    ctx->pc = 0x18DEE4u;
    // 0x18dee4: 0x8e223b6c
    ctx->pc = 0x18dee4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 15212)));
    // 0x18dee8: 0xdfbf0030
    ctx->pc = 0x18dee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18deec:
    // 0x18deec: 0x24420001
    ctx->pc = 0x18deecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18def0: 0xdfb20020
    ctx->pc = 0x18def0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18def4: 0xae223b6c
    ctx->pc = 0x18def4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 15212), GPR_U32(ctx, 2));
    // 0x18def8: 0xdfb10010
    ctx->pc = 0x18def8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18defc: 0xdfb00000
    ctx->pc = 0x18defcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18df00: 0x3e00008
    ctx->pc = 0x18DF00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DF04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18DDD0u: goto label_18ddd0;
            case 0x18DE24u: goto label_18de24;
            case 0x18DE78u: goto label_18de78;
            case 0x18DEB8u: goto label_18deb8;
            case 0x18DEC4u: goto label_18dec4;
            case 0x18DEECu: goto label_18deec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18DF08u;
}
