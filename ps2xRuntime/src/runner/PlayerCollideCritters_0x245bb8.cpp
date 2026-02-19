#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerCollideCritters
// Address: 0x245bb8 - 0x245c6c
void PlayerCollideCritters_0x245bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x245bb8u;

    // 0x245bb8: 0x27bdffa0
    ctx->pc = 0x245bb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x245bbc: 0xffbf0040
    ctx->pc = 0x245bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x245bc0: 0xffb30030
    ctx->pc = 0x245bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x245bc4: 0xffb20020
    ctx->pc = 0x245bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x245bc8: 0xffb10010
    ctx->pc = 0x245bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x245bcc: 0xffb00000
    ctx->pc = 0x245bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x245bd0: 0xe7b40050
    ctx->pc = 0x245bd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x245bd4: 0x80982d
    ctx->pc = 0x245bd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245bd8: 0xa0882d
    ctx->pc = 0x245bd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245bdc: 0xc0802d
    ctx->pc = 0x245bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245be0: 0xe0902d
    ctx->pc = 0x245be0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245be4: 0x46006506
    ctx->pc = 0x245be4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x245be8: 0x200202d
    ctx->pc = 0x245be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245bec: 0xc0a684c
    ctx->pc = 0x245BECu;
    SET_GPR_U32(ctx, 31, 0x245BF4u);
    ctx->pc = 0x245BF0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29A130u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterCollideStart_0x29a130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245BF4u; }
    }
    if (ctx->pc != 0x245BF4u) { return; }
    ctx->pc = 0x245BF4u;
    // 0x245bf4: 0x220202d
    ctx->pc = 0x245bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245bf8: 0x200282d
    ctx->pc = 0x245bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245bfc: 0x240302d
    ctx->pc = 0x245bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245c00: 0x4600a306
    ctx->pc = 0x245c00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x245c04: 0x2407ffff
    ctx->pc = 0x245c04u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x245c08: 0x44806800
    ctx->pc = 0x245c08u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x245c0c: 0xc0a6a5c
    ctx->pc = 0x245C0Cu;
    SET_GPR_U32(ctx, 31, 0x245C14u);
    ctx->pc = 0x245C10u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x29A970u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLineCollide_0x29a970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245C14u; }
    }
    if (ctx->pc != 0x245C14u) { return; }
    ctx->pc = 0x245C14u;
    // 0x245c14: 0x40282d
    ctx->pc = 0x245c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245c18: 0x50a0000c
    ctx->pc = 0x245C18u;
    {
        const bool branch_taken_0x245c18 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x245c18) {
            ctx->pc = 0x245C1Cu;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x245C4Cu;
            goto label_245c4c;
        }
    }
    ctx->pc = 0x245C20u;
    // 0x245c20: 0x8ca30004
    ctx->pc = 0x245c20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x245c24: 0x8c630120
    ctx->pc = 0x245c24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 288)));
    // 0x245c28: 0x84640020
    ctx->pc = 0x245c28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x245c2c: 0x24030004
    ctx->pc = 0x245c2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x245c30: 0x54830006
    ctx->pc = 0x245C30u;
    {
        const bool branch_taken_0x245c30 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x245c30) {
            ctx->pc = 0x245C34u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x245C4Cu;
            goto label_245c4c;
        }
    }
    ctx->pc = 0x245C38u;
    // 0x245c38: 0x8e6308ac
    ctx->pc = 0x245c38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 2220)));
    // 0x245c3c: 0x30638000
    ctx->pc = 0x245c3cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 32768));
    // 0x245c40: 0x282d
    ctx->pc = 0x245c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245c44: 0x43280a
    ctx->pc = 0x245c44u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
    // 0x245c48: 0xa0102d
    ctx->pc = 0x245c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_245c4c:
    // 0x245c4c: 0xdfbf0040
    ctx->pc = 0x245c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x245c50: 0xdfb30030
    ctx->pc = 0x245c50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245c54: 0xdfb20020
    ctx->pc = 0x245c54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245c58: 0xdfb10010
    ctx->pc = 0x245c58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245c5c: 0xdfb00000
    ctx->pc = 0x245c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245c60: 0xc7b40050
    ctx->pc = 0x245c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x245c64: 0x3e00008
    ctx->pc = 0x245C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245C68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x245C4Cu: goto label_245c4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x245C6Cu;
}
