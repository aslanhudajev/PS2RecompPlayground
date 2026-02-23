#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwl_convFrmInfToSFD
// Address: 0x18db50 - 0x18dc18
void mwl_convFrmInfToSFD_0x18db50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwl_convFrmInfToSFD");


    ctx->pc = 0x18db50u;

    // 0x18db50: 0x27bdff70
    ctx->pc = 0x18db50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18db54: 0xffb60060
    ctx->pc = 0x18db54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x18db58: 0xffb50050
    ctx->pc = 0x18db58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x18db5c: 0xffb40040
    ctx->pc = 0x18db5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x18db60: 0xffb30030
    ctx->pc = 0x18db60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x18db64: 0xffb20020
    ctx->pc = 0x18db64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x18db68: 0xffb10010
    ctx->pc = 0x18db68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18db6c: 0xffb00000
    ctx->pc = 0x18db6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18db70: 0xa0882d
    ctx->pc = 0x18db70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18db74: 0xffbf0080
    ctx->pc = 0x18db74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x18db78: 0x80802d
    ctx->pc = 0x18db78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18db7c: 0xffb70070
    ctx->pc = 0x18db7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x18db80: 0x8e170000
    ctx->pc = 0x18db80u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18db84: 0xc063706
    ctx->pc = 0x18DB84u;
    SET_GPR_U32(ctx, 31, 0x18DB8Cu);
    ctx->pc = 0x18DB88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x18DC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwl_convBufFmtToSFD_0x18dc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB8Cu; }
        else if (ctx->pc != 0x18DB8Cu) { ctx->pc = 0x18DB8Cu; }
    }
    if (ctx->pc != 0x18DB8Cu) { return; }
    ctx->pc = 0x18DB8Cu;
    // 0x18db8c: 0x8e040018
    ctx->pc = 0x18db8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x18db90: 0x40902d
    ctx->pc = 0x18db90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18db94: 0x8e130008
    ctx->pc = 0x18db94u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18db98: 0x8e14000c
    ctx->pc = 0x18db98u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18db9c: 0x8e150010
    ctx->pc = 0x18db9cu;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x18dba0: 0xc06371c
    ctx->pc = 0x18DBA0u;
    SET_GPR_U32(ctx, 31, 0x18DBA8u);
    ctx->pc = 0x18DBA4u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->pc = 0x18DC70u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwl_convPtypeToSFD_0x18dc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DBA8u; }
        else if (ctx->pc != 0x18DBA8u) { ctx->pc = 0x18DBA8u; }
    }
    if (ctx->pc != 0x18DBA8u) { return; }
    ctx->pc = 0x18DBA8u;
    // 0x18dba8: 0x8e03002c
    ctx->pc = 0x18dba8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x18dbac: 0x8e04001c
    ctx->pc = 0x18dbacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x18dbb0: 0x8e050020
    ctx->pc = 0x18dbb0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x18dbb4: 0x8e060024
    ctx->pc = 0x18dbb4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x18dbb8: 0x8e070028
    ctx->pc = 0x18dbb8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x18dbbc: 0xae370020
    ctx->pc = 0x18dbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 23));
    // 0x18dbc0: 0xae32001c
    ctx->pc = 0x18dbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 18));
    // 0x18dbc4: 0xae330000
    ctx->pc = 0x18dbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x18dbc8: 0xae340004
    ctx->pc = 0x18dbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
    // 0x18dbcc: 0xae350008
    ctx->pc = 0x18dbccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 21));
    // 0x18dbd0: 0xae36000c
    ctx->pc = 0x18dbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 22));
    // 0x18dbd4: 0xae23002c
    ctx->pc = 0x18dbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x18dbd8: 0xae220010
    ctx->pc = 0x18dbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x18dbdc: 0xae240014
    ctx->pc = 0x18dbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    // 0x18dbe0: 0xae250018
    ctx->pc = 0x18dbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 5));
    // 0x18dbe4: 0xae260024
    ctx->pc = 0x18dbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 6));
    // 0x18dbe8: 0xae270028
    ctx->pc = 0x18dbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 7));
    // 0x18dbec: 0xdfbf0080
    ctx->pc = 0x18dbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18dbf0: 0xdfb70070
    ctx->pc = 0x18dbf0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18dbf4: 0xdfb60060
    ctx->pc = 0x18dbf4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18dbf8: 0xdfb50050
    ctx->pc = 0x18dbf8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18dbfc: 0xdfb40040
    ctx->pc = 0x18dbfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18dc00: 0xdfb30030
    ctx->pc = 0x18dc00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18dc04: 0xdfb20020
    ctx->pc = 0x18dc04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18dc08: 0xdfb10010
    ctx->pc = 0x18dc08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18dc0c: 0xdfb00000
    ctx->pc = 0x18dc0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18dc10: 0x3e00008
    ctx->pc = 0x18DC10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DC14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18DC18u;
}
