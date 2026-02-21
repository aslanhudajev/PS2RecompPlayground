#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerStartMissile
// Address: 0x28fb08 - 0x290350
void PlayerStartMissile_0x28fb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28fb08u;

    // 0x28fb08: 0x27bdfe90
    ctx->pc = 0x28fb08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x28fb0c: 0xffbf0140
    ctx->pc = 0x28fb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x28fb10: 0xffbe0130
    ctx->pc = 0x28fb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 30));
    // 0x28fb14: 0xffb70120
    ctx->pc = 0x28fb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 23));
    // 0x28fb18: 0xffb60110
    ctx->pc = 0x28fb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x28fb1c: 0xffb50100
    ctx->pc = 0x28fb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 21));
    // 0x28fb20: 0xffb400f0
    ctx->pc = 0x28fb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x28fb24: 0xffb300e0
    ctx->pc = 0x28fb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 19));
    // 0x28fb28: 0xffb200d0
    ctx->pc = 0x28fb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x28fb2c: 0xffb100c0
    ctx->pc = 0x28fb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
    // 0x28fb30: 0xffb000b0
    ctx->pc = 0x28fb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x28fb34: 0xe7b70168
    ctx->pc = 0x28fb34u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x28fb38: 0xe7b60160
    ctx->pc = 0x28fb38u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x28fb3c: 0xe7b50158
    ctx->pc = 0x28fb3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x28fb40: 0xe7b40150
    ctx->pc = 0x28fb40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x28fb44: 0x80902d
    ctx->pc = 0x28fb44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fb48: 0xa0a02d
    ctx->pc = 0x28fb48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fb4c: 0x46006506
    ctx->pc = 0x28fb4cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x28fb50: 0xc0a82d
    ctx->pc = 0x28fb50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fb54: 0xafa00094
    ctx->pc = 0x28fb54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x28fb58: 0xafa000a0
    ctx->pc = 0x28fb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x28fb5c: 0x8e420000
    ctx->pc = 0x28fb5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28fb60: 0x210c0
    ctx->pc = 0x28fb60u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x28fb64: 0x3c030035
    ctx->pc = 0x28fb64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28fb68: 0x2463f590
    ctx->pc = 0x28fb68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294964624));
    // 0x28fb6c: 0x439821
    ctx->pc = 0x28fb6cu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28fb70: 0x8e620004
    ctx->pc = 0x28fb70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x28fb74: 0xafa20098
    ctx->pc = 0x28fb74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x28fb78: 0x32a3000f
    ctx->pc = 0x28fb78u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 21), 15));
    // 0x28fb7c: 0xafa30090
    ctx->pc = 0x28fb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    // 0x28fb80: 0x8e420138
    ctx->pc = 0x28fb80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 312)));
    // 0x28fb84: 0x30428000
    ctx->pc = 0x28fb84u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x28fb88: 0x10400007
    ctx->pc = 0x28FB88u;
    {
        const bool branch_taken_0x28fb88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28FB8Cu;
        ctx->f[22] = FPU_MOV_S(ctx->f[13]);
        if (branch_taken_0x28fb88) {
            ctx->pc = 0x28FBA8u;
            goto label_28fba8;
        }
    }
    ctx->pc = 0x28FB90u;
    // 0x28fb90: 0x3c020035
    ctx->pc = 0x28fb90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28fb94: 0x2442f4e0
    ctx->pc = 0x28fb94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964448));
    // 0x28fb98: 0xafa2009c
    ctx->pc = 0x28fb98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x28fb9c: 0x24040001
    ctx->pc = 0x28fb9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fba0: 0x1000001b
    ctx->pc = 0x28FBA0u;
    {
        const bool branch_taken_0x28fba0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28FBA4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
        if (branch_taken_0x28fba0) {
            ctx->pc = 0x28FC10u;
            goto label_28fc10;
        }
    }
    ctx->pc = 0x28FBA8u;
label_28fba8:
    // 0x28fba8: 0x8e420138
    ctx->pc = 0x28fba8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 312)));
    // 0x28fbac: 0x30424000
    ctx->pc = 0x28fbacu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
    // 0x28fbb0: 0x10400006
    ctx->pc = 0x28FBB0u;
    {
        const bool branch_taken_0x28fbb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28FBB4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x28fbb0) {
            ctx->pc = 0x28FBCCu;
            goto label_28fbcc;
        }
    }
    ctx->pc = 0x28FBB8u;
    // 0x28fbb8: 0x2442f510
    ctx->pc = 0x28fbb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964496));
    // 0x28fbbc: 0xafa2009c
    ctx->pc = 0x28fbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x28fbc0: 0x24050001
    ctx->pc = 0x28fbc0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fbc4: 0x10000012
    ctx->pc = 0x28FBC4u;
    {
        const bool branch_taken_0x28fbc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28FBC8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
        if (branch_taken_0x28fbc4) {
            ctx->pc = 0x28FC10u;
            goto label_28fc10;
        }
    }
    ctx->pc = 0x28FBCCu;
label_28fbcc:
    // 0x28fbcc: 0x3c020210
    ctx->pc = 0x28fbccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)528 << 16));
    // 0x28fbd0: 0x2a21024
    ctx->pc = 0x28fbd0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x28fbd4: 0x3c030010
    ctx->pc = 0x28fbd4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
    // 0x28fbd8: 0x54430007
    ctx->pc = 0x28FBD8u;
    {
        const bool branch_taken_0x28fbd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x28fbd8) {
            ctx->pc = 0x28FBDCu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->pc = 0x28FBF8u;
            goto label_28fbf8;
        }
    }
    ctx->pc = 0x28FBE0u;
    // 0x28fbe0: 0x3c020035
    ctx->pc = 0x28fbe0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28fbe4: 0x2442f4b0
    ctx->pc = 0x28fbe4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964400));
    // 0x28fbe8: 0xafa2009c
    ctx->pc = 0x28fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x28fbec: 0x24060001
    ctx->pc = 0x28fbecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fbf0: 0x10000007
    ctx->pc = 0x28FBF0u;
    {
        const bool branch_taken_0x28fbf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28FBF4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
        if (branch_taken_0x28fbf0) {
            ctx->pc = 0x28FC10u;
            goto label_28fc10;
        }
    }
    ctx->pc = 0x28FBF8u;
label_28fbf8:
    // 0x28fbf8: 0x24020030
    ctx->pc = 0x28fbf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x28fbfc: 0x621818
    ctx->pc = 0x28fbfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28fc00: 0x3c020035
    ctx->pc = 0x28fc00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28fc04: 0x2442e330
    ctx->pc = 0x28fc04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x28fc08: 0x621821
    ctx->pc = 0x28fc08u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28fc0c: 0xafa3009c
    ctx->pc = 0x28fc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
label_28fc10:
    // 0x28fc10: 0xc6400128
    ctx->pc = 0x28fc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fc14: 0x8e420138
    ctx->pc = 0x28fc14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 312)));
    // 0x28fc18: 0x30420400
    ctx->pc = 0x28fc18u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
    // 0x28fc1c: 0x10400004
    ctx->pc = 0x28FC1Cu;
    {
        const bool branch_taken_0x28fc1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28FC20u;
        ctx->f[23] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        if (branch_taken_0x28fc1c) {
            ctx->pc = 0x28FC30u;
            goto label_28fc30;
        }
    }
    ctx->pc = 0x28FC24u;
    // 0x28fc24: 0x3c040035
    ctx->pc = 0x28fc24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x28fc28: 0x10000015
    ctx->pc = 0x28FC28u;
    {
        const bool branch_taken_0x28fc28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28FC2Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964592));
        if (branch_taken_0x28fc28) {
            ctx->pc = 0x28FC80u;
            goto label_28fc80;
        }
    }
    ctx->pc = 0x28FC30u;
label_28fc30:
    // 0x28fc30: 0x24020001
    ctx->pc = 0x28fc30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fc34: 0x14e20009
    ctx->pc = 0x28FC34u;
    {
        const bool branch_taken_0x28fc34 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x28FC38u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x28fc34) {
            ctx->pc = 0x28FC5Cu;
            goto label_28fc5c;
        }
    }
    ctx->pc = 0x28FC3Cu;
    // 0x28fc3c: 0x3c020033
    ctx->pc = 0x28fc3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x28fc40: 0x24424910
    ctx->pc = 0x28fc40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18704));
    // 0x28fc44: 0x8e430000
    ctx->pc = 0x28fc44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28fc48: 0x31880
    ctx->pc = 0x28fc48u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x28fc4c: 0x621821
    ctx->pc = 0x28fc4cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28fc50: 0x8c640000
    ctx->pc = 0x28fc50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28fc54: 0x1000000a
    ctx->pc = 0x28FC54u;
    {
        const bool branch_taken_0x28fc54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28FC58u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 92));
        if (branch_taken_0x28fc54) {
            ctx->pc = 0x28FC80u;
            goto label_28fc80;
        }
    }
    ctx->pc = 0x28FC5Cu;
label_28fc5c:
    // 0x28fc5c: 0x54e2000d
    ctx->pc = 0x28FC5Cu;
    {
        const bool branch_taken_0x28fc5c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        if (branch_taken_0x28fc5c) {
            ctx->pc = 0x28FC60u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x28FC94u;
            goto label_28fc94;
        }
    }
    ctx->pc = 0x28FC64u;
    // 0x28fc64: 0x3c020033
    ctx->pc = 0x28fc64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x28fc68: 0x24424910
    ctx->pc = 0x28fc68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18704));
    // 0x28fc6c: 0x8e430000
    ctx->pc = 0x28fc6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28fc70: 0x31880
    ctx->pc = 0x28fc70u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x28fc74: 0x621821
    ctx->pc = 0x28fc74u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28fc78: 0x8c640000
    ctx->pc = 0x28fc78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28fc7c: 0x24840158
    ctx->pc = 0x28fc7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 344));
label_28fc80:
    // 0x28fc80: 0x3a0282d
    ctx->pc = 0x28fc80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fc84: 0xc0b585c
    ctx->pc = 0x28FC84u;
    SET_GPR_U32(ctx, 31, 0x28FC8Cu);
    ctx->pc = 0x28FC88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 32));
    ctx->pc = 0x2D6170u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulVecMat3_0x2d6170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FC8Cu; }
    }
    if (ctx->pc != 0x28FC8Cu) { return; }
    ctx->pc = 0x28FC8Cu;
    // 0x28fc8c: 0x10000004
    ctx->pc = 0x28FC8Cu;
    {
        const bool branch_taken_0x28fc8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28FC90u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        if (branch_taken_0x28fc8c) {
            ctx->pc = 0x28FCA0u;
            goto label_28fca0;
        }
    }
    ctx->pc = 0x28FC94u;
label_28fc94:
    // 0x28fc94: 0xafa00004
    ctx->pc = 0x28fc94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x28fc98: 0xafa00008
    ctx->pc = 0x28fc98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x28fc9c: 0xc6460070
    ctx->pc = 0x28fc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_28fca0:
    // 0x28fca0: 0xc7a00000
    ctx->pc = 0x28fca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fca4: 0x46003180
    ctx->pc = 0x28fca4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x28fca8: 0xe7a60000
    ctx->pc = 0x28fca8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28fcac: 0xc6450074
    ctx->pc = 0x28fcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28fcb0: 0xc7a00004
    ctx->pc = 0x28fcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fcb4: 0x46002940
    ctx->pc = 0x28fcb4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x28fcb8: 0xe7a50004
    ctx->pc = 0x28fcb8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28fcbc: 0xc6440078
    ctx->pc = 0x28fcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28fcc0: 0xc7a00008
    ctx->pc = 0x28fcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fcc4: 0x46002100
    ctx->pc = 0x28fcc4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x28fcc8: 0xe7a40008
    ctx->pc = 0x28fcc8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x28fccc: 0xc6830000
    ctx->pc = 0x28fcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28fcd0: 0x3c01c040
    ctx->pc = 0x28fcd0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49216 << 16));
    // 0x28fcd4: 0x44810800
    ctx->pc = 0x28fcd4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x28fcd8: 0x46011802
    ctx->pc = 0x28fcd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x28fcdc: 0x46060000
    ctx->pc = 0x28fcdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x28fce0: 0xe7a00010
    ctx->pc = 0x28fce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28fce4: 0xc6820004
    ctx->pc = 0x28fce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28fce8: 0x46011002
    ctx->pc = 0x28fce8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x28fcec: 0x46050000
    ctx->pc = 0x28fcecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x28fcf0: 0xe7a00014
    ctx->pc = 0x28fcf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x28fcf4: 0xc6800008
    ctx->pc = 0x28fcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fcf8: 0x46010042
    ctx->pc = 0x28fcf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28fcfc: 0x46040840
    ctx->pc = 0x28fcfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x28fd00: 0xe7a10018
    ctx->pc = 0x28fd00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x28fd04: 0x460318c0
    ctx->pc = 0x28fd04u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x28fd08: 0x460618c0
    ctx->pc = 0x28fd08u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x28fd0c: 0xe7a30020
    ctx->pc = 0x28fd0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28fd10: 0x46021080
    ctx->pc = 0x28fd10u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x28fd14: 0x46051080
    ctx->pc = 0x28fd14u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x28fd18: 0xe7a20024
    ctx->pc = 0x28fd18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x28fd1c: 0x46000000
    ctx->pc = 0x28fd1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x28fd20: 0x46040000
    ctx->pc = 0x28fd20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x28fd24: 0x3c020010
    ctx->pc = 0x28fd24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
    // 0x28fd28: 0x2a21024
    ctx->pc = 0x28fd28u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x28fd2c: 0x14400017
    ctx->pc = 0x28FD2Cu;
    {
        const bool branch_taken_0x28fd2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28FD30u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        if (branch_taken_0x28fd2c) {
            ctx->pc = 0x28FD8Cu;
            goto label_28fd8c;
        }
    }
    ctx->pc = 0x28FD34u;
    // 0x28fd34: 0x27b00040
    ctx->pc = 0x28fd34u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 64));
    // 0x28fd38: 0x27a40010
    ctx->pc = 0x28fd38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x28fd3c: 0x27a50020
    ctx->pc = 0x28fd3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x28fd40: 0x200302d
    ctx->pc = 0x28fd40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fd44: 0x8fa2009c
    ctx->pc = 0x28fd44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x28fd48: 0xc087caa
    ctx->pc = 0x28FD48u;
    SET_GPR_U32(ctx, 31, 0x28FD50u);
    ctx->pc = 0x28FD4Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x21F2A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        WeaponWallCollide_0x21f2a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FD50u; }
    }
    if (ctx->pc != 0x28FD50u) { return; }
    ctx->pc = 0x28FD50u;
    // 0x28fd50: 0x1040000e
    ctx->pc = 0x28FD50u;
    {
        const bool branch_taken_0x28fd50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28FD54u;
        SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
        if (branch_taken_0x28fd50) {
            ctx->pc = 0x28FD8Cu;
            goto label_28fd8c;
        }
    }
    ctx->pc = 0x28FD58u;
    // 0x28fd58: 0x2a21024
    ctx->pc = 0x28fd58u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x28fd5c: 0x14400006
    ctx->pc = 0x28FD5Cu;
    {
        const bool branch_taken_0x28fd5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28FD60u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x28fd5c) {
            ctx->pc = 0x28FD78u;
            goto label_28fd78;
        }
    }
    ctx->pc = 0x28FD64u;
    // 0x28fd64: 0x200202d
    ctx->pc = 0x28fd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fd68: 0xc09f718
    ctx->pc = 0x28FD68u;
    SET_GPR_U32(ctx, 31, 0x28FD70u);
    ctx->pc = 0x28FD6Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddWallHitCol_0x27dc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FD70u; }
    }
    if (ctx->pc != 0x28FD70u) { return; }
    ctx->pc = 0x28FD70u;
    // 0x28fd70: 0x10000167
    ctx->pc = 0x28FD70u;
    {
        const bool branch_taken_0x28fd70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28FD74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x28fd70) {
            ctx->pc = 0x290310u;
            goto label_290310;
        }
    }
    ctx->pc = 0x28FD78u;
label_28fd78:
    // 0x28fd78: 0xe7a00020
    ctx->pc = 0x28fd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28fd7c: 0xc7a00014
    ctx->pc = 0x28fd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fd80: 0xe7a00024
    ctx->pc = 0x28fd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x28fd84: 0xc7a00018
    ctx->pc = 0x28fd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fd88: 0xe7a00028
    ctx->pc = 0x28fd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_28fd8c:
    // 0x28fd8c: 0x27a40010
    ctx->pc = 0x28fd8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x28fd90: 0x27a50020
    ctx->pc = 0x28fd90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x28fd94: 0x27a60040
    ctx->pc = 0x28fd94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 64));
    // 0x28fd98: 0x8fa3009c
    ctx->pc = 0x28fd98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x28fd9c: 0xc46c000c
    ctx->pc = 0x28fd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28fda0: 0x382d
    ctx->pc = 0x28fda0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fda4: 0xc0961ce
    ctx->pc = 0x28FDA4u;
    SET_GPR_U32(ctx, 31, 0x28FDACu);
    ctx->pc = 0x28FDA8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x258738u;
    {
        const uint32_t __entryPc = ctx->pc;
        WeaponItemCollide_0x258738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FDACu; }
    }
    if (ctx->pc != 0x28FDACu) { return; }
    ctx->pc = 0x28FDACu;
    // 0x28fdac: 0x40802d
    ctx->pc = 0x28fdacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fdb0: 0x12000021
    ctx->pc = 0x28FDB0u;
    {
        const bool branch_taken_0x28fdb0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x28FDB4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28fdb0) {
            ctx->pc = 0x28FE38u;
            goto label_28fe38;
        }
    }
    ctx->pc = 0x28FDB8u;
    // 0x28fdb8: 0x4600bb06
    ctx->pc = 0x28fdb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x28fdbc: 0x2a0282d
    ctx->pc = 0x28fdbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fdc0: 0xc096992
    ctx->pc = 0x28FDC0u;
    SET_GPR_U32(ctx, 31, 0x28FDC8u);
    ctx->pc = 0x28FDC4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x25A648u;
    {
        const uint32_t __entryPc = ctx->pc;
        DamageItem_0x25a648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FDC8u; }
    }
    if (ctx->pc != 0x28FDC8u) { return; }
    ctx->pc = 0x28FDC8u;
    // 0x28fdc8: 0x44800800
    ctx->pc = 0x28fdc8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x28fdcc: 0x46000836
    ctx->pc = 0x28fdccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28fdd0: 0x0
    ctx->pc = 0x28fdd0u;
    // NOP
    // 0x28fdd4: 0x45000010
    ctx->pc = 0x28FDD4u;
    {
        const bool branch_taken_0x28fdd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28FDD8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
        if (branch_taken_0x28fdd4) {
            ctx->pc = 0x28FE18u;
            goto label_28fe18;
        }
    }
    ctx->pc = 0x28FDDCu;
    // 0x28fddc: 0x46010032
    ctx->pc = 0x28fddcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28fde0: 0x0
    ctx->pc = 0x28fde0u;
    // NOP
    // 0x28fde4: 0x45010002
    ctx->pc = 0x28FDE4u;
    {
        const bool branch_taken_0x28fde4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28FDE8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x28fde4) {
            ctx->pc = 0x28FDF0u;
            goto label_28fdf0;
        }
    }
    ctx->pc = 0x28FDECu;
    // 0x28fdec: 0x882d
    ctx->pc = 0x28fdecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28fdf0:
    // 0x28fdf0: 0x240202d
    ctx->pc = 0x28fdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fdf4: 0x200282d
    ctx->pc = 0x28fdf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fdf8: 0xc0a43c8
    ctx->pc = 0x28FDF8u;
    SET_GPR_U32(ctx, 31, 0x28FE00u);
    ctx->pc = 0x28FDFCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x290F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerDamagedItem_0x290f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FE00u; }
    }
    if (ctx->pc != 0x28FE00u) { return; }
    ctx->pc = 0x28FE00u;
    // 0x28fe00: 0x27a40040
    ctx->pc = 0x28fe00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x28fe04: 0x2a0282d
    ctx->pc = 0x28fe04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe08: 0xc09f6d2
    ctx->pc = 0x28FE08u;
    SET_GPR_U32(ctx, 31, 0x28FE10u);
    ctx->pc = 0x28FE0Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddItemHitCol_0x27db48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FE10u; }
    }
    if (ctx->pc != 0x28FE10u) { return; }
    ctx->pc = 0x28FE10u;
    // 0x28fe10: 0x10000004
    ctx->pc = 0x28FE10u;
    {
        const bool branch_taken_0x28fe10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28FE14u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
        if (branch_taken_0x28fe10) {
            ctx->pc = 0x28FE24u;
            goto label_28fe24;
        }
    }
    ctx->pc = 0x28FE18u;
label_28fe18:
    // 0x28fe18: 0xc09f718
    ctx->pc = 0x28FE18u;
    SET_GPR_U32(ctx, 31, 0x28FE20u);
    ctx->pc = 0x28FE1Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddWallHitCol_0x27dc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FE20u; }
    }
    if (ctx->pc != 0x28FE20u) { return; }
    ctx->pc = 0x28FE20u;
    // 0x28fe20: 0x3c020010
    ctx->pc = 0x28fe20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
label_28fe24:
    // 0x28fe24: 0x2a21024
    ctx->pc = 0x28fe24u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x28fe28: 0x54400004
    ctx->pc = 0x28FE28u;
    {
        const bool branch_taken_0x28fe28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28fe28) {
            ctx->pc = 0x28FE2Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x28FE3Cu;
            goto label_28fe3c;
        }
    }
    ctx->pc = 0x28FE30u;
    // 0x28fe30: 0x10000137
    ctx->pc = 0x28FE30u;
    {
        const bool branch_taken_0x28fe30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28FE34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x28fe30) {
            ctx->pc = 0x290310u;
            goto label_290310;
        }
    }
    ctx->pc = 0x28FE38u;
label_28fe38:
    // 0x28fe38: 0xc640012c
    ctx->pc = 0x28fe38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28fe3c:
    // 0x28fe3c: 0x3c013f80
    ctx->pc = 0x28fe3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x28fe40: 0x44816000
    ctx->pc = 0x28fe40u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28fe44: 0x460c0034
    ctx->pc = 0x28fe44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28fe48: 0x0
    ctx->pc = 0x28fe48u;
    // NOP
    // 0x28fe4c: 0x45010009
    ctx->pc = 0x28FE4Cu;
    {
        const bool branch_taken_0x28fe4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28FE50u;
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x28fe4c) {
            ctx->pc = 0x28FE74u;
            goto label_28fe74;
        }
    }
    ctx->pc = 0x28FE54u;
    // 0x28fe54: 0xc641012c
    ctx->pc = 0x28fe54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fe58: 0x3c0142c8
    ctx->pc = 0x28fe58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17096 << 16));
    // 0x28fe5c: 0x44810000
    ctx->pc = 0x28fe5cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x28fe60: 0x46010034
    ctx->pc = 0x28fe60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28fe64: 0x0
    ctx->pc = 0x28fe64u;
    // NOP
    // 0x28fe68: 0x45010002
    ctx->pc = 0x28FE68u;
    {
        const bool branch_taken_0x28fe68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28FE6Cu;
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x28fe68) {
            ctx->pc = 0x28FE74u;
            goto label_28fe74;
        }
    }
    ctx->pc = 0x28FE70u;
    // 0x28fe70: 0x46000d46
    ctx->pc = 0x28fe70u;
    ctx->f[21] = FPU_MOV_S(ctx->f[1]);
label_28fe74:
    // 0x28fe74: 0x3c013f80
    ctx->pc = 0x28fe74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x28fe78: 0x44810000
    ctx->pc = 0x28fe78u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x28fe7c: 0x0
    ctx->pc = 0x28fe7cu;
    // NOP
    // 0x28fe80: 0x0
    ctx->pc = 0x28fe80u;
    // NOP
    // 0x28fe84: 0x46150343
    ctx->pc = 0x28fe84u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[21];
    // 0x28fe88: 0x3c020010
    ctx->pc = 0x28fe88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
    // 0x28fe8c: 0x2a21024
    ctx->pc = 0x28fe8cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x28fe90: 0x54400016
    ctx->pc = 0x28FE90u;
    {
        const bool branch_taken_0x28fe90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28fe90) {
            ctx->pc = 0x28FE94u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 312)));
            ctx->pc = 0x28FEECu;
            goto label_28feec;
        }
    }
    ctx->pc = 0x28FE98u;
    // 0x28fe98: 0x44800000
    ctx->pc = 0x28fe98u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x28fe9c: 0x46140034
    ctx->pc = 0x28fe9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28fea0: 0x0
    ctx->pc = 0x28fea0u;
    // NOP
    // 0x28fea4: 0x45000010
    ctx->pc = 0x28FEA4u;
    {
        const bool branch_taken_0x28fea4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28FEA8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28fea4) {
            ctx->pc = 0x28FEE8u;
            goto label_28fee8;
        }
    }
    ctx->pc = 0x28FEACu;
    // 0x28feac: 0xc6800000
    ctx->pc = 0x28feacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28feb0: 0x4600a002
    ctx->pc = 0x28feb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x28feb4: 0xe6800000
    ctx->pc = 0x28feb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x28feb8: 0xc6800004
    ctx->pc = 0x28feb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28febc: 0x4600a002
    ctx->pc = 0x28febcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x28fec0: 0xe6800004
    ctx->pc = 0x28fec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x28fec4: 0xc6800008
    ctx->pc = 0x28fec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fec8: 0x4600a002
    ctx->pc = 0x28fec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x28fecc: 0xe6800008
    ctx->pc = 0x28feccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x28fed0: 0x4600ab06
    ctx->pc = 0x28fed0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x28fed4: 0x8fa5009c
    ctx->pc = 0x28fed4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x28fed8: 0x3c01bf00
    ctx->pc = 0x28fed8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48896 << 16));
    // 0x28fedc: 0x44817800
    ctx->pc = 0x28fedcu;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 1);
    // 0x28fee0: 0xc0a3dc2
    ctx->pc = 0x28FEE0u;
    SET_GPR_U32(ctx, 31, 0x28FEE8u);
    ctx->pc = 0x28FEE4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->pc = 0x28F708u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcTargetDir_0x28f708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FEE8u; }
    }
    if (ctx->pc != 0x28FEE8u) { return; }
    ctx->pc = 0x28FEE8u;
label_28fee8:
    // 0x28fee8: 0x8e420138
    ctx->pc = 0x28fee8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 312)));
label_28feec:
    // 0x28feec: 0x30428000
    ctx->pc = 0x28feecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x28fef0: 0x10400007
    ctx->pc = 0x28FEF0u;
    {
        const bool branch_taken_0x28fef0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28FEF4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x28fef0) {
            ctx->pc = 0x28FF10u;
            goto label_28ff10;
        }
    }
    ctx->pc = 0x28FEF8u;
    // 0x28fef8: 0x8c56f7b0
    ctx->pc = 0x28fef8u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 2), 4294965168)));
    // 0x28fefc: 0x3c020001
    ctx->pc = 0x28fefcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x28ff00: 0x8fa60094
    ctx->pc = 0x28ff00u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x28ff04: 0xc23025
    ctx->pc = 0x28ff04u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x28ff08: 0x1000001c
    ctx->pc = 0x28FF08u;
    {
        const bool branch_taken_0x28ff08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28FF0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 6));
        if (branch_taken_0x28ff08) {
            ctx->pc = 0x28FF7Cu;
            goto label_28ff7c;
        }
    }
    ctx->pc = 0x28FF10u;
label_28ff10:
    // 0x28ff10: 0x8e420138
    ctx->pc = 0x28ff10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 312)));
    // 0x28ff14: 0x30424000
    ctx->pc = 0x28ff14u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
    // 0x28ff18: 0x10400007
    ctx->pc = 0x28FF18u;
    {
        const bool branch_taken_0x28ff18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28FF1Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x28ff18) {
            ctx->pc = 0x28FF38u;
            goto label_28ff38;
        }
    }
    ctx->pc = 0x28FF20u;
    // 0x28ff20: 0x8c56f7b4
    ctx->pc = 0x28ff20u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 2), 4294965172)));
    // 0x28ff24: 0x3c020001
    ctx->pc = 0x28ff24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x28ff28: 0x8fa30094
    ctx->pc = 0x28ff28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x28ff2c: 0x621825
    ctx->pc = 0x28ff2cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28ff30: 0x10000012
    ctx->pc = 0x28FF30u;
    {
        const bool branch_taken_0x28ff30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28FF34u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
        if (branch_taken_0x28ff30) {
            ctx->pc = 0x28FF7Cu;
            goto label_28ff7c;
        }
    }
    ctx->pc = 0x28FF38u;
label_28ff38:
    // 0x28ff38: 0x8e420138
    ctx->pc = 0x28ff38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 312)));
    // 0x28ff3c: 0x30420400
    ctx->pc = 0x28ff3cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
    // 0x28ff40: 0x10400007
    ctx->pc = 0x28FF40u;
    {
        const bool branch_taken_0x28ff40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28FF44u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x28ff40) {
            ctx->pc = 0x28FF60u;
            goto label_28ff60;
        }
    }
    ctx->pc = 0x28FF48u;
    // 0x28ff48: 0x8c56f758
    ctx->pc = 0x28ff48u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 2), 4294965080)));
    // 0x28ff4c: 0x3c020001
    ctx->pc = 0x28ff4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x28ff50: 0x8fa40094
    ctx->pc = 0x28ff50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x28ff54: 0x822025
    ctx->pc = 0x28ff54u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28ff58: 0x10000008
    ctx->pc = 0x28FF58u;
    {
        const bool branch_taken_0x28ff58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28FF5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
        if (branch_taken_0x28ff58) {
            ctx->pc = 0x28FF7Cu;
            goto label_28ff7c;
        }
    }
    ctx->pc = 0x28FF60u;
label_28ff60:
    // 0x28ff60: 0x3c020210
    ctx->pc = 0x28ff60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)528 << 16));
    // 0x28ff64: 0x2a21024
    ctx->pc = 0x28ff64u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x28ff68: 0x3c030010
    ctx->pc = 0x28ff68u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
    // 0x28ff6c: 0x54430003
    ctx->pc = 0x28FF6Cu;
    {
        const bool branch_taken_0x28ff6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x28ff6c) {
            ctx->pc = 0x28FF70u;
            SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->pc = 0x28FF7Cu;
            goto label_28ff7c;
        }
    }
    ctx->pc = 0x28FF74u;
    // 0x28ff74: 0x3c020035
    ctx->pc = 0x28ff74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28ff78: 0x8c56f704
    ctx->pc = 0x28ff78u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 2), 4294964996)));
label_28ff7c:
    // 0x28ff7c: 0x982d
    ctx->pc = 0x28ff7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff80: 0x3c020048
    ctx->pc = 0x28ff80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)72 << 16));
    // 0x28ff84: 0x2a21024
    ctx->pc = 0x28ff84u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x28ff88: 0xafa200a4
    ctx->pc = 0x28ff88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x28ff8c: 0x3c020040
    ctx->pc = 0x28ff8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)64 << 16));
    // 0x28ff90: 0x2a21024
    ctx->pc = 0x28ff90u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x28ff94: 0xafa200a8
    ctx->pc = 0x28ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x28ff98: 0x8fa50090
    ctx->pc = 0x28ff98u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28ff9c: 0x5b880
    ctx->pc = 0x28ff9cu;
    SET_GPR_U32(ctx, 23, SLL32(GPR_U32(ctx, 5), 2));
    // 0x28ffa0: 0x241e00f0
    ctx->pc = 0x28ffa0u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 240));
    // 0x28ffa4: 0x0
    ctx->pc = 0x28ffa4u;
    // NOP
label_28ffa8:
    // 0x28ffa8: 0x3c02003b
    ctx->pc = 0x28ffa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x28ffac: 0x2445df80
    ctx->pc = 0x28ffacu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294958976));
    // 0x28ffb0: 0x68a60007
    ctx->pc = 0x28ffb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x28ffb4: 0x6ca60000
    ctx->pc = 0x28ffb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x28ffb8: 0x68a3000f
    ctx->pc = 0x28ffb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x28ffbc: 0x6ca30008
    ctx->pc = 0x28ffbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x28ffc0: 0x8ca40010
    ctx->pc = 0x28ffc0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x28ffc4: 0xb3a60057
    ctx->pc = 0x28ffc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ffc8: 0xb7a60050
    ctx->pc = 0x28ffc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ffcc: 0xb3a3005f
    ctx->pc = 0x28ffccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ffd0: 0xb7a30058
    ctx->pc = 0x28ffd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ffd4: 0xafa40060
    ctx->pc = 0x28ffd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x28ffd8: 0x3c02003b
    ctx->pc = 0x28ffd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x28ffdc: 0x2445df98
    ctx->pc = 0x28ffdcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294959000));
    // 0x28ffe0: 0x68a60007
    ctx->pc = 0x28ffe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x28ffe4: 0x6ca60000
    ctx->pc = 0x28ffe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x28ffe8: 0x68a3000f
    ctx->pc = 0x28ffe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x28ffec: 0x6ca30008
    ctx->pc = 0x28ffecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x28fff0: 0x8ca40010
    ctx->pc = 0x28fff0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x28fff4: 0xb3a60077
    ctx->pc = 0x28fff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28fff8: 0xb7a60070
    ctx->pc = 0x28fff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28fffc: 0xb3a3007f
    ctx->pc = 0x28fffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 127); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x290000: 0xb7a30078
    ctx->pc = 0x290000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 120); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x290004: 0xafa40080
    ctx->pc = 0x290004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x290008: 0x1a600003
    ctx->pc = 0x290008u;
    {
        const bool branch_taken_0x290008 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x29000Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 164)));
        if (branch_taken_0x290008) {
            ctx->pc = 0x290018u;
            goto label_290018;
        }
    }
    ctx->pc = 0x290010u;
    // 0x290010: 0x10c000bf
    ctx->pc = 0x290010u;
    {
        const bool branch_taken_0x290010 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x290014u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x290010) {
            ctx->pc = 0x290310u;
            goto label_290310;
        }
    }
    ctx->pc = 0x290018u;
label_290018:
    // 0x290018: 0x2a620003
    ctx->pc = 0x290018u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 3));
    // 0x29001c: 0x54400005
    ctx->pc = 0x29001Cu;
    {
        const bool branch_taken_0x29001c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x29001c) {
            ctx->pc = 0x290020u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x290034u;
            goto label_290034;
        }
    }
    ctx->pc = 0x290024u;
    // 0x290024: 0x8fa200a8
    ctx->pc = 0x290024u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x290028: 0x104000b9
    ctx->pc = 0x290028u;
    {
        const bool branch_taken_0x290028 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29002Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x290028) {
            ctx->pc = 0x290310u;
            goto label_290310;
        }
    }
    ctx->pc = 0x290030u;
    // 0x290030: 0xc6800004
    ctx->pc = 0x290030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_290034:
    // 0x290034: 0xe7a00034
    ctx->pc = 0x290034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x290038: 0x132080
    ctx->pc = 0x290038u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 19), 2));
    // 0x29003c: 0x27a30050
    ctx->pc = 0x29003cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 80));
    // 0x290040: 0x641821
    ctx->pc = 0x290040u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x290044: 0xc6810000
    ctx->pc = 0x290044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290048: 0xc4620000
    ctx->pc = 0x290048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29004c: 0x46020882
    ctx->pc = 0x29004cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x290050: 0x27a20070
    ctx->pc = 0x290050u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 112));
    // 0x290054: 0x441021
    ctx->pc = 0x290054u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x290058: 0xc6830008
    ctx->pc = 0x290058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29005c: 0xc4400000
    ctx->pc = 0x29005cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290060: 0x46001802
    ctx->pc = 0x290060u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x290064: 0x46001080
    ctx->pc = 0x290064u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x290068: 0xe7a20030
    ctx->pc = 0x290068u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x29006c: 0x46000847
    ctx->pc = 0x29006cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x290070: 0xc4400000
    ctx->pc = 0x290070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290074: 0x46000842
    ctx->pc = 0x290074u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x290078: 0xc4600000
    ctx->pc = 0x290078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29007c: 0x460018c2
    ctx->pc = 0x29007cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x290080: 0x46030840
    ctx->pc = 0x290080u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x290084: 0xe7a10038
    ctx->pc = 0x290084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x290088: 0x8e420008
    ctx->pc = 0x290088u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x29008c: 0x24030002
    ctx->pc = 0x29008cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x290090: 0x10430003
    ctx->pc = 0x290090u;
    {
        const bool branch_taken_0x290090 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x290094u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x290090) {
            ctx->pc = 0x2900A0u;
            goto label_2900a0;
        }
    }
    ctx->pc = 0x290098u;
    // 0x290098: 0x54440010
    ctx->pc = 0x290098u;
    {
        const bool branch_taken_0x290098 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x290098) {
            ctx->pc = 0x29009Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x2900DCu;
            goto label_2900dc;
        }
    }
    ctx->pc = 0x2900A0u;
label_2900a0:
    // 0x2900a0: 0x8e420000
    ctx->pc = 0x2900a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2900a4: 0x24030014
    ctx->pc = 0x2900a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
    // 0x2900a8: 0x431818
    ctx->pc = 0x2900a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2900ac: 0x771021
    ctx->pc = 0x2900acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2900b0: 0x3c040035
    ctx->pc = 0x2900b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x2900b4: 0x2484f7b8
    ctx->pc = 0x2900b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965176));
    // 0x2900b8: 0x441021
    ctx->pc = 0x2900b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2900bc: 0x8c420000
    ctx->pc = 0x2900bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2900c0: 0x4400005
    ctx->pc = 0x2900C0u;
    {
        const bool branch_taken_0x2900c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2900C4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x2900c0) {
            ctx->pc = 0x2900D8u;
            goto label_2900d8;
        }
    }
    ctx->pc = 0x2900C8u;
    // 0x2900c8: 0x54a00004
    ctx->pc = 0x2900C8u;
    {
        const bool branch_taken_0x2900c8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x2900c8) {
            ctx->pc = 0x2900CCu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x2900DCu;
            goto label_2900dc;
        }
    }
    ctx->pc = 0x2900D0u;
    // 0x2900d0: 0x3c020034
    ctx->pc = 0x2900d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2900d4: 0x8c564ab8
    ctx->pc = 0x2900d4u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 2), 19128)));
label_2900d8:
    // 0x2900d8: 0x8e440000
    ctx->pc = 0x2900d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2900dc:
    // 0x2900dc: 0x24840001
    ctx->pc = 0x2900dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2900e0: 0x27a50020
    ctx->pc = 0x2900e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x2900e4: 0x27a60030
    ctx->pc = 0x2900e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2900e8: 0x4600ab06
    ctx->pc = 0x2900e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2900ec: 0x4600bb46
    ctx->pc = 0x2900ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x2900f0: 0x2a0382d
    ctx->pc = 0x2900f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2900f4: 0x8fa8009c
    ctx->pc = 0x2900f4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2900f8: 0x2c0482d
    ctx->pc = 0x2900f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2900fc: 0x260502d
    ctx->pc = 0x2900fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290100: 0xc0a3df8
    ctx->pc = 0x290100u;
    SET_GPR_U32(ctx, 31, 0x290108u);
    ctx->pc = 0x290104u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 29), 148)));
    ctx->pc = 0x28F7E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartMissile_0x28f7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290108u; }
    }
    if (ctx->pc != 0x290108u) { return; }
    ctx->pc = 0x290108u;
    // 0x290108: 0x40882d
    ctx->pc = 0x290108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29010c: 0x6200077
    ctx->pc = 0x29010Cu;
    {
        const bool branch_taken_0x29010c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x290110u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x29010c) {
            ctx->pc = 0x2902ECu;
            goto label_2902ec;
        }
    }
    ctx->pc = 0x290114u;
    // 0x290114: 0x14c0004f
    ctx->pc = 0x290114u;
    {
        const bool branch_taken_0x290114 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x290118u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
        if (branch_taken_0x290114) {
            ctx->pc = 0x290254u;
            goto label_290254;
        }
    }
    ctx->pc = 0x29011Cu;
    // 0x29011c: 0x8e420000
    ctx->pc = 0x29011cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x290120: 0x431818
    ctx->pc = 0x290120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x290124: 0x771021
    ctx->pc = 0x290124u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x290128: 0x3c040035
    ctx->pc = 0x290128u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x29012c: 0x2484f7b8
    ctx->pc = 0x29012cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965176));
    // 0x290130: 0x441021
    ctx->pc = 0x290130u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x290134: 0x8c420000
    ctx->pc = 0x290134u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x290138: 0x4400046
    ctx->pc = 0x290138u;
    {
        const bool branch_taken_0x290138 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29013Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)8 << 16));
        if (branch_taken_0x290138) {
            ctx->pc = 0x290254u;
            goto label_290254;
        }
    }
    ctx->pc = 0x290140u;
    // 0x290140: 0x34841880
    ctx->pc = 0x290140u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 6272));
    // 0x290144: 0x3c030088
    ctx->pc = 0x290144u;
    SET_GPR_U32(ctx, 3, ((uint32_t)136 << 16));
    // 0x290148: 0x34631880
    ctx->pc = 0x290148u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 6272));
    // 0x29014c: 0x8fa50090
    ctx->pc = 0x29014cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x290150: 0x38a20001
    ctx->pc = 0x290150u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 5), 1));
    // 0x290154: 0x60382d
    ctx->pc = 0x290154u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290158: 0x82380b
    ctx->pc = 0x290158u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 4));
    // 0x29015c: 0x8e420008
    ctx->pc = 0x29015cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x290160: 0x24060002
    ctx->pc = 0x290160u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x290164: 0x10460003
    ctx->pc = 0x290164u;
    {
        const bool branch_taken_0x290164 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 6));
        ctx->pc = 0x290168u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x290164) {
            ctx->pc = 0x290174u;
            goto label_290174;
        }
    }
    ctx->pc = 0x29016Cu;
    // 0x29016c: 0x5443000a
    ctx->pc = 0x29016Cu;
    {
        const bool branch_taken_0x29016c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x29016c) {
            ctx->pc = 0x290170u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x290198u;
            goto label_290198;
        }
    }
    ctx->pc = 0x290174u;
label_290174:
    // 0x290174: 0x8fa400a0
    ctx->pc = 0x290174u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x290178: 0x54800007
    ctx->pc = 0x290178u;
    {
        const bool branch_taken_0x290178 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x290178) {
            ctx->pc = 0x29017Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x290198u;
            goto label_290198;
        }
    }
    ctx->pc = 0x290180u;
    // 0x290180: 0x8fa50090
    ctx->pc = 0x290180u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x290184: 0x54a00004
    ctx->pc = 0x290184u;
    {
        const bool branch_taken_0x290184 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x290184) {
            ctx->pc = 0x290188u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x290198u;
            goto label_290198;
        }
    }
    ctx->pc = 0x29018Cu;
    // 0x29018c: 0x3c020300
    ctx->pc = 0x29018cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)768 << 16));
    // 0x290190: 0xe23825
    ctx->pc = 0x290190u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x290194: 0x8e420000
    ctx->pc = 0x290194u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_290198:
    // 0x290198: 0x24030014
    ctx->pc = 0x290198u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
    // 0x29019c: 0x431818
    ctx->pc = 0x29019cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2901a0: 0x771021
    ctx->pc = 0x2901a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2901a4: 0x3c040035
    ctx->pc = 0x2901a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x2901a8: 0x2484f7b8
    ctx->pc = 0x2901a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965176));
    // 0x2901ac: 0x441021
    ctx->pc = 0x2901acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2901b0: 0x8c440000
    ctx->pc = 0x2901b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2901b4: 0x282d
    ctx->pc = 0x2901b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2901b8: 0x44806000
    ctx->pc = 0x2901b8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x2901bc: 0xc09f5fa
    ctx->pc = 0x2901BCu;
    SET_GPR_U32(ctx, 31, 0x2901C4u);
    ctx->pc = 0x2901C0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2901C4u; }
    }
    if (ctx->pc != 0x2901C4u) { return; }
    ctx->pc = 0x2901C4u;
    // 0x2901c4: 0x40802d
    ctx->pc = 0x2901c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2901c8: 0x16110003
    ctx->pc = 0x2901C8u;
    {
        const bool branch_taken_0x2901c8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 17));
        ctx->pc = 0x2901CCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x2901c8) {
            ctx->pc = 0x2901D8u;
            goto label_2901d8;
        }
    }
    ctx->pc = 0x2901D0u;
    // 0x2901d0: 0x1000000d
    ctx->pc = 0x2901D0u;
    {
        const bool branch_taken_0x2901d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2901D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2901d0) {
            ctx->pc = 0x290208u;
            goto label_290208;
        }
    }
    ctx->pc = 0x2901D8u;
label_2901d8:
    // 0x2901d8: 0x24630eb0
    ctx->pc = 0x2901d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
    // 0x2901dc: 0x600013
    ctx->pc = 0x2901dcu;
    ctx->lo = GPR_U32(ctx, 3);
    // 0x2901e0: 0x723e1000
    ctx->pc = 0x2901e0u;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 30); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2901e4: 0xc4410068
    ctx->pc = 0x2901e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2901e8: 0x44800000
    ctx->pc = 0x2901e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2901ec: 0x46000836
    ctx->pc = 0x2901ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2901f0: 0x0
    ctx->pc = 0x2901f0u;
    // NOP
    // 0x2901f4: 0x45000008
    ctx->pc = 0x2901F4u;
    {
        const bool branch_taken_0x2901f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2901F8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2901f4) {
            ctx->pc = 0x290218u;
            goto label_290218;
        }
    }
    ctx->pc = 0x2901FCu;
    // 0x2901fc: 0xc09e964
    ctx->pc = 0x2901FCu;
    SET_GPR_U32(ctx, 31, 0x290204u);
    ctx->pc = 0x290200u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x27A590u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteEffect_0x27a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290204u; }
    }
    if (ctx->pc != 0x290204u) { return; }
    ctx->pc = 0x290204u;
    // 0x290204: 0x200202d
    ctx->pc = 0x290204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_290208:
    // 0x290208: 0xc09e964
    ctx->pc = 0x290208u;
    SET_GPR_U32(ctx, 31, 0x290210u);
    ctx->pc = 0x29020Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x27A590u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteEffect_0x27a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290210u; }
    }
    if (ctx->pc != 0x290210u) { return; }
    ctx->pc = 0x290210u;
    // 0x290210: 0x10000010
    ctx->pc = 0x290210u;
    {
        const bool branch_taken_0x290210 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x290214u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x290210) {
            ctx->pc = 0x290254u;
            goto label_290254;
        }
    }
    ctx->pc = 0x290218u;
label_290218:
    // 0x290218: 0x600000e
    ctx->pc = 0x290218u;
    {
        const bool branch_taken_0x290218 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x29021Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x290218) {
            ctx->pc = 0x290254u;
            goto label_290254;
        }
    }
    ctx->pc = 0x290220u;
    // 0x290220: 0x24420eb0
    ctx->pc = 0x290220u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x290224: 0x400013
    ctx->pc = 0x290224u;
    ctx->lo = GPR_U32(ctx, 2);
    // 0x290228: 0x723e1800
    ctx->pc = 0x290228u;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 30); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29022c: 0xa47000e8
    ctx->pc = 0x29022cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 232), (uint16_t)GPR_U32(ctx, 16));
    // 0x290230: 0x3c040034
    ctx->pc = 0x290230u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x290234: 0x24840eb0
    ctx->pc = 0x290234u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3760));
    // 0x290238: 0x800013
    ctx->pc = 0x290238u;
    ctx->lo = GPR_U32(ctx, 4);
    // 0x29023c: 0x721e1000
    ctx->pc = 0x29023cu;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 30); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x290240: 0x8c420018
    ctx->pc = 0x290240u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x290244: 0x8c630018
    ctx->pc = 0x290244u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x290248: 0x8c440000
    ctx->pc = 0x290248u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29024c: 0xc0b3f94
    ctx->pc = 0x29024Cu;
    SET_GPR_U32(ctx, 31, 0x290254u);
    ctx->pc = 0x290250u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290254u; }
    }
    if (ctx->pc != 0x290254u) { return; }
    ctx->pc = 0x290254u;
label_290254:
    // 0x290254: 0x6200025
    ctx->pc = 0x290254u;
    {
        const bool branch_taken_0x290254 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x290258u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 152)));
        if (branch_taken_0x290254) {
            ctx->pc = 0x2902ECu;
            goto label_2902ec;
        }
    }
    ctx->pc = 0x29025Cu;
    // 0x29025c: 0x3c013f80
    ctx->pc = 0x29025cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x290260: 0x4481a000
    ctx->pc = 0x290260u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x290264: 0x10a00008
    ctx->pc = 0x290264u;
    {
        const bool branch_taken_0x290264 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x290268u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x290264) {
            ctx->pc = 0x290288u;
            goto label_290288;
        }
    }
    ctx->pc = 0x29026Cu;
    // 0x29026c: 0x24630eb0
    ctx->pc = 0x29026cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
    // 0x290270: 0x600013
    ctx->pc = 0x290270u;
    ctx->lo = GPR_U32(ctx, 3);
    // 0x290274: 0x723e1000
    ctx->pc = 0x290274u;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 30); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x290278: 0x8c420014
    ctx->pc = 0x290278u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x29027c: 0x8c440078
    ctx->pc = 0x29027cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x290280: 0xc0b41b8
    ctx->pc = 0x290280u;
    SET_GPR_U32(ctx, 31, 0x290288u);
    ctx->pc = 0x290284u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290288u; }
    }
    if (ctx->pc != 0x290288u) { return; }
    ctx->pc = 0x290288u;
label_290288:
    // 0x290288: 0x3c013f80
    ctx->pc = 0x290288u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29028c: 0x44810000
    ctx->pc = 0x29028cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x290290: 0x46160034
    ctx->pc = 0x290290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290294: 0x0
    ctx->pc = 0x290294u;
    // NOP
    // 0x290298: 0x45030001
    ctx->pc = 0x290298u;
    {
        const bool branch_taken_0x290298 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x290298) {
            ctx->pc = 0x29029Cu;
            ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
            ctx->pc = 0x2902A0u;
            goto label_2902a0;
        }
    }
    ctx->pc = 0x2902A0u;
label_2902a0:
    // 0x2902a0: 0x8e422ac0
    ctx->pc = 0x2902a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 10944)));
    // 0x2902a4: 0x28420063
    ctx->pc = 0x2902a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 99));
    // 0x2902a8: 0x14400005
    ctx->pc = 0x2902A8u;
    {
        const bool branch_taken_0x2902a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2902a8) {
            ctx->pc = 0x2902C0u;
            goto label_2902c0;
        }
    }
    ctx->pc = 0x2902B0u;
    // 0x2902b0: 0x3c013f99
    ctx->pc = 0x2902b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16281 << 16));
    // 0x2902b4: 0x3421999a
    ctx->pc = 0x2902b4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x2902b8: 0x44810000
    ctx->pc = 0x2902b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2902bc: 0x4600a502
    ctx->pc = 0x2902bcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2902c0:
    // 0x2902c0: 0x3c013f80
    ctx->pc = 0x2902c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2902c4: 0x44810000
    ctx->pc = 0x2902c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2902c8: 0x4600a032
    ctx->pc = 0x2902c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2902cc: 0x0
    ctx->pc = 0x2902ccu;
    // NOP
    // 0x2902d0: 0x45010007
    ctx->pc = 0x2902D0u;
    {
        const bool branch_taken_0x2902d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2902D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x2902d0) {
            ctx->pc = 0x2902F0u;
            goto label_2902f0;
        }
    }
    ctx->pc = 0x2902D8u;
    // 0x2902d8: 0x220202d
    ctx->pc = 0x2902d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2902dc: 0x4600a306
    ctx->pc = 0x2902dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2902e0: 0x4600a346
    ctx->pc = 0x2902e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2902e4: 0xc09f63e
    ctx->pc = 0x2902E4u;
    SET_GPR_U32(ctx, 31, 0x2902ECu);
    ctx->pc = 0x2902E8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x27D8F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScaleFX_0x27d8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2902ECu; }
    }
    if (ctx->pc != 0x2902ECu) { return; }
    ctx->pc = 0x2902ECu;
label_2902ec:
    // 0x2902ec: 0x3c020035
    ctx->pc = 0x2902ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2902f0:
    // 0x2902f0: 0x2442f808
    ctx->pc = 0x2902f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965256));
    // 0x2902f4: 0x131880
    ctx->pc = 0x2902f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x2902f8: 0x621821
    ctx->pc = 0x2902f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2902fc: 0x26730001
    ctx->pc = 0x2902fcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x290300: 0x2a620005
    ctx->pc = 0x290300u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 5));
    // 0x290304: 0x1440ff28
    ctx->pc = 0x290304u;
    {
        const bool branch_taken_0x290304 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x290308u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        if (branch_taken_0x290304) {
            ctx->pc = 0x28FFA8u;
            goto label_28ffa8;
        }
    }
    ctx->pc = 0x29030Cu;
    // 0x29030c: 0x260102d
    ctx->pc = 0x29030cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_290310:
    // 0x290310: 0xdfbf0140
    ctx->pc = 0x290310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x290314: 0xdfbe0130
    ctx->pc = 0x290314u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x290318: 0xdfb70120
    ctx->pc = 0x290318u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x29031c: 0xdfb60110
    ctx->pc = 0x29031cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x290320: 0xdfb50100
    ctx->pc = 0x290320u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x290324: 0xdfb400f0
    ctx->pc = 0x290324u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x290328: 0xdfb300e0
    ctx->pc = 0x290328u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29032c: 0xdfb200d0
    ctx->pc = 0x29032cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x290330: 0xdfb100c0
    ctx->pc = 0x290330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x290334: 0xdfb000b0
    ctx->pc = 0x290334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x290338: 0xc7b70168
    ctx->pc = 0x290338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x29033c: 0xc7b60160
    ctx->pc = 0x29033cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x290340: 0xc7b50158
    ctx->pc = 0x290340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x290344: 0xc7b40150
    ctx->pc = 0x290344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x290348: 0x3e00008
    ctx->pc = 0x290348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29034Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28FBA8u: goto label_28fba8;
            case 0x28FBCCu: goto label_28fbcc;
            case 0x28FBF8u: goto label_28fbf8;
            case 0x28FC10u: goto label_28fc10;
            case 0x28FC30u: goto label_28fc30;
            case 0x28FC5Cu: goto label_28fc5c;
            case 0x28FC80u: goto label_28fc80;
            case 0x28FC94u: goto label_28fc94;
            case 0x28FCA0u: goto label_28fca0;
            case 0x28FD78u: goto label_28fd78;
            case 0x28FD8Cu: goto label_28fd8c;
            case 0x28FDF0u: goto label_28fdf0;
            case 0x28FE18u: goto label_28fe18;
            case 0x28FE24u: goto label_28fe24;
            case 0x28FE38u: goto label_28fe38;
            case 0x28FE3Cu: goto label_28fe3c;
            case 0x28FE74u: goto label_28fe74;
            case 0x28FEE8u: goto label_28fee8;
            case 0x28FEECu: goto label_28feec;
            case 0x28FF10u: goto label_28ff10;
            case 0x28FF38u: goto label_28ff38;
            case 0x28FF60u: goto label_28ff60;
            case 0x28FF7Cu: goto label_28ff7c;
            case 0x28FFA8u: goto label_28ffa8;
            case 0x290018u: goto label_290018;
            case 0x290034u: goto label_290034;
            case 0x2900A0u: goto label_2900a0;
            case 0x2900D8u: goto label_2900d8;
            case 0x2900DCu: goto label_2900dc;
            case 0x290174u: goto label_290174;
            case 0x290198u: goto label_290198;
            case 0x2901D8u: goto label_2901d8;
            case 0x290208u: goto label_290208;
            case 0x290218u: goto label_290218;
            case 0x290254u: goto label_290254;
            case 0x290288u: goto label_290288;
            case 0x2902A0u: goto label_2902a0;
            case 0x2902C0u: goto label_2902c0;
            case 0x2902ECu: goto label_2902ec;
            case 0x2902F0u: goto label_2902f0;
            case 0x290310u: goto label_290310;
            default: break;
        }
        return;
    }
    ctx->pc = 0x290350u;
}
