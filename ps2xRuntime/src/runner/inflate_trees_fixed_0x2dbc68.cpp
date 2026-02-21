#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: inflate_trees_fixed
// Address: 0x2dbc68 - 0x2dbe5c
void inflate_trees_fixed_0x2dbc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dbc68u;

    // 0x2dbc68: 0x27bdfae0
    ctx->pc = 0x2dbc68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294965984));
    // 0x2dbc6c: 0xffbf0510
    ctx->pc = 0x2dbc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1296), GPR_U64(ctx, 31));
    // 0x2dbc70: 0xffb30500
    ctx->pc = 0x2dbc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1280), GPR_U64(ctx, 19));
    // 0x2dbc74: 0xffb204f0
    ctx->pc = 0x2dbc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1264), GPR_U64(ctx, 18));
    // 0x2dbc78: 0xffb104e0
    ctx->pc = 0x2dbc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1248), GPR_U64(ctx, 17));
    // 0x2dbc7c: 0xffb004d0
    ctx->pc = 0x2dbc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1232), GPR_U64(ctx, 16));
    // 0x2dbc80: 0x80802d
    ctx->pc = 0x2dbc80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbc84: 0xa0882d
    ctx->pc = 0x2dbc84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbc88: 0xc0902d
    ctx->pc = 0x2dbc88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbc8c: 0x3c02003a
    ctx->pc = 0x2dbc8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dbc90: 0x8c422988
    ctx->pc = 0x2dbc90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10632)));
    // 0x2dbc94: 0x1440005d
    ctx->pc = 0x2DBC94u;
    {
        const bool branch_taken_0x2dbc94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DBC98u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dbc94) {
            ctx->pc = 0x2DBE0Cu;
            goto label_2dbe0c;
        }
    }
    ctx->pc = 0x2DBC9Cu;
    // 0x2dbc9c: 0x24020212
    ctx->pc = 0x2dbc9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 530));
    // 0x2dbca0: 0xafa204c0
    ctx->pc = 0x2dbca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 2));
    // 0x2dbca4: 0x3c02002e
    ctx->pc = 0x2dbca4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x2dbca8: 0x2442bc48
    ctx->pc = 0x2dbca8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294949960));
    // 0x2dbcac: 0xafa204a0
    ctx->pc = 0x2dbcacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 2));
    // 0x2dbcb0: 0xafa004a4
    ctx->pc = 0x2dbcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 0));
    // 0x2dbcb4: 0x27a204c0
    ctx->pc = 0x2dbcb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 1216));
    // 0x2dbcb8: 0xafa204a8
    ctx->pc = 0x2dbcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 2));
    // 0x2dbcbc: 0x182d
    ctx->pc = 0x2dbcbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbcc0: 0x24040008
    ctx->pc = 0x2dbcc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2dbcc4: 0x0
    ctx->pc = 0x2dbcc4u;
    // NOP
label_2dbcc8:
    // 0x2dbcc8: 0x31080
    ctx->pc = 0x2dbcc8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2dbccc: 0x3a21021
    ctx->pc = 0x2dbcccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2dbcd0: 0xac440000
    ctx->pc = 0x2dbcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2dbcd4: 0x24630001
    ctx->pc = 0x2dbcd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dbcd8: 0x28620090
    ctx->pc = 0x2dbcd8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 144));
    // 0x2dbcdc: 0x1440fffa
    ctx->pc = 0x2DBCDCu;
    {
        const bool branch_taken_0x2dbcdc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2dbcdc) {
            ctx->pc = 0x2DBCC8u;
            goto label_2dbcc8;
        }
    }
    ctx->pc = 0x2DBCE4u;
    // 0x2dbce4: 0x28620100
    ctx->pc = 0x2dbce4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 256));
    // 0x2dbce8: 0x1040000b
    ctx->pc = 0x2DBCE8u;
    {
        const bool branch_taken_0x2dbce8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DBCECu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 280));
        if (branch_taken_0x2dbce8) {
            ctx->pc = 0x2DBD18u;
            goto label_2dbd18;
        }
    }
    ctx->pc = 0x2DBCF0u;
    // 0x2dbcf0: 0x24040009
    ctx->pc = 0x2dbcf0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9));
    // 0x2dbcf4: 0x0
    ctx->pc = 0x2dbcf4u;
    // NOP
label_2dbcf8:
    // 0x2dbcf8: 0x31080
    ctx->pc = 0x2dbcf8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2dbcfc: 0x3a21021
    ctx->pc = 0x2dbcfcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2dbd00: 0xac440000
    ctx->pc = 0x2dbd00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2dbd04: 0x24630001
    ctx->pc = 0x2dbd04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dbd08: 0x28620100
    ctx->pc = 0x2dbd08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 256));
    // 0x2dbd0c: 0x1440fffa
    ctx->pc = 0x2DBD0Cu;
    {
        const bool branch_taken_0x2dbd0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2dbd0c) {
            ctx->pc = 0x2DBCF8u;
            goto label_2dbcf8;
        }
    }
    ctx->pc = 0x2DBD14u;
    // 0x2dbd14: 0x28620118
    ctx->pc = 0x2dbd14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 280));
label_2dbd18:
    // 0x2dbd18: 0x10400008
    ctx->pc = 0x2DBD18u;
    {
        const bool branch_taken_0x2dbd18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DBD1Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x2dbd18) {
            ctx->pc = 0x2DBD3Cu;
            goto label_2dbd3c;
        }
    }
    ctx->pc = 0x2DBD20u;
label_2dbd20:
    // 0x2dbd20: 0x31080
    ctx->pc = 0x2dbd20u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2dbd24: 0x3a21021
    ctx->pc = 0x2dbd24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2dbd28: 0xac440000
    ctx->pc = 0x2dbd28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2dbd2c: 0x24630001
    ctx->pc = 0x2dbd2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dbd30: 0x28620118
    ctx->pc = 0x2dbd30u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 280));
    // 0x2dbd34: 0x1440fffa
    ctx->pc = 0x2DBD34u;
    {
        const bool branch_taken_0x2dbd34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2dbd34) {
            ctx->pc = 0x2DBD20u;
            goto label_2dbd20;
        }
    }
    ctx->pc = 0x2DBD3Cu;
label_2dbd3c:
    // 0x2dbd3c: 0x28620120
    ctx->pc = 0x2dbd3cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 288));
    // 0x2dbd40: 0x10400008
    ctx->pc = 0x2DBD40u;
    {
        const bool branch_taken_0x2dbd40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DBD44u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x2dbd40) {
            ctx->pc = 0x2DBD64u;
            goto label_2dbd64;
        }
    }
    ctx->pc = 0x2DBD48u;
label_2dbd48:
    // 0x2dbd48: 0x31080
    ctx->pc = 0x2dbd48u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2dbd4c: 0x3a21021
    ctx->pc = 0x2dbd4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2dbd50: 0xac440000
    ctx->pc = 0x2dbd50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2dbd54: 0x24630001
    ctx->pc = 0x2dbd54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dbd58: 0x28620120
    ctx->pc = 0x2dbd58u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 288));
    // 0x2dbd5c: 0x1440fffa
    ctx->pc = 0x2DBD5Cu;
    {
        const bool branch_taken_0x2dbd5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2dbd5c) {
            ctx->pc = 0x2DBD48u;
            goto label_2dbd48;
        }
    }
    ctx->pc = 0x2DBD64u;
label_2dbd64:
    // 0x2dbd64: 0x3c0a003d
    ctx->pc = 0x2dbd64u;
    SET_GPR_U32(ctx, 10, ((uint32_t)61 << 16));
    // 0x2dbd68: 0x24020007
    ctx->pc = 0x2dbd68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x2dbd6c: 0xad427ff0
    ctx->pc = 0x2dbd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 32752), GPR_U32(ctx, 2));
    // 0x2dbd70: 0x3a0202d
    ctx->pc = 0x2dbd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbd74: 0x24050120
    ctx->pc = 0x2dbd74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 288));
    // 0x2dbd78: 0x24060101
    ctx->pc = 0x2dbd78u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 257));
    // 0x2dbd7c: 0x3c07003a
    ctx->pc = 0x2dbd7cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
    // 0x2dbd80: 0x24e72798
    ctx->pc = 0x2dbd80u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 10136));
    // 0x2dbd84: 0x3c08003a
    ctx->pc = 0x2dbd84u;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
    // 0x2dbd88: 0x25082818
    ctx->pc = 0x2dbd88u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 10264));
    // 0x2dbd8c: 0x3c09003d
    ctx->pc = 0x2dbd8cu;
    SET_GPR_U32(ctx, 9, ((uint32_t)61 << 16));
    // 0x2dbd90: 0x25297ff8
    ctx->pc = 0x2dbd90u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 32760));
    // 0x2dbd94: 0x254a7ff0
    ctx->pc = 0x2dbd94u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 32752));
    // 0x2dbd98: 0xc0b6d0c
    ctx->pc = 0x2DBD98u;
    SET_GPR_U32(ctx, 31, 0x2DBDA0u);
    ctx->pc = 0x2DBD9Cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 29), 1152));
    ctx->pc = 0x2DB430u;
    {
        const uint32_t __entryPc = ctx->pc;
        huft_build_0x2db430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBDA0u; }
    }
    if (ctx->pc != 0x2DBDA0u) { return; }
    ctx->pc = 0x2DBDA0u;
    // 0x2dbda0: 0x182d
    ctx->pc = 0x2dbda0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbda4: 0x24040005
    ctx->pc = 0x2dbda4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
label_2dbda8:
    // 0x2dbda8: 0x31080
    ctx->pc = 0x2dbda8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2dbdac: 0x3a21021
    ctx->pc = 0x2dbdacu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2dbdb0: 0xac440000
    ctx->pc = 0x2dbdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2dbdb4: 0x24630001
    ctx->pc = 0x2dbdb4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dbdb8: 0x2862001e
    ctx->pc = 0x2dbdb8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 30));
    // 0x2dbdbc: 0x1440fffa
    ctx->pc = 0x2DBDBCu;
    {
        const bool branch_taken_0x2dbdbc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2dbdbc) {
            ctx->pc = 0x2DBDA8u;
            goto label_2dbda8;
        }
    }
    ctx->pc = 0x2DBDC4u;
    // 0x2dbdc4: 0x3c0a003d
    ctx->pc = 0x2dbdc4u;
    SET_GPR_U32(ctx, 10, ((uint32_t)61 << 16));
    // 0x2dbdc8: 0x24020005
    ctx->pc = 0x2dbdc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2dbdcc: 0xad427ff4
    ctx->pc = 0x2dbdccu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 32756), GPR_U32(ctx, 2));
    // 0x2dbdd0: 0x3a0202d
    ctx->pc = 0x2dbdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbdd4: 0x2405001e
    ctx->pc = 0x2dbdd4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 30));
    // 0x2dbdd8: 0x302d
    ctx->pc = 0x2dbdd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbddc: 0x3c07003a
    ctx->pc = 0x2dbddcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
    // 0x2dbde0: 0x24e72898
    ctx->pc = 0x2dbde0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 10392));
    // 0x2dbde4: 0x3c08003a
    ctx->pc = 0x2dbde4u;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
    // 0x2dbde8: 0x25082910
    ctx->pc = 0x2dbde8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 10512));
    // 0x2dbdec: 0x3c09003d
    ctx->pc = 0x2dbdecu;
    SET_GPR_U32(ctx, 9, ((uint32_t)61 << 16));
    // 0x2dbdf0: 0x25297ffc
    ctx->pc = 0x2dbdf0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 32764));
    // 0x2dbdf4: 0x254a7ff4
    ctx->pc = 0x2dbdf4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 32756));
    // 0x2dbdf8: 0xc0b6d0c
    ctx->pc = 0x2DBDF8u;
    SET_GPR_U32(ctx, 31, 0x2DBE00u);
    ctx->pc = 0x2DBDFCu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 29), 1152));
    ctx->pc = 0x2DB430u;
    {
        const uint32_t __entryPc = ctx->pc;
        huft_build_0x2db430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBE00u; }
    }
    if (ctx->pc != 0x2DBE00u) { return; }
    ctx->pc = 0x2DBE00u;
    // 0x2dbe00: 0x3c03003a
    ctx->pc = 0x2dbe00u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2dbe04: 0x24020001
    ctx->pc = 0x2dbe04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dbe08: 0xac622988
    ctx->pc = 0x2dbe08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10632), GPR_U32(ctx, 2));
label_2dbe0c:
    // 0x2dbe0c: 0x3c02003d
    ctx->pc = 0x2dbe0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2dbe10: 0x8c427ff0
    ctx->pc = 0x2dbe10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 32752)));
    // 0x2dbe14: 0xae020000
    ctx->pc = 0x2dbe14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2dbe18: 0x3c02003d
    ctx->pc = 0x2dbe18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2dbe1c: 0x8c427ff4
    ctx->pc = 0x2dbe1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 32756)));
    // 0x2dbe20: 0xae220000
    ctx->pc = 0x2dbe20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2dbe24: 0x3c02003d
    ctx->pc = 0x2dbe24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2dbe28: 0x8c427ff8
    ctx->pc = 0x2dbe28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 32760)));
    // 0x2dbe2c: 0xae420000
    ctx->pc = 0x2dbe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2dbe30: 0x3c02003d
    ctx->pc = 0x2dbe30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2dbe34: 0x8c427ffc
    ctx->pc = 0x2dbe34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 32764)));
    // 0x2dbe38: 0xae620000
    ctx->pc = 0x2dbe38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2dbe3c: 0x102d
    ctx->pc = 0x2dbe3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe40: 0xdfbf0510
    ctx->pc = 0x2dbe40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1296)));
    // 0x2dbe44: 0xdfb30500
    ctx->pc = 0x2dbe44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x2dbe48: 0xdfb204f0
    ctx->pc = 0x2dbe48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1264)));
    // 0x2dbe4c: 0xdfb104e0
    ctx->pc = 0x2dbe4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1248)));
    // 0x2dbe50: 0xdfb004d0
    ctx->pc = 0x2dbe50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x2dbe54: 0x3e00008
    ctx->pc = 0x2DBE54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBE58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 1312));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DBCC8u: goto label_2dbcc8;
            case 0x2DBCF8u: goto label_2dbcf8;
            case 0x2DBD18u: goto label_2dbd18;
            case 0x2DBD20u: goto label_2dbd20;
            case 0x2DBD3Cu: goto label_2dbd3c;
            case 0x2DBD48u: goto label_2dbd48;
            case 0x2DBD64u: goto label_2dbd64;
            case 0x2DBDA8u: goto label_2dbda8;
            case 0x2DBE0Cu: goto label_2dbe0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DBE5Cu;
}
