#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LoadPlyrData
// Address: 0x24da48 - 0x24dbe8
void LoadPlyrData_0x24da48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24da48u;

    // 0x24da48: 0x27bdff80
    ctx->pc = 0x24da48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x24da4c: 0xffbf0070
    ctx->pc = 0x24da4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x24da50: 0xffb40060
    ctx->pc = 0x24da50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x24da54: 0xffb30050
    ctx->pc = 0x24da54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x24da58: 0xffb20040
    ctx->pc = 0x24da58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x24da5c: 0xffb10030
    ctx->pc = 0x24da5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x24da60: 0xffb00020
    ctx->pc = 0x24da60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x24da64: 0x80982d
    ctx->pc = 0x24da64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24da68: 0xa0902d
    ctx->pc = 0x24da68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24da6c: 0x6600056
    ctx->pc = 0x24DA6Cu;
    {
        const bool branch_taken_0x24da6c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x24DA70u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24da6c) {
            ctx->pc = 0x24DBC8u;
            goto label_24dbc8;
        }
    }
    ctx->pc = 0x24DA74u;
    // 0x24da74: 0x6400054
    ctx->pc = 0x24DA74u;
    {
        const bool branch_taken_0x24da74 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x24DA78u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x24da74) {
            ctx->pc = 0x24DBC8u;
            goto label_24dbc8;
        }
    }
    ctx->pc = 0x24DA7Cu;
    // 0x24da7c: 0x24421ee0
    ctx->pc = 0x24da7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7904));
    // 0x24da80: 0x131880
    ctx->pc = 0x24da80u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x24da84: 0x621821
    ctx->pc = 0x24da84u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24da88: 0x8c620000
    ctx->pc = 0x24da88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24da8c: 0x521026
    ctx->pc = 0x24da8cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x24da90: 0x2182b
    ctx->pc = 0x24da90u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x24da94: 0x10600041
    ctx->pc = 0x24DA94u;
    {
        const bool branch_taken_0x24da94 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x24DA98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x24da94) {
            ctx->pc = 0x24DB9Cu;
            goto label_24db9c;
        }
    }
    ctx->pc = 0x24DA9Cu;
    // 0x24da9c: 0x14620004
    ctx->pc = 0x24DA9Cu;
    {
        const bool branch_taken_0x24da9c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x24DAA0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x24da9c) {
            ctx->pc = 0x24DAB0u;
            goto label_24dab0;
        }
    }
    ctx->pc = 0x24DAA4u;
    // 0x24daa4: 0xc0935e6
    ctx->pc = 0x24DAA4u;
    SET_GPR_U32(ctx, 31, 0x24DAACu);
    ctx->pc = 0x24DAA8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24D798u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadPdataFile_0x24d798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DAACu; }
    }
    if (ctx->pc != 0x24DAACu) { return; }
    ctx->pc = 0x24DAACu;
    // 0x24daac: 0x3c020033
    ctx->pc = 0x24daacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_24dab0:
    // 0x24dab0: 0x244248c8
    ctx->pc = 0x24dab0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18632));
    // 0x24dab4: 0x121880
    ctx->pc = 0x24dab4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 2));
    // 0x24dab8: 0x621021
    ctx->pc = 0x24dab8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24dabc: 0x8c450000
    ctx->pc = 0x24dabcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24dac0: 0x10a0002f
    ctx->pc = 0x24DAC0u;
    {
        const bool branch_taken_0x24dac0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x24DAC4u;
        SET_GPR_U32(ctx, 16, ((uint32_t)51 << 16));
        if (branch_taken_0x24dac0) {
            ctx->pc = 0x24DB80u;
            goto label_24db80;
        }
    }
    ctx->pc = 0x24DAC8u;
    // 0x24dac8: 0x26104960
    ctx->pc = 0x24dac8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 18784));
    // 0x24dacc: 0x138880
    ctx->pc = 0x24daccu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 19), 2));
    // 0x24dad0: 0x2308021
    ctx->pc = 0x24dad0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x24dad4: 0x3c020033
    ctx->pc = 0x24dad4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x24dad8: 0x24424920
    ctx->pc = 0x24dad8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18720));
    // 0x24dadc: 0x621021
    ctx->pc = 0x24dadcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24dae0: 0x8e040000
    ctx->pc = 0x24dae0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24dae4: 0xc0bec59
    ctx->pc = 0x24DAE4u;
    SET_GPR_U32(ctx, 31, 0x24DAECu);
    ctx->pc = 0x24DAE8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2FB164u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x2fb164(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DAECu; }
    }
    if (ctx->pc != 0x24DAECu) { return; }
    ctx->pc = 0x24DAECu;
    // 0x24daec: 0x3a0202d
    ctx->pc = 0x24daecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24daf0: 0xc0b5116
    ctx->pc = 0x24DAF0u;
    SET_GPR_U32(ctx, 31, 0x24DAF8u);
    ctx->pc = 0x24DAF4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2D4458u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetupWad_0x2d4458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DAF8u; }
    }
    if (ctx->pc != 0x24DAF8u) { return; }
    ctx->pc = 0x24DAF8u;
    // 0x24daf8: 0x3a0202d
    ctx->pc = 0x24daf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dafc: 0x3c055044
    ctx->pc = 0x24dafcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)20548 << 16));
    // 0x24db00: 0x34a54154
    ctx->pc = 0x24db00u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 16724));
    // 0x24db04: 0xc0b514a
    ctx->pc = 0x24DB04u;
    SET_GPR_U32(ctx, 31, 0x24DB0Cu);
    ctx->pc = 0x24DB08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DB0Cu; }
    }
    if (ctx->pc != 0x24DB0Cu) { return; }
    ctx->pc = 0x24DB0Cu;
    // 0x24db0c: 0x3c100033
    ctx->pc = 0x24db0cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)51 << 16));
    // 0x24db10: 0x26104910
    ctx->pc = 0x24db10u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 18704));
    // 0x24db14: 0x2308021
    ctx->pc = 0x24db14u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x24db18: 0xae020000
    ctx->pc = 0x24db18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x24db1c: 0x3a0202d
    ctx->pc = 0x24db1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24db20: 0x3c055346
    ctx->pc = 0x24db20u;
    SET_GPR_U32(ctx, 5, ((uint32_t)21318 << 16));
    // 0x24db24: 0x34a55858
    ctx->pc = 0x24db24u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 22616));
    // 0x24db28: 0xc0b514a
    ctx->pc = 0x24DB28u;
    SET_GPR_U32(ctx, 31, 0x24DB30u);
    ctx->pc = 0x24DB2Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DB30u; }
    }
    if (ctx->pc != 0x24DB30u) { return; }
    ctx->pc = 0x24DB30u;
    // 0x24db30: 0x8e030000
    ctx->pc = 0x24db30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24db34: 0xac620004
    ctx->pc = 0x24db34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x24db38: 0x3a0202d
    ctx->pc = 0x24db38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24db3c: 0x3c054441
    ctx->pc = 0x24db3cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)17473 << 16));
    // 0x24db40: 0x34a54d47
    ctx->pc = 0x24db40u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 19783));
    // 0x24db44: 0xc0b514a
    ctx->pc = 0x24DB44u;
    SET_GPR_U32(ctx, 31, 0x24DB4Cu);
    ctx->pc = 0x24DB48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DB4Cu; }
    }
    if (ctx->pc != 0x24DB4Cu) { return; }
    ctx->pc = 0x24DB4Cu;
    // 0x24db4c: 0x8e030000
    ctx->pc = 0x24db4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24db50: 0xac620008
    ctx->pc = 0x24db50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x24db54: 0x8e020000
    ctx->pc = 0x24db54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24db58: 0xac400024
    ctx->pc = 0x24db58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x24db5c: 0x3c02003c
    ctx->pc = 0x24db5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x24db60: 0x24421ee0
    ctx->pc = 0x24db60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7904));
    // 0x24db64: 0x2228821
    ctx->pc = 0x24db64u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x24db68: 0x12800017
    ctx->pc = 0x24DB68u;
    {
        const bool branch_taken_0x24db68 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x24DB6Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        if (branch_taken_0x24db68) {
            ctx->pc = 0x24DBC8u;
            goto label_24dbc8;
        }
    }
    ctx->pc = 0x24DB70u;
    // 0x24db70: 0xc093674
    ctx->pc = 0x24DB70u;
    SET_GPR_U32(ctx, 31, 0x24DB78u);
    ctx->pc = 0x24DB74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24D9D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResolvePlyrData_0x24d9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DB78u; }
    }
    if (ctx->pc != 0x24DB78u) { return; }
    ctx->pc = 0x24DB78u;
    // 0x24db78: 0x10000014
    ctx->pc = 0x24DB78u;
    {
        const bool branch_taken_0x24db78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24DB7Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x24db78) {
            ctx->pc = 0x24DBCCu;
            goto label_24dbcc;
        }
    }
    ctx->pc = 0x24DB80u;
label_24db80:
    // 0x24db80: 0x3c04003b
    ctx->pc = 0x24db80u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x24db84: 0x248483e8
    ctx->pc = 0x24db84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294935528));
    // 0x24db88: 0x3c05003c
    ctx->pc = 0x24db88u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x24db8c: 0xc0b4976
    ctx->pc = 0x24DB8Cu;
    SET_GPR_U32(ctx, 31, 0x24DB94u);
    ctx->pc = 0x24DB90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7872));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DB94u; }
    }
    if (ctx->pc != 0x24DB94u) { return; }
    ctx->pc = 0x24DB94u;
    // 0x24db94: 0x1000000d
    ctx->pc = 0x24DB94u;
    {
        const bool branch_taken_0x24db94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24DB98u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x24db94) {
            ctx->pc = 0x24DBCCu;
            goto label_24dbcc;
        }
    }
    ctx->pc = 0x24DB9Cu;
label_24db9c:
    // 0x24db9c: 0x1280000a
    ctx->pc = 0x24DB9Cu;
    {
        const bool branch_taken_0x24db9c = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x24DBA0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        if (branch_taken_0x24db9c) {
            ctx->pc = 0x24DBC8u;
            goto label_24dbc8;
        }
    }
    ctx->pc = 0x24DBA4u;
    // 0x24dba4: 0x24634910
    ctx->pc = 0x24dba4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 18704));
    // 0x24dba8: 0x131080
    ctx->pc = 0x24dba8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x24dbac: 0x431021
    ctx->pc = 0x24dbacu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24dbb0: 0x8c420000
    ctx->pc = 0x24dbb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24dbb4: 0x8c420024
    ctx->pc = 0x24dbb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x24dbb8: 0x14400004
    ctx->pc = 0x24DBB8u;
    {
        const bool branch_taken_0x24dbb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24DBBCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x24dbb8) {
            ctx->pc = 0x24DBCCu;
            goto label_24dbcc;
        }
    }
    ctx->pc = 0x24DBC0u;
    // 0x24dbc0: 0xc093674
    ctx->pc = 0x24DBC0u;
    SET_GPR_U32(ctx, 31, 0x24DBC8u);
    ctx->pc = 0x24DBC4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24D9D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResolvePlyrData_0x24d9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DBC8u; }
    }
    if (ctx->pc != 0x24DBC8u) { return; }
    ctx->pc = 0x24DBC8u;
label_24dbc8:
    // 0x24dbc8: 0xdfbf0070
    ctx->pc = 0x24dbc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_24dbcc:
    // 0x24dbcc: 0xdfb40060
    ctx->pc = 0x24dbccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24dbd0: 0xdfb30050
    ctx->pc = 0x24dbd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24dbd4: 0xdfb20040
    ctx->pc = 0x24dbd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24dbd8: 0xdfb10030
    ctx->pc = 0x24dbd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24dbdc: 0xdfb00020
    ctx->pc = 0x24dbdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24dbe0: 0x3e00008
    ctx->pc = 0x24DBE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DBE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24DAB0u: goto label_24dab0;
            case 0x24DB80u: goto label_24db80;
            case 0x24DB9Cu: goto label_24db9c;
            case 0x24DBC8u: goto label_24dbc8;
            case 0x24DBCCu: goto label_24dbcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24DBE8u;
}
