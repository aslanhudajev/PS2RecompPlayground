#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ItemFindMBObjectL1
// Address: 0x251280 - 0x251308
void ItemFindMBObjectL1_0x251280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x251280u;

    // 0x251280: 0x27bdffe0
    ctx->pc = 0x251280u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x251284: 0xffbf0010
    ctx->pc = 0x251284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x251288: 0xffb00000
    ctx->pc = 0x251288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25128c: 0x80802d
    ctx->pc = 0x25128cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251290: 0x2405ffff
    ctx->pc = 0x251290u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x251294: 0x2406ffff
    ctx->pc = 0x251294u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x251298: 0xc0b19fe
    ctx->pc = 0x251298u;
    SET_GPR_U32(ctx, 31, 0x2512A0u);
    ctx->pc = 0x25129Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C67F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_Sub_0x2c67f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2512A0u; }
    }
    if (ctx->pc != 0x2512A0u) { return; }
    ctx->pc = 0x2512A0u;
    // 0x2512a0: 0x4410016
    ctx->pc = 0x2512A0u;
    {
        const bool branch_taken_0x2512a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2512A4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2512a0) {
            ctx->pc = 0x2512FCu;
            goto label_2512fc;
        }
    }
    ctx->pc = 0x2512A8u;
    // 0x2512a8: 0x200202d
    ctx->pc = 0x2512a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2512ac: 0x3c05003b
    ctx->pc = 0x2512acu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2512b0: 0xc0bf1c1
    ctx->pc = 0x2512B0u;
    SET_GPR_U32(ctx, 31, 0x2512B8u);
    ctx->pc = 0x2512B4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294936072));
    ctx->pc = 0x2FC704u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x2fc704(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2512B8u; }
    }
    if (ctx->pc != 0x2512B8u) { return; }
    ctx->pc = 0x2512B8u;
    // 0x2512b8: 0x200202d
    ctx->pc = 0x2512b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2512bc: 0x2405ffff
    ctx->pc = 0x2512bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2512c0: 0x2406ffff
    ctx->pc = 0x2512c0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2512c4: 0xc0b19fe
    ctx->pc = 0x2512C4u;
    SET_GPR_U32(ctx, 31, 0x2512CCu);
    ctx->pc = 0x2512C8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C67F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_Sub_0x2c67f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2512CCu; }
    }
    if (ctx->pc != 0x2512CCu) { return; }
    ctx->pc = 0x2512CCu;
    // 0x2512cc: 0x441000b
    ctx->pc = 0x2512CCu;
    {
        const bool branch_taken_0x2512cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2512D0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2512cc) {
            ctx->pc = 0x2512FCu;
            goto label_2512fc;
        }
    }
    ctx->pc = 0x2512D4u;
    // 0x2512d4: 0x200202d
    ctx->pc = 0x2512d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2512d8: 0x3c05003b
    ctx->pc = 0x2512d8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2512dc: 0xc0bf1c1
    ctx->pc = 0x2512DCu;
    SET_GPR_U32(ctx, 31, 0x2512E4u);
    ctx->pc = 0x2512E0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294936080));
    ctx->pc = 0x2FC704u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x2fc704(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2512E4u; }
    }
    if (ctx->pc != 0x2512E4u) { return; }
    ctx->pc = 0x2512E4u;
    // 0x2512e4: 0x200202d
    ctx->pc = 0x2512e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2512e8: 0x2405ffff
    ctx->pc = 0x2512e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2512ec: 0x2406ffff
    ctx->pc = 0x2512ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2512f0: 0xc0b19fe
    ctx->pc = 0x2512F0u;
    SET_GPR_U32(ctx, 31, 0x2512F8u);
    ctx->pc = 0x2512F4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C67F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_Sub_0x2c67f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2512F8u; }
    }
    if (ctx->pc != 0x2512F8u) { return; }
    ctx->pc = 0x2512F8u;
    // 0x2512f8: 0xdfbf0010
    ctx->pc = 0x2512f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2512fc:
    // 0x2512fc: 0xdfb00000
    ctx->pc = 0x2512fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251300: 0x3e00008
    ctx->pc = 0x251300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251304u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2512FCu: goto label_2512fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x251308u;
}
